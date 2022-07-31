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
void inOrder(struct node *root){

    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}


void preOrder(struct node *root){

    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root){

    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);

}
int main()
{


     root =  addNode(root,10);//NULL,10
    addNode(root,5);//[10],5
    addNode(root,30);//[10],30
    addNode(root,35);//[10],35
    addNode(root,25);
    addNode(root,100);

    printf("\nInorder\n");
    inOrder(root);
  //  printf("%d %d %d %d %d %d",root->data,root->left->data,root->right->data,root->right->right->data,root->right->left->data,root->right->right->right->data);
    printf("\nPreOrder\n");
    preOrder(root);

    printf("\nPostOrder\n");
    postOrder(root);


    return 0;
}
