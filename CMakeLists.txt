cmake_minimum_required(VERSION 4.2)
project(Task_for_educational_practice)

set(CMAKE_CXX_STANDARD 20)

# Подключение библиотеки Boost
# для расчетов бета распределения

find_package(Boost REQUIRED)

if (Boost_FOUND)
    message(STATUS "Boost_FOUND")
    # подключение заголовочных файлов
    include_directories(${Boost_INCLUDE_DIRS})
endif ()

add_executable(Task_for_educational_practice main.cpp
        internal/Graph/Graph.cpp
        internal/Graph/Graph.h
        internal/Stats/GraphStats/GraphStats.h
        internal/Stats/AlgoResult/AlgoResult.h
        internal/GraphProcessor/GraphProcessor.cpp
        internal/GraphProcessor/GraphProcessor.h
        internal/Stats/AlgoResult/Task1/Task1.h
        internal/Stats/AlgoResult/Task2/Task2.h
        internal/Stats/AlgoResult/Task3/Task3.h
        internal/Stats/AlgoResult/Task4/Task4.h
        internal/Stats/SelectionOfGraphsStats/SelectionOfGraphsStats.h
        internal/Stats/AlgoResult/Task1/AlgFromTask1Res.h
        internal/Stats/AlgoResult/Task2/AlgFromTask2Res.h
        internal/Stats/AlgoResult/Task3/AlgFromTask3Res.h
        internal/Stats/AlgoResult/Task2/AlgFromTask2Res.h
        internal/Stats/AlgoResult/Task4/AlgFromTask4Res.h
        internal/Generators/BetaGenerator/BetaGenerator.cpp
        internal/Generators/BetaGenerator/BetaGenerator.h
        internal/Generators/Generator/Generator.cpp
        internal/Generators/Generator/Generator.h
        internal/GraphAnalyzer/GraphAnalyzer.cpp
        internal/GraphAnalyzer/GraphAnalyzer.h)

# Привязка исполняемого файла к библиотеке Boost
target_link_libraries(${PROJECT_NAME} Boost::boost)
