#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>

class Node {
public:

    //Could create a UID class as wrapper around unsigned int.

    /* Unique id of this set node. Could be expanded to support multiple UIDs. */
    std::string id;

    Node(std::string id) : id(id) {}
};

#endif // NODE_H