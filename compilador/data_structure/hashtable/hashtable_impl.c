#include <hashtable_node.h>

struct Hashtable {
    HashtableNode* nodes;
    int size;
    int capacity;
}