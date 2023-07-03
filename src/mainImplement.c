#include "mainHeader.h"
#include <stdio.h>

int newBT(BinaryTree* bt ,Node Root)//used to Initialise a tree, returns 0 if success
{
    if(bt == NULL){return -1;}
    else
    {
        bt->Lbranch = NULL;//No Left child
        bt->Rbranch = NULL;//No right child
        bt->Parent = NULL;//No parent
        bt->Leaf.DataType = Root.DataType;
        bt->Leaf.Data_P = Root.Data_P;
    }
    return 0;
}

int newLl(LinkedList* ln, Node Head)//used to initialise a Linked List, returns 0 if success
{

}

int addLeaf(Node Leaf, Node* Parent)//Add a leaf to a tree, given it's parents, returns 0 if success
{

}

int queueList(Node node)//Appends a node to the linked list (like in a queue structure), returns 0 if success
{

}

int dequeueList(Node node)//removes the head of the linked list (Like in a queue structure), returns 0 if success
{

}

int pushList(Node node)//Inserts a node as a new head of the Linked list (Like a stack structure), returns 0 if success
{

}

int pullList(Node node)//removes the head of the linked list (Like in a stack structure), returns 0 if success
{

}

int freeTree(BinaryTree* bt)//frees the tree from memory
{

}

int freeList(LinkedList* ll)//frees the linked list from memory
{

}

int freeNode(Node* n)//frees node from memory
{

}
