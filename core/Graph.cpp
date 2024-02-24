#include "graph.h"

Graph::~Graph() {
    // Clean up allocated nodes and edges
}

void Graph::addNode(Node* node) {
    nodes[node->id] = node;
}

void Graph::addEdge(Edge* edge) {
    edges.push_back(edge);
}