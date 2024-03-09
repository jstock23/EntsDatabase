#ifndef EDGE_H
#define EDGE_H

#include <string>
#include "Node.h"

class Edge {
public:

    /*
        There are 2 types of edges in the graph. Edges connecting supersets to subsets are directed from the superset to the subset.
        Edges connecting two disjoint sets are undirected.
    */

    // I changed the edge constructor to take Node* objects instead of strings.
    // Each edge should be created between two Node* objects (Pointers to nodes)
    Node* from;
    Node* to;
    
    Edge(Node* uidFrom, Node* uidTo) : from(uidFrom), to(uidTo) {}
      
};

#endif // EDGE_H
