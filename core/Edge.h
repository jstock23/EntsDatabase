#ifndef EDGE_H
#define EDGE_H

class Edge {
public:

    /*
        There are 2 types of edges in the graph. Edges connecting supersets to subsets are directed from the superset to the subset.
        Edges connecting two disjoint sets are undirected.
    */

    String from;
    String to;
    
    Edge(String uidFrom, String uidTo) : from(uidFrom), to(uidTo) {}
    
};

#endif // EDGE_H