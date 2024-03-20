#include "Edge.h"

// Constructor
Edge::Edge(Node* source, Node* target, std::string type)
    : source(source), target(target), type(type) {
    // Constructor body is intentionally empty
}

// Destructor
Edge::~Edge() {
    // Destructor body is intentionally empty
    // No dynamic allocation in Edge, so no need for special handling
}

// Setters
void Edge::setSource(Node* source) {
    this->source = source;
}

void Edge::setTarget(Node* target) {
    this->target = target;
}

void Edge::setType(std::string type) {
    this->type = type;
}


// Getters
Node* Edge::getSource() const {
    return source;
}

Node* Edge::getTarget() const {
    return target;
}

std::string Edge::getType() const {
    return type;
}