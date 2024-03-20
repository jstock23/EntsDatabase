#ifndef EDGE_H
#define EDGE_H

#include <string>
#include "Node.h"

/**
    Might delete this class... still don't know.
*/
class Edge {
private:
    /*
        There are 2 types of edges in the graph. Edges connecting supersets to subsets are directed from the superset to the subset.
        Superset and subsets are represeted by "^" symbol.
        Edges connecting two disjoint sets are undirected.
        Disjoints sets are represented by "!" symbol.
        There should be edges implying continual hypernym inheritance to the bottom of the.
        There should be edges implying single layer hypernym inheritance.
    */

    // I changed the edge constructor to take Node* objects instead of strings.
    // Each edge should be created between two Node* objects (Pointers to nodes)
    Node* source;
    Node* target;
    std::string type;

public:
    Edge(Node* source, Node* target, std::string type);
    ~Edge();

    // Setters and Getters
    void setSource(Node* source);
    Node* getSource() const;

    void setTarget(Node* target);
    Node* getTarget() const;

    void setType(std::string type);
    std::string getType() const;

};

#endif // EDGE_H