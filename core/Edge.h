#ifndef EDGE_H
#define EDGE_H

#include <string>


class Edge {
public:

    /*
        There are 2 types of edges in the graph. Edges connecting supersets to subsets are directed from the superset to the subset.
        Edges connecting two disjoint sets are undirected.
    */

    std::string from;
    std::string to;
    
    Edge(std::string uidFrom, std::string uidTo) : from(uidFrom), to(uidTo) {}
      
};

#endif // EDGE_H