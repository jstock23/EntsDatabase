#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>

class Node {
public:
    std::string id; // Unique identifier for the nodedd

    Node(std::string id) : id(id) {}
};

#endif // NODE_H