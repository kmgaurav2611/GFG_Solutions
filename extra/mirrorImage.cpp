// https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/mirror-image-2/

#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
};
typedef struct Node *node;
node createNode(int c)
{
	node ptr;
	ptr = (node)malloc(sizeof(struct Node));
	ptr->key = c;
	ptr->left = NULL;
	ptr->right = NULL;
	return (ptr);
}
node temp = NULL;
void searchForNode(int val, node p)
{
	if (p == NULL)
		return;
	else
	{
		searchForNode(val, p->left);
		if (p->key == val)
			temp = p;
		searchForNode(val, p->right);
	}
}

int mirror(node tree1, node tree2, int val)
{
	if ((tree1 == NULL || tree2 == NULL))
	{
		return -1;
	}
	if (tree1->key == val)
		return (tree2->key);
	else if (tree2->key == val)
		return tree1->key;

	int ans = (mirror(tree1->left, tree2->right, val));
	if (ans != -1)
		return ans;

	return (mirror(tree1->right, tree2->left, val));
}

int main()
{
	int nodeCount, queries;
	int parentNode, childNode,searchTarget,mi;
	char LORChild;
	cin >> nodeCount >> queries;
	cin >> parentNode >> childNode >> LORChild;
	node tree = createNode(parentNode);
	if (LORChild == 'L')
		tree->left = createNode(childNode);
	else
		tree->right = createNode(childNode);
	nodeCount -= 2;
	while (nodeCount--)
	{
		cin >> parentNode >> childNode >> LORChild;
		searchForNode(parentNode, tree);
		if (LORChild == 'L')
			temp->left = createNode(childNode);
		else
			temp->right = createNode(childNode);
		temp = NULL;
	}
	cout << endl;
	while (queries--)
	{
		cin >> searchTarget;
		mi = mirror(tree ,tree,searchTarget);
		cout << mi << endl;
	}
	return 0;
}