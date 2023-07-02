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

int newBT(Node Root);

int newLl(Node Head);

int addLeaf(Node Leaf, Node* Parent);

int queueNode(Node node);

int dequeueNode(Node node);


