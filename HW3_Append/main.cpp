#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
    int value;
    node* next;
};
// James Mathson
// CSCI 250
// Assignment 3 - Append
// August 30, 2017
node* append(node *L1, node *L2)
{
    if(L1 == NULL)
        L1 = L2;
    else if (L1->next != NULL)
        append(L1->next, L2);
    else
        L1->next = L2;
    return L1;
}
void display(node* head)
{
    node* list = head;
    while(list)
    {
        cout << list->value << " ";
        list = list->next;
    }
    cout << endl;
}
int main()
{
    node *a, *b, *c, *d, *e, *f, *g;
    a = new node;
    b = new node;
    c = new node;
    d = new node;
    e = new node;
    f = new node;
    g = new node;
    a->value = 4;
    a->next = b;
    b->value = -3;
    b->next = c;
    c->next = NULL;
    c->value = 6;
    d->value = 10;
    d->next = e;
    e->value = 47;
    e->next = f;
    f->value = 1;
    f->next = g;
    g->value = 9;
    g->next = NULL;
    
    display(append(a,d));
    
    
    return 0;
}
