//
// Created by mac on 06.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_SelectionOfGraphsStats_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_SelectionOfGraphsStats_H

#include "../GraphStats/GraphStats.h"
#include "../AlgoResult/AlgoResult.h"

// Статистика выборки графов
struct SelectionOfGraphsStats {
    GraphStats MinGraphValues;
    GraphStats MidGraphValues;
    GraphStats MaxGraphValues;

    AlgoResult MinResultValues;
    AlgoResult MidResultValues;
    AlgoResult MaxResultValues;
};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_SelectionOfGraphsStats_H
