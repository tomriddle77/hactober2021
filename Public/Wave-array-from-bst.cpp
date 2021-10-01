
#include <bits/stdc++.h>
using namespace std;

// Node of the Binary Search tree
struct Node {
	int data;
	Node* right;
	Node* left;

	// Constructor
	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

// Function to convert Binary Search
// Tree into a wave Array
void toWaveArray(Node* root)
{
	// Stores the final wave array
	vector<int> waveArr;

	stack<Node*> s;
	Node* curr = root;

	// Perform the Inorder traversal
	// of the given BST
	while (curr != NULL || s.empty() == false) {

		// Reach the left most Node of
		// the curr Node
		while (curr != NULL) {

			// Place pointer to a tree node
			// in stack before traversing
			// the node's left subtree
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();

		// Insert into wave array
		waveArr.push_back(curr->data);

		// Visit the right subtree
		curr = curr->right;
	}

	// Convert sorted array into wave array
	for (int i = 0;
		i + 1 < waveArr.size(); i += 2) {
		swap(waveArr[i], waveArr[i + 1]);
	}

	// Print the answer
	for (int i = 0; i < waveArr.size(); i++) {
		cout << waveArr[i] << " ";
	}
}

// Driver Code
int main()
{
	Node* root = new Node(8);
	root->left = new Node(4);
	root->right = new Node(12);
	root->right->left = new Node(10);
	root->right->right = new Node(14);
	root->left->left = new Node(2);
	root->left->right = new Node(6);

	toWaveArray(root);

	return 0;
}
