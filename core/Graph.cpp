#include "Graph.h"
#include "InfoBit.h"

Graph::Graph() {

    infoProcessingThread = std::thread(&Graph::processInfoQueue, this);

    Node* everything = new Node();
    everything->id = "1";
    nodes["1"] = everything;
    Node* nothing = new Node();
    nothing->id = "0";
    nodes["0"] = nothing;

}

Graph::~Graph() {
    if (infoProcessingThread.joinable()) {
        infoProcessingThread.join();
    }
}

// Add Node Function

void Graph::addNode(Node* node) {
    nodes[node->id] = node;
}

//Add Edge Function
void Graph::addEdge(Edge* edge) {
    edges.push_back(edge);
}

// Add Info Function
void Graph::addInfo(InfoBit InfoBit) {
    std::lock_guard<std::shared_mutex> lock(infoQueueMutex);
    infoQueue.push(InfoBit);
}

void Graph::processInfoQueue() {
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

void Graph::process(InfoBit info) {
        std::unique_lock<std::mutex> lock(infoProcessingMutex);
        
        //First we test the info against the existing graph.

        //If won't create a conflict, then we alter the graph.

        //Lasly we cleanup redundant edges.


    }


