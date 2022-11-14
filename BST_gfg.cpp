// C++ program to demonstrate insertion
// in a BST recursively.
#include <iostream>
using namespace std;

class BST
{
	int data;
	BST *left,
    BST *right;

public:	
	// Parameterized constructor.
	BST(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }

	// Insert function.
	BST* Insert(BST*, int);

	// Order traversal.
    void Preorder(BST*);
	void Inorder(BST*);
    void Postorder(BST*);

};

// Parameterized Constructor definition.


// Insert function definition.
BST* BST::Insert(BST* root, int value)
{
	if (!root) {
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data) {
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else if (value < root->data){
		// Insert left node data, if the 'value'
		// to be inserted is smaller than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Preorder(BST* root)
{
	if (root==NULL)
    {
		return;
	}
	cout << root->data << endl;
    Preorder(root->left);	
	Preorder(root->right);
}

void BST ::Inorder(BST* root)
{
	if (root==NULL)
    {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

void BST ::Postorder(BST* root)
{
	if (root==NULL)
    {
		return;
	}
	Postorder(root->left);	
	Postorder(root->right);
    cout << root->data << endl;
}

// Driver code
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);
	return 0;
}