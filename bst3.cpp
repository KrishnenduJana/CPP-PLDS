// C++ program to demonstrate insertion
// in a BST recursively.
#include <iostream>
using namespace std;

class BST
{
    public:
    int data;
	BST *left, *right;
	// Parameterized constructor.
	BST(int);

	// Insert function.
	void Insert(BST* &root, int value);
    BST* search(BST* root, int key);

	// Inorder traversal.
	void Inorder(BST*);
    void Postorder(BST*);
};


// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
void Insert(BST* &root, int value)
{
	if (root==NULL) {
		// Insert the first node, if root is NULL.
		root = new BST(value);
	}

	// Insert data.
	if (value > root->data) {
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		Insert(root->right, value);
	}
	else if (value < root->data){
		// Insert left node data, if the 'value'
		// to be inserted is smaller than 'root' node data.

		// Process left nodes.
		Insert(root->left, value);
	}
}

BST* search(BST* root, int key)
{
    if(root==NULL)
    return root;

    if(root->data == key)
    return root;

    if(root->data>key)
    return search(root->left, key);
    if(root->data>key)
    return search(root->right, key);
}

// Inorder traversal function.
// This gives data in sorted order.
void Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}

void Postorder(BST* root)
{
	if (root==NULL)
    {
		return;
	}
	Postorder(root->left);	
	Postorder(root->right);
    cout << root->data << " ";
}
// Driver code
int main()
{
	BST *root = NULL;
	Insert(root, 50);
	Insert(root, 30);
	Insert(root, 20);
	Insert(root, 40);
	Insert(root, 70);
	Insert(root, 60);
	Insert(root, 80);

	Inorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    if(search(root, 30)==NULL)
	cout<<"Element not found";
	else
	cout<<"Element found";
	return 0;
}