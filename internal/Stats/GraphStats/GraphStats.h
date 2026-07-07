//
// Created by mac on 06.07.2026.
//

#ifndef TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHSTATS_H
#define TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHSTATS_H


// Статистика графа
struct GraphStats {
    int EdgeCount;                              // Число ребер
    float GraphDensity;                         // Плотность графа
    int CountOfComponent;                       // Число компонент связанности
    int SizeOfBiggestComponent;                 // Размер наибольшей компонента (в вершинах)
    int ProportionOfVertexesOfBiggestComponent; // Доля вершин наибольшей компоненты

    // Степени вершин - число инцидентных ребер
    int MinDegree;
    int MidDegree;
    int MaxDegree;

    // Вес ребер
    int MinWeight;
    int MidWeight;
    int MaxWeight;

    float MidShortPathWeight;                   // средний вес кратчайшего пути
    int WeightedDiameter;                       // взвешенный диаметр
                                                // наибольшее кратчайшее расстояние
};


#endif //TASK_FOR_EDUCATIONAL_PRACTICE_GRAPHSTATS_H
