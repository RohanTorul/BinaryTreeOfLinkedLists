#include "mainHeader.h"
#include <stdio.h>

int copyToString(String *s, String *copyvalue)  // copies the value of one string to another string
{   
    if((*copyvalue).length < 0 ){return -1;}//Because Invalid Length
    s->length = (*copyvalue).length;
    s->value = (*copyvalue).value;
    (*copyvalue).value = NULL;
}

int newBT(BinaryTree *bt, Node Root) // used to Initialise a tree, returns 0 if success
{
    if (bt == NULL)
    {
        return -1;
    }
    else
    {
        bt->Lbranch = NULL; // No Left child
        bt->Rbranch = NULL; // No right child
        bt->Parent = NULL;  // No parent
        copyToString(bt->Leaf.Datatype, Root.Datatype);
        bt->Leaf.Data_P = Root.Data_P;
    }
    return 0;
}

int newLl(LinkedList *ln, Node Head) // used to initialise a Linked List, returns 0 if success
{
    ln->Head = ln;//because it is the head itself
    ln->Tail = ln;//because it is the tail itself
    ln->NextNode = NULL; //because only root present
    ln->PreviousNode = NULL;//because it is the root
}

int addLeaf(BinaryTree *Tree, BinaryTree *leaf) // Add a leaf to a tree, given it's parents, returns 0 if success
{
    //On Hold...must decide on a very customisable approach...potentially it will involve the use of Function pointers.
}

int queueList(LinkedList *Item, LinkedList *List) // Appends a node to the linked list (like in a queue structure), returns 0 if success
{
    (*(*List).Tail)->NextNode = Item;//Appends Item to Linked List
    (*(*List).Tail)->Tail = Item;//Updates Tail
}

int dequeueList(LinkedList *List,Node* node) // removes the head of the linked list (Like in a queue structure), returns 0 if success
{
    node->Data_P = (*List).node.Data_P;//Putting head's data into a node.
    copyToString(node->Datatype,(*List).node.Datatype); //Setting that node's data type specifier.

    (*(*List).Head)->Head = (*(*List).Head)->NextNode;//Updates Head
}

int pushList(LinkedList* Item, LInkedList* List) // Inserts a node as a new head of the Linked list (Like a stack structure), returns 0 if success
{
    (*(*List).Head)->PreviousNode = Item;//Inserts Item to list
    (*(*List).Head)->Head = Item;//Updates Head
}

int pullList(LinkedList* List, Node* node) // removes the head of the linked list (Like in a stack structure), returns 0 if success
{
    node->data_P = (*(*List).Head)->node.Data_P;//Putting Head's data into a node.
    copyToString(node->DataType, ((*List).Head)->node.DataType);//Setting that node's data type specifier.
    
    (*(*List).Head)->Head = (*(*List).Head)->NextNode;//Updates Head
}

int freeTree(BinaryTree *bt) // frees the tree from memory
{
    //IMPLEMENT MEMEMANAGER FIRST
}

int freeList(LinkedList *ll) // frees the linked list from memory
{
    //IMPLEMENT MEMEMANAGER FIRST!, AGAIN!
}

int freeNode(Node *n) // frees node from memory
{
    //IMPLEMENT...YOU KNOW BY NOW XD
}
