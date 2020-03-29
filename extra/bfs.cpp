// Recursive CPP program for level
// order traversal of Binary Tree
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* A binary tree node has data, 
pointer to left child 
and a pointer to right child */
class node
{
public:
    int data;
    node *left, *right;
};

/* Function protoypes */
void printGivenLevel(node *root, int level);
int height(node *node);
node *newNode(int data);

/* Function to print level 
order traversal a tree*/
void printLevelOrder(node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printGivenLevel(root, i);
}

/* Print nodes at a given level */
void printGivenLevel(node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

/* Compute the "height" of a tree -- the number of 
	nodes along the longest path from the root node 
	down to the farthest leaf node.*/
int height(node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

/* Helper function that allocates 
a new node with the given data and 
NULL left and right pointers. */
node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

/* Driver code*/
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}

// This code is contributed by rathbhupendra
int sumOfGivenLevel(Node *root, int level)
{
    if (root == NULL)
        return 0;
    if (level == 1)
        return root->data;
    else if (level > 1)
        return (sumOfGivenLevel(root->left, level - 1) + sumOfGivenLevel(root->right, level - 1));
    return 0;
}
int maxLevelSum(Node *root)
{
    //Your code here
    int h = height(root);
    int sum = INT_MIN;
    int i;
    for (i = 1; i <= h; i++)
        if (sumOfGivenLevel(root, i) > sum)
            sum = sumOfGivenLevel(root, i);
    return sum;
}
