#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
	int key;
	node* left;
	node* right;
};

void visit(node* n)
{
	cout << n->key << endl;
}

void inorder(node* root)
{
	if(root != NULL)
	{
		inorder(root->left);
		visit(root);
		inorder(root->right);
	}
}

node* newNode(int key)
{
	node* n = new node;
	n->key = key;
	n->left = NULL;
	n->right = NULL;
	return n;
}

node* insert(node* n, int value)
{
	if(n == NULL)
		return newNode(value);
	if(value < n->key)
		n->left = insert(n->left, value);
	else if(value > n->key)
		n->right = insert(n->right, value);
	return n;
}

int max(node* root)
{
	while(root->right != NULL)
	{
		root = root->right;
	}
	return root->key;
}

int min(node* root)
{
	while(root->left != NULL)
	{
		root = root->left;
	}
	return root->key;
}
	
bool BST(node* root)
{
	if(root == NULL)
		return true;
	if( root->left != NULL && max(root->left) > root->key)
		return false;
	if( root->right != NULL && min(root->right) <= root->key)
		return false;
	if(!BST(root->left) || !BST(root->right))
	
		return false;
	else 
		return true;
}

void verifyBST(node* n)
{
	if(!BST(n))
		cout << "This is Not a Binary Search Tree" << endl;
	else
		cout << "This is a Binary Search Tree" << endl;
}

int main()
{
	node* leftchild;
	node* rightchild;
	node* root = NULL;
	root = insert(root, 5);
	insert(root, 3);
	insert(root, 4);
	insert(root, 17);
	insert(root, 8);
	insert(root, 12);
	insert(root, 2);
	insert(root, 1);
	inorder(root);
	verifyBST(root);
	
	root = newNode(8);
	root->left = newNode(7);
	root->right = newNode(9);
	leftchild = root->left;
	leftchild->left = newNode(10);
	leftchild->right = newNode(2);
	rightchild = root->right;
	rightchild->left = newNode(23);
	rightchild->right = newNode(-2);
	inorder(root);
	verifyBST(root);
	
	root = newNode(5);
	root->left = newNode(1);
	root->left->left = newNode(3);
	inorder(root);
	verifyBST(root);
	
	root = newNode(8);
	root->left = newNode(5);
	root->left->left = newNode(3);
	inorder(root);
	verifyBST(root);
	
	root = newNode(5);
	root->left = newNode(3);
	leftchild = root->left;
	leftchild->left = newNode(1);
	leftchild->right = newNode(4);
	leftchild->right->right = newNode(2);
	inorder(root);
	verifyBST(root);


	return 0;
}
