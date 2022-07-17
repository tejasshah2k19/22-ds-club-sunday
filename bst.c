#include<stdio.h>

struct node {
	int data;
	struct node *left,*right;
}*root=NULL;

struct node* createNode(int num){
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data  = num;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}


struct node* addNode(struct node *node,int num){//[10],35  [30],35  NULL,35
      struct node *tmp;
      if(node == NULL){
            node = createNode(num);//root
            return node;
      }else{
          if(node->data < num){
            //right
            tmp = addNode(node->right,num);//[30],35  NULL,35
            node->right = tmp;
          }else{
            //left
            tmp = addNode(node->left,num);//[null],5
            node->left = tmp;
          }
      }

 	}

int main()
{


     root =  addNode(root,10);//NULL,10
    addNode(root,5);//[10],5
    addNode(root,30);//[10],30
    addNode(root,35);//[10],35
    addNode(root,25);
    addNode(root,100);

    printf("%d %d %d %d %d %d",root->data,root->left->data,root->right->data,root->right->right->data,root->right->left->data,root->right->right->right->data);
    return 0;
}
