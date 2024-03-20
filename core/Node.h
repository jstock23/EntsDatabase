#ifndef NODE_H
#define NODE_H

#include <string>
#include <set>
#include "Graph.h"

class Node {
private:
    //Could create a UID class as wrapper around unsigned int.

    /* Unique id of this set node. Could be expanded to support multiple UIDs. */
    std::string id;

    // Each node should have a set of pointers to nodes allowing sets to be respresented as nodes in the structure
    // Each node should have pointers to its imediate uptree neighbors and its immediate downtree neighbors
    std::set<Node*> superset;
    std::set<Node*> subset;

public:
    //***** CLASS FUNCTIONS *****//

    Node(const std::string& id = "", const std::string& name = "",);
    ~Node();

    // Setters
    void setId(const std::string& id);
    void setName(const std::string& name);

    // Getters
    const std::string& getId() const;
    const std::string& getName() const;
    const std::set<Node*>& getSuperset() const;
    const std::set<Node*>& getSubset() const;

    // Relationship Management
    void addSupersetNode(Node* node);
    void removeSupersetNode(Node* node);
    void addSubsetNode(Node* node);
    void removeSubsetNode(Node* node);
};

#endif // NODE_H