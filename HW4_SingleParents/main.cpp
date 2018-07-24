
#include <iostream>
#include <iomanip>
using namespace std;
struct tree
{
    int value;
    tree* left;
    tree* right;
};
tree* Newtree(int item)
{
    tree* temp = (tree*)malloc(sizeof(tree));
    temp->value = item;
    temp->left = temp->right = NULL;
    return temp;
}
tree* insert(tree* t, int value)
{
    if(t==NULL)
        return Newtree(value);
    if(value < t->value)
        t->left = insert(t->left, value);
    else if(value > t->value)
        t->right = insert(t->right, value);
    return t;
}
int numberLeaves(tree* t)
{
    if(t == NULL)
        return 0;
    else if(t->left==NULL && t->right==NULL)
        return 1;
    else if(t->left==NULL)
        return numberLeaves(t->right);
    else if(t->right==NULL)
        return numberLeaves(t->left);
    else
        return numberLeaves(t->left) + numberLeaves(t->right);
}

// James Mathson
// CSCI 250
// Assignment 4 - Single Parents
// Sept. 1, 2017

int singleParents(tree* t)
{
    if(t == NULL)
        return 0;
    else if(t->left==NULL && t->right==NULL)
        return 0;
    else if(t->left==NULL)
        return 1 + singleParents(t->right);
    else if(t->right==NULL)
        return 1 + singleParents(t->left);
    else
        return singleParents(t->left) + singleParents(t->right);
}

int main()
{
    tree* root = NULL;
    root = insert(root, 25);
    insert(root, 8);
    insert(root,13);
    cout << singleParents(root) << endl;
    insert(root, 65);
    cout << singleParents(root) << endl;
    insert(root, 2);
    insert(root, 82);
    insert(root, 37);
    cout << singleParents(root) << endl;
    insert(root,91);
    insert(root,17);
    insert(root,21);
    insert(root,15);
    insert(root,3);
    cout << singleParents(root) << endl;
    
    return 0;
}
