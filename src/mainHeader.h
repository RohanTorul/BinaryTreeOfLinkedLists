#pragma once
#define safedo(a, E) E = (a != 0)
int E;
typedef struct string
{
    int length;
    char value[];
} String;

typedef struct Nod
{
    String Datatype;
    void *Data_P;
} Node;

typedef struct BT
{
    Node Leaf;
    BinaryTree *Lbranch;
    BinaryTree *Rbranch;
    BinaryTree *Parent;
} BinaryTree;

typedef struct Ll
{
    LinkedList *Head;
    LinkedList *Tail;
    Node node;
    LinkedList *NextNode;
    LinkedList *PreviousNode;

} LinkedList;

int copytostring(String *s, String copyvalue); // copies the value of one string to another string

int newBT(BinaryTree *bt, Node Root); // used to Initialise a tree, returns 0 if success

int newLl(LinkedList *ln, Node Head); // used to initialise a Linked List, returns 0 if success

int addLeaf(Node Leaf, Node *Parent); // Add a leaf to a tree, given it's parents, returns 0 if success

int queueList(Node node); // Appends a node to the linked list (like in a queue structure), returns 0 if success

int dequeueList(Node node); // removes the head of the linked list (Like in a queue structure), returns 0 if success

int pushList(Node node); // Inserts a node as a new head of the Linked list (Like a stack structure), returns 0 if success

int pullList(Node node); // removes the head of the linked list (Like in a stack structure), returns 0 if success

int freeTree(BinaryTree *bt); // frees the tree from memory

int freeList(LinkedList *ll); // frees the linked list from memory

int freeNode(Node *n); // frees node from memory

int copyNode(Node *node, Node n); // copies a node's content into another one (would be like Node1 = Node2)
