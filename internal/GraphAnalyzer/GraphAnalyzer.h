//
// Created by mac on 07.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHANALYZER_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHANALYZER_H


#include "../Graph/Graph.h"

// Анализатор графа
class GraphAnalyzer {
public:
    static GraphStats GetStats(const Graph& graph);     // Возвращает подробную статистику графа
};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHANALYZER_H
