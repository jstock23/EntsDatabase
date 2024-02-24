#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <map>

class Graph {
private:
    std::map<std::string, Node*> nodes;
    std::vector<Edge*> edges;

   

public:
    Graph() {

 /*
    
        Root node could have UID 1, which represents Everything.
        Potentially have Nothing node with UID 0.
    
    */

    }
    ~Graph();
    
    void addNode(Node* node);
    void addEdge(Edge* edge);
    void removeNode(std::string nodeId);
    void removeEdge(Edge* edge);
    // Additional methods for querying and manipulation
};

#endif // GRAPH_H