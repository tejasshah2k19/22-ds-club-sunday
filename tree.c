#include<stdio.h>

struct node {
	int data;
	struct node *left,*right;
}*root=NULL;


 	void createNode(){
        root = (struct node*)malloc(sizeof(struct node));
        root->data  = 10;
        root->left = NULL;
        root->right = NULL;
 	}

int main()
{
    createNode();

    return 0;
}
