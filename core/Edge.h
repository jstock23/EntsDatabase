#ifndef EDGE_H
#define EDGE_H

class Edge {
public:
    String from;
    String to;
    
    Edge(String uidFrom, String uidTo) : from(uidFrom), to(uidTo) {}
    
};

#endif // EDGE_H