// Node.cpp
#include "Node.h"
//#include "Graph.h"

Node::Node(const std::string& id, const std::string& name)
    : id(id), name(name), {
}

Node::~Node() {
}

// Setters
void Node::setId(const std::string& newId) {
    id = newId;
}

void Node::setName(const std::string& newName) {
    name = newName;
}

// Getters
const std::string& Node::getId() const {
    return id;
}

const std::string& Node::getName() const {
    return name;
}

const std::unordered_set<Node*>& Node::getSuperset() const {
    return superset;
}

const std::unordered_set<Node*>& Node::getSubset() const {
    return subset;
}

const std::unordered_set<Node*>& Node::getDisjoint() const {
    return disjoint;
}

// Relationship Management
void Node::addSupersetNode(Node* node) {
    superset.insert(node);
}

void Node::removeSupersetNode(Node* node) {
    superset.erase(node);
}

void Node::addSubsetNode(Node* node) {
    subset.insert(node);
}

void Node::removeSubsetNode(Node* node) {
    subset.erase(node);
}

void Node::addDisjointNode(Node* node) {
    disjoint.insert(node);
}

void Node::removeDisjointNode(Node* node) {
    disjoint.erase(node);
}
