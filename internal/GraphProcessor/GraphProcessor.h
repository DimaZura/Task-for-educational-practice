//
// Created by mac on 06.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHPROCESSOR_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHPROCESSOR_H

#include "../Graph/Graph.h"
#include "../Stats/AlgoResult/AlgoResult.h"

// Анализатор алгоритмов
class GraphProcessor {
public:
    static AlgoResult Calculate(const Graph& graph);        // Возвращает результаты анализа алгоритмов

private:
    static AlgFromTask1Res Kruskal(const Graph& graph);
    static AlgFromTask1Res Prima(const Graph& graph);
    static AlgFromTask1Res Boruvka(const Graph& graph);

    static AlgFromTask2Res FloydWarshall(const Graph& graph);
    static AlgFromTask2Res DijkstraTask2(const Graph& graph);
    static AlgFromTask2Res Jonson(const Graph& graph);

    static AlgFromTask3Res DijkstraTask3(const Graph& graph);
    static AlgFromTask3Res BidirectionalDijkstra(const Graph& graph);

    static AlgFromTask4Res EdmondsKarp(const Graph& graph);
    static AlgFromTask4Res Dinic(const Graph& graph);
    static AlgFromTask4Res PushRelabel(const Graph& graph);


    static std::pair<int, float> Dijkstra(const Graph& graph);
};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHPROCESSOR_H
