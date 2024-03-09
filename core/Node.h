#ifndef NODE_H
#define NODE_H

#include <string>
#include <set>
#include "Graph.h"

class Node {
public:
    Node();
    ~Node();


    //Could create a UID class as wrapper around unsigned int.

    /* Unique id of this set node. Could be expanded to support multiple UIDs. */
    std::string id;
   
    // Each node should have a set of pointers to nodes allowing sets to be respresented as nodes in the structure
    // Each node should have pointers to its imediate uptree neighbors and its immediate downtree neighbors
    std::set<Node*> superset;
    std::set<Node*> subset;
    
    // Each node should have unique set of nodes that represents its definition
    // The definition should follow the graph datastructure of the linguistic meaning
    Graph* definition;

    Node(std::string id, std::set<Node*> superset, std::set<Node*> subset, Graph* definition) : 
    id(id), superset(superset), subset(subset), definition(definition){}

    // The contstructure should use existing edges to build this out or new edges provided as input to a function


};

#endif // NODE_H