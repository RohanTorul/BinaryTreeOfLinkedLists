#pragma once

typedef struct Nod
{
    char DataType[24];
    void* Data_P;
} Node;


typedef struct  BT
{
    Node Leaf;
    Node* Lbranch;
    Node* Rbranch;
} BinaryTree;

typedef struct Ll
{
    Node node;
    Node* NextNode;
    Node* PreviousNode;

} LinkedList;

int newBT(Node Root);//used to Initialise a tree, returns 0 if success

int newLl(Node Head);//used to initialise a Linked List, returns 0 if success

int addLeaf(Node Leaf, Node* Parent);//Add a leaf to a tree, given it's parents, returns 0 if success

int queueList(Node node);//Appends a node to the linked list (like in a queue structure), returns 0 if success

int dequeueList(Node node);//removes the head of the linked list (Like in a queue structure), returns 0 if success

int pushList(Node node);//Inserts a node as a new head of the Linked list (Like a stack structure), returns 0 if success

int pullList(Node node);//removes the head of the linked list (Like in a stack structure), returns 0 if success

int freeTree(BinaryTree* bt);//frees the tree from memory

int freeList(LinkedList* ll);//frees the linked list from memory

int freeNode(Node* n);//frees node from memory

