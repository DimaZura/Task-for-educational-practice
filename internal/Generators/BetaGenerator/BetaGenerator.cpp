//
// Created by mac on 07.07.2026.
//

#include "BetaGenerator.h"

#include <iostream>
#include <random>
#include <boost/math/distributions/beta.hpp>

BetaGenerator::BetaGenerator(float InAlpha, float InBeta, int InMinValue, int InMaxValue) {
    if (InAlpha <=0 || InBeta <=0) {
        throw std::runtime_error("BetaGenerator::BetaGenerator InAlpha and InBeta must be > 0");
    }


    if (InMinValue < 0 || InMinValue > InMaxValue) {
        throw std::runtime_error("BetaGenerator::BetaGenerator InValues is incorrect");
    }

    Alpha = InAlpha;
    Beta = InBeta;
    minValue = InMinValue;
    maxValue = InMaxValue;

    dist = boost::math::beta_distribution<>(Alpha, Beta);
    CreateBetaDistribution();
}

int BetaGenerator::NewValue() {

    // Равномерное распределение
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> d_01(0, 1);

    double value = d_01(gen);

    for (int i = 0 ;i < DiscreteBetaDF.size(); i++) {
        if (value <= DiscreteBetaDF[i]) {
            return i+minValue;
        }
    }

    throw std::runtime_error("BetaGenerator::NewValue Ошибка генерации величины");
}

std::vector<double> BetaGenerator::GetDiscreteBetaDF() {
    return DiscreteBetaDF;
}

void BetaGenerator::CreateBetaDistribution() {

    std::vector<double> IntervalProbability;    // Массив вероятностей попадания в интервалы
    double IntervalProbabilitySum = 0;          // Общая Сумма вероятностей попадания в интервалы

    for (int k = minValue; k <= maxValue; k++) {
        double Left = double(k-minValue)/(maxValue-minValue+1);
        double Right = double(k-minValue+1)/(maxValue-minValue+1);

        double q_k = cdf(dist, Right) - cdf(dist, Left);

        IntervalProbability.push_back(q_k);
        IntervalProbabilitySum+=q_k;
    }


    double CumulativeProbability = 0;           // Накопленная вероятность

    for (int k = minValue; k <= maxValue; k++) {
        CumulativeProbability += IntervalProbability[k-minValue]/IntervalProbabilitySum;
        DiscreteBetaDF.push_back(CumulativeProbability);
    }
}