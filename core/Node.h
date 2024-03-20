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
    // Each node should have pointers to its imediate neighbors in the reduced graph.
    std::unordered_set<Node*> superset;
    std::unordered_set<Node*> subset;
    std::unordered_set<Node*> disjoint;


public:

    Node(const std::string& id = "", const std::string& name = "",);
    ~Node();

    // Setters
    void setId(const std::string& id);
    void setName(const std::string& name);

    // Getters
    const std::string& getId() const;
    const std::string& getName() const;
    const std::unordered_set<Node*>& getSuperset() const;
    const std::unordered_set<Node*>& getSubset() const;
    const std::unordered_set<Node*>& getDisjoint() const;

    /*
        Need to decide how to handle edge creation and destruction.
        These functions should probably only be called by the Graph class or when loading from file.
        This is because we can not allow access to the nodes directly unless the permutations are tested
        and sanitized.
    */

    // Relationship Management
    void addSupersetNode(Node* node);
    void removeSupersetNode(Node* node);
    void addSubsetNode(Node* node);
    void removeSubsetNode(Node* node);
    void addDisjointNode(Node* node);
    void removeDisjointNode(Node* node);
};

#endif // NODE_H
