//
// Created by mac on 06.07.2026.
//

#include "Graph.h"

#include <iostream>
#include <ostream>
#include <random>


Graph::Graph(Generator* InGeneratorOfWeight, float InP, int InC) {
    C = InC;
    P = InP;
    GeneratorOfWeight = InGeneratorOfWeight;

    GenerateGraph();
}

std::vector<std::vector<std::pair<int, int>>> Graph::GetAdjList() {
    return AdjList;
}

void Graph::ShowAdjList() {
    for (int i = 0; i < AdjList.size(); i++) {
        for (auto edge : AdjList[i]) {
            std::cout << i << " " << edge.first << " " << edge.second << "\n";
        }
        std::cout <<"\n\n";
    }
}

// Производит генерацию графа с учетом
// выбранных параметров
void Graph::GenerateGraph() {
    AdjList.resize(C);

    // Равномерное распределение
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> d_01(0, 1);

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < C; j++) {
            if (d_01(gen) < P) {
                int weight = GeneratorOfWeight->NewValue();

                this->AdjList[i].push_back(std::pair<int, int>(j, weight));
                this->AdjList[j].push_back(std::pair<int, int>(i, weight));
            }
        }
    }

}
