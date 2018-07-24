
#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
    int value;
    node* next;
};
void appendHelp(node* L1, node* L2)
{
    if(L1->next == NULL)
        L1->next = L2;
    else
        appendHelp(L1->next, L2);
}
node* append(node *L1, node *L2)
{
    if(L1 == NULL)
        L1 = L2;
    else if (L1->next != NULL)
        append(L1->next, L2);
    else L1->next = L2;
    return L1;
    
}

node* reverse(node* list)
{
    node* rest;
    if(list == NULL||list->next == NULL)
    {
        return list;
    }
    rest = reverse(list->next);
    list->next->next = list;
    list->next = NULL;
    return rest;
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
    c->next = d;
    c->value = 6;
    d->value = 10;
    d->next = e;
    e->value = 47;
    e->next = f;
    f->value = 1;
    f->next = g;
    g->value = 9;
    g->next = NULL;
    
    display(a);
    display(reverse(a));
    
    
    return 0;
}