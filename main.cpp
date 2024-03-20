// Logical Entities Database

#include "graph.h"

int main() {
    Graph g;

    // not yet working...

    // Create nodes and edges
    Node* node1 = new Node("1");
    Node* node2 = new Node("2");
    Edge* edge1 = new Edge(node1, node2);

    g.addNode(node1);
    g.addNode(node2);
    g.addEdge(edge1);

    // Perform operations on the graph

    return 0;
}