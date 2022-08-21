#include<stdio.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;

}*root=NULL;


struct node* createNode(int num){
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->left = NULL;
    tmp->right = NULL;
    tmp->height = 1 ;
    return tmp;

}
int calculateHeight(struct node *root){
    int lh=0,rh=0;

    if(root->left != NULL){
        lh = root->left->height;
    }
    if(root->right!=NULL)
        rh = root->right->height;

    return lh > rh ? lh+1:rh+1;
}
struct node* addNode(int num,struct node *root){//35,50
        int height;
        if(root==NULL){
           root = createNode(num);//30
           return root;
        }else{
            if(root->data > num ){
                //left
                root->left =  addNode(num,root->left);//100,NULL
            }else{
                //right
                root->right =  addNode(num,root->right);//100,NULL
            }
        }
        height = calculateHeight(root);
        root->height = height;
        return root;
}

void inOrder(struct node *root){
    if(root == NULL)
        return;
    inOrder(root->left);
    printf("%d(%d) ",root->data,root->height);//25 35 40
    inOrder(root->right);//
}


void preOrder(struct node *root){
    if(root == NULL)
        return;
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);

}

struct node* findMinValueNode(struct node *root){

    struct node *min = root;
    while(min != NULL && min->left != NULL){
        min = min->left;
    }

    return min;

}

struct node* deleteNode(struct node* root,int key){// (50,35) => (35,35)
    struct node* tmp = NULL;
    if(root==NULL){
        return root;
    }
    if(key < root->data){//25 < 50 | 25 < 35 | 25 < 25
        //left
        //50
         root->left = deleteNode(root->left,key);//(50,35) => (35,35)
    }else if(key > root->data){//25 > 50 | 25 > 25
        //right
        root->right = deleteNode(root->right,key);
    }else if(key == root->data){//25 == 25
        if(root->left == NULL && root->right == NULL){
            //leaf
            free(root);
            return NULL;
        }else if(root->left == NULL){//35
            //node with 1 child -> right
            tmp = root->right; //40
            free(root);
            return tmp;
        }else if(root->right == NULL){
            //node with 1 child -> left
            tmp = root->left; //40
            free(root);
            return tmp;

        }else{
            //node with 2 child
            tmp = findMinValueNode(root->right);//80
            root->data = tmp->data;
            root->right = deleteNode(root->right,tmp->data);
        }
    }
    return root;
}





int main(){
    int i=1;

/*    root = addNode(50,root);//NULL
           addNode(100,root);//50
            addNode(35,root);
            addNode(25,root);
            addNode(40,root);
            addNode(150,root);
            addNode(250,root);
*/
        root=addNode(50,root);
            addNode(35,root);
            addNode(25,root);
            addNode(40,root);
            addNode(100,root);
            addNode(80,root);
            addNode(150,root);



            //1 for add
            //2 for print
            //print(root);
    /*
    printf("\n%d ",root->data);//50
    printf("\n%d ",root->left->data);//35
    printf("\n%d ",root->left->left->data);//25
    printf("\n%d ",root->left->right->data);//40
    printf("\n%d ",root->right->data);//100
    printf("\n%d ",root->right->right->data);//150
    printf("\n%d ",root->right->right->right->data);//250
    */
    printf("\nIn Order\n");
    inOrder(root);
   // printf("\nPre Order\n");
   // preOrder(root);
   // printf("\nPost Order\n");
   // postOrder(root);
   // deleteNode(root,25);
   // printf("\nIn Order\n");
   // inOrder(root);


    //deleteNode(root,50);
    //printf("\nIn Order\n");
    //inOrder(root);

    return 0;
}
/*

 RR -> leftRotate
LL -> rightRotate
RL -> rightRotate,leftRotate
LR -> leftRotate,rightRotate


1) left rotate [ node problem -> left ]   RR


struct node *node leftRotate(struct node *node){//30
	struct node *noderight = node->right;//40
	struct node *noderightleft = noderight->left; // null

	noderight->left = node;
	node->right =  noderightleft;
	return noderight;
}

2) right rotate [ node problem -> right ] LL


    AVL ->
    1) BST
    2) BF [ -1 0 1 ]

    1 2 3 4 5 6 7 => avl


    10 30 21 52 65 42 85 34 75 19 80 100

*/
