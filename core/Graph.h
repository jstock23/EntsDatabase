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



    Graph() {
        infoProcessingThread = std::thread(&Graph::processInfoQueue, this);
    }

    ~Graph() {
        if (infoProcessingThread.joinable()) {
            infoProcessingThread.join();
        }
    }

    void addInfo(InfoBit info);


    /*
        New nodes are added to the graph as subsets of an existing graph or Everything by default.
        All nodes need a superset node or else they are not reachable from Everything.
    */
    void addNode(Node* node);
    void addEdge(Edge* edge);
    void removeNode(std::string nodeId);
    void removeEdge(Edge* edge);


    void processInfoQueue() {
        while (true) {
            std::unique_lock<std::mutex> lock(infoQueueMutex);
            if (!infoToAdd.empty()) {
                InfoBit info = infoToAdd.front();
                infoToAdd.pop();
                lock.unlock();

                process(info);

            } else {
                lock.unlock();
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
    }

    void process(InfoBit info) {
        std::unique_lock<std::mutex> lock(infoProcessingMutex);
        
        //First we test the info against the existing graph.

        //If won't create a conflict, then we alter the graph.

        //Lasly we cleanup redundant edges.


    }
};

#endif // GRAPH_H