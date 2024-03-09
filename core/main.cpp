// Logical Entities Database

#include "Edge.h"
#include "Graph.h"
#include "Node.h"

int main() {
    Graph g;

    // Create nodes and edges
    Node* node1 = new Node();
    Node* node2 = new Node();
    Edge* edge1 = new Edge(node1, node2);

    g.addNode(node1);
    g.addNode(node2);
    g.addEdge(edge1);

    // Perform operations on the graph

    return 0;
}