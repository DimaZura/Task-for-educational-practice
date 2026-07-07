//
// Created by mac on 07.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_BETAGENERATOR_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_BETAGENERATOR_H

#include <boost/math/distributions/beta.hpp>

#include "../Generator/Generator.h"

// Бета-генератор весов
class BetaGenerator : public Generator{
public:
    BetaGenerator(float InAlpha, float InBeta, int InMinValue = 1, int InMaxValue = 50);
    int NewValue() override;                           // Получить новое значение

    std::vector<double> GetDiscreteBetaDF();
private:
    float Alpha;        // Параметр распределения
    float Beta;         // Параметр распределения

    int minValue;       // Минимальное значение
    int maxValue;       // Максимальное значение

    boost::math::beta_distribution<> dist;      // Функция распределения для Бета распределения
    std::vector<double> DiscreteBetaDF;                 // Дискретная функция распределения для Бета распределения

    void CreateBetaDistribution();
};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_BETAGENERATOR_H
