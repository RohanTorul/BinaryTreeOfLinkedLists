#pragma once

typedef struct Nod
{
    char DataType[24];
    void* Data_P;
} Node;


typedef struct  BT
{
    char DataType[24];
    void* ChildL;
    void* ChildR;
} BinaryTree;

typedef struct Ll
{
    Node node;
    Node* NextNode;
    Node PreviousNode;

} LinkedList;