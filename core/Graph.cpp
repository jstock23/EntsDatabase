#include "graph.h"

Graph::Graph() {

    Node* everything = new Node("1");
    nodes.push_back("1", everything);
    Node* nothing = new Node("0");
    nodes.push_back("0", nothing);


}

Graph::~Graph() {
    // Clean up allocated nodes and edges
}

void Graph::addNode(Node* node) {
    nodes[node->id] = node;
}

void Graph::addEdge(Edge* edge) {
    edges.push_back(edge);
}