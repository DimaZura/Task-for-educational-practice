#include <iostream>
#include <boost/math/distributions/beta.hpp>

#include "internal/Generators/BetaGenerator/BetaGenerator.h"
#include "internal/Graph/Graph.h"


int main() {

    BetaGenerator generator(1,2);

    Graph graph(&generator, 0.1,20);
    graph.ShowAdjList();


}
