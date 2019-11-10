//Level order Traversal of a binary Tree
//Asked in GOOGLe
#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int data;
	struct node* left,*right;
};
struct node* createNode(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void LevelOrder(struct node* root)
{
	struct node* temp;
	queue<struct node*> myQ;
	if(root==NULL)
	{
		return;
	}
	myQ.push(root);
	while(!myQ.empty())
	{
		temp=myQ.front();
		myQ.pop();
		cout<<temp->data<<" ";
		if(temp->left)
		myQ.push(temp->left);
		if(temp->right)
		myQ.push(temp->right);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct node *root=createNode(27);
	root->left=createNode(12);
	root->right=createNode(41);
	root->left->left=createNode(6);
	root->left->right=createNode(20);
	root->right->left=createNode(32);
	root->right->right=createNode(53);
	root->left->left->left=createNode(3);
	root->left->left->right=createNode(9);
	root->left->right->left=createNode(13);
	root->left->right->right=createNode(25);
	root->right->left->left=createNode(29);
	root->right->left->right=createNode(37);
	root->right->right->left=createNode(49);
	root->right->right->right=createNode(57);
	LevelOrder(root);
	
}
