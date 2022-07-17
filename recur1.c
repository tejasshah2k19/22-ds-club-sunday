#include<stdio.h>

struct node{
    int data;
    struct node *next;
}*head = NULL,*last=NULL;

struct node* createNode(int num){
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = NULL;
    return tmp;
}
void linkedlist(int a[],int size){//30

    if(head == NULL){
        head = createNode(a[size-1]);//50
        last = head;
    }else{
        last->next = createNode(a[size-1]);
        last =last->next;
    }
    linkedlist(a,size-1);//30
}



void printTable(int num,int i){//5,2
    printf("\n%d * %d = %d",num,i,num*i);//5*1=5 5*2=10
    if(i!=10)
        printTable(num,i+1);//5,3
}


int printArraySum(int a[],int size){//a,4
        if(size != 0 )
            return a[size-1] + printArraySum(a,size-1);//a,4,5
        else
            return 0;

}
int main(){

    int a[] = {10,20,30,40,50};
    //printTable(5,1);
    printf("\n\nsum => %d",printArraySum(a,5));

    linkedlist(a,5);

   // printf("\nsum = %d ",sum);
}
