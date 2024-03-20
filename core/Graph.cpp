#include "Graph.h"
#include "InfoBit.h"

Graph::Graph() {

    Node* everything = new Node();
    everything->id = "1";
    nodes["1"] = everything;
    Node* nothing = new Node();
    nothing->id = "0";
    nodes["0"] = nothing;

}

Graph::~Graph() {
    // Clean up allocated nodes and edges
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
