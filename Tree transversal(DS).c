#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
void printPostorder(struct node* node)
{
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	printf("%d ", node->data);
}
void printInorder(struct node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
}
void printPreorder(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	printPreorder(node->left);
	printPreorder(node->right);
}
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter the root node value:");
	scanf("%d",&a);
	printf("enter the left node value:");
	scanf("%d",&b);
	printf("enter the right node value:");
	scanf("%d",&c);
	printf("enter the left->left node value:");
	scanf("%d",&d);
	printf("enter the left->right node value:");
	scanf("%d",&e);
	printf("enter the right->right node value:");
	scanf("%d",&f);
	printf("enter the right->left node value:");
	scanf("%d",&g);
	struct node* root = newNode(a);
	root->left = newNode(b);
	root->right = newNode(c);
	root->left->left = newNode(d);
	root->left->right = newNode(e);
	root->right->right = newNode(f);
	root->right->left = newNode(g);
	

	printf("\nPreorder traversal of binary tree is \n");
	printPreorder(root);

	printf("\nInorder traversal of binary tree is \n");
	printInorder(root);

	printf("\nPostorder traversal of binary tree is \n");
	printPostorder(root);

	getchar();
	return 0;
}
