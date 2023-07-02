#pragma once

typedef struct Nod
{
    char DataType[24];
    void* Data_P;
};


typedef struct  BT
{
    char DataType[24];
    void* ChildL;
    void* ChildR;

} BinaryTree;

