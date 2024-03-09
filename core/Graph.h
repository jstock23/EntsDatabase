#ifndef GRAPH_H
#define GRAPH_H

#include <node.h>
#include <edge.h>
#include <string>
#include <vector>
#include <map>

class Graph {
private:
    std::map<std::string, Node*> nodes;
    std::vector<Edge*> edges;

   

public:

    /*
        Root node could have UID 1, which represents Everything.
        Potentially have Nothing node with UID 0.
    */
    Graph();
    ~Graph();

    /*
        New nodes are added to the graph as subsets of an existing graph or Everything by default.
        All nodes need a superset node or else they are not reachable from Everything.
    */
    void addNode(Node* node);
    void addEdge(Edge* edge);
    void removeNode(std::string nodeId);
    void removeEdge(Edge* edge);
    // Additional methods for querying and manipulation
};

#endif // GRAPH_H