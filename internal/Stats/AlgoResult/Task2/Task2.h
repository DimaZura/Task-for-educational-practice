//
// Created by mac on 06.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_TASK2_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_TASK2_H

#include "AlgFromTask2Res.h"

struct Task2 {
    AlgFromTask2Res FloydWarshall;
    AlgFromTask2Res Dijkstra;
    AlgFromTask2Res Jonson;

    // совпадение результатов
    bool MatchingResults;
};

#endif //TASK_FOR_EDUCATIONAL_PRACTICE_TASK2_H
