//
// Created by mac on 06.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_GRAPH_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_GRAPH_H

#include <vector>
#include "../Generators/Generator/Generator.h"
#include "../Stats/GraphStats/GraphStats.h"

// Граф
class Graph {
public:
    int C;          // количество вершин
    float P;        // вероятность появления ребра

    Graph(Generator* InGeneratorOfWeight, float InP = 0.2, int InC = 500);

    std::vector<std::vector<std::pair<int, int>>> GetAdjList();
    void ShowAdjList();

protected:
    Generator* GeneratorOfWeight;                               // генератор весов
    std::vector<std::vector<std::pair<int, int>>> AdjList;      // список смежности pair(dest, weight)

    void GenerateGraph();                                       // генератор графа

};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_GRAPH_H
