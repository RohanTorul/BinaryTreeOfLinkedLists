#pragma once
#include <stdlib.h>//tried (not so)hard not to include this...but I need them Malloc
#define safedo(a, E) E = (a != 0)
int E;
struct memUnit{
   int length;
   void* Element;
};
struct memeManager{
   int length;
   struct memUnit* units[1024];
};
struct memeManager MEM_MANAGER;

typedef struct string
{
    int length;
    char** value;
} String;

typedef struct Nod
{
    String* Datatype;
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
    LinkedList **Head;
    LinkedList **Tail;
    Node node;
    LinkedList *NextNode;
    LinkedList *PreviousNode;

} LinkedList;

//IN CASE I FORGET ADDING IN THE FUNCTION DESCRIPTIONS: ALL INT FUNCTIONS, UNLESS DESCRIED OTHERWISE, WILL RETURN INT FOR SUCESS.

//TENTATIVE MEMEMANAGER FUNCTIONS

int AddUnit(int Size/*In bytes?...IDFK*/, void* p);//Used to Allocate memory, uses the MEM_MANAGER instance

int RemoveUnit(void* p);//I'm sure this will be updated very soon....MAYBE a dictionary will have to be implemented to randomly acecss MemUnits.

int copyToString(String *s, String* copyvalue); // copies the value of one string to another string

int newString(); //creates new String ATTENTION USES MALLOC!

int newBT(BinaryTree *bt, Node Root); // used to Initialise a tree, returns 0 if success

int newLl(LinkedList *ln, Node Head); // used to initialise a Linked List, returns 0 if success

int addLeaf(BinaryTree *Tree, BinaryTree *leaf); // Add a leaf(a binary tree) to a tree, returns 0 if success

int queueList(LinkedList *Item, LinkedList *List); // Appends a node to the linked list (like in a queue structure), returns 0 if success

int dequeueList(LinkedList *List,Node* node); // removes the head of the linked list (Like in a queue structure), returns 0 if success

int pushList(LinkedList* Item, LinkedList* List); // Inserts a node as a new head of the Linked list (Like a stack structure), returns 0 if success

int pullList(Node node); // removes the head of the linked list (Like in a stack structure), returns 0 if success

int freeTree(BinaryTree *bt); // frees the tree from memory

int freeList(LinkedList *ll); // frees the linked list from memory

int freeNode(Node *n); // frees node from memory

int copyNode(Node *node, Node n); // copies a node's content into another one (would be like Node1 = Node2)
