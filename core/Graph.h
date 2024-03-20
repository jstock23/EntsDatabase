#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <string>
#include <vector>
#include <map>
#include <shared_mutex>

class Graph {
    

    std::map<std::string, Node*> nodes;
    std::vector<Edge*> edges;

    std::queue<InfoBit> infoToAdd;

    std::mutex infoQueueMutex;
    std::shared_mutex infoProcessingMutex;

    std::thread infoProcessingThread;
   

public:

    Graph();

    ~Graph();

    void addInfo(InfoBit info);

    /*
        New nodes are added to the graph as subsets of an existing graph or Everything by default.
        All nodes need a superset node or else they are not reachable from Everything.
    */
    void addNode(Node* node);
    void addEdge(Edge* edge);
    void removeNode(std::string nodeId);
    void removeEdge(Edge* edge);

    void processInfoQueue();
    void process(InfoBit info);
};

#endif // GRAPH_H