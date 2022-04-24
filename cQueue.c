#include<stdio.h>
#define SIZE 5

int q[SIZE];
int f=-1,r=-1;


void insert(){
    int num;
    if(r == SIZE - 1  && f == 0 ){
        printf("\nQ is Full");
    }else if(r == f - 1){
        printf("\nQ is Full");
    }
    else{
        printf("\nEnter number");
        scanf("%d",&num);//60

        if(f == -1){
            f++;
        }

        if(r == SIZE  -1 ){
                r = 0;
        }else{
            r++;
        }

        q[r] = num;
    }

}
void deleteQ(){
    int num;
    if(f == -1 ){
        printf("\nQ is Empty");
    }else{

        num = q[f];
        printf("\n%d deleted!!!",num);

        if(f == r){
            f = -1;r=-1;
        }else if(f == SIZE - 1 ){
            f = 0 ;
        }else{
            f++;
        }
    }

}
void display(){

    int i;
    if(f == -1){
        printf("\nQ empty");
    }else if(f <= r ){
        printf("\nContent of The Q \n");
        for(i=f;i<=r;i++){
            printf("  %d",q[i]);
        }
    }else {
        printf("\nContent of The Q \n");
        for(i=f;i<SIZE;i++){
            printf("  %d",q[i]);
        }
        for(i=0;i<=r;i++){
            printf("  %d",q[i]);
        }
    }
}

int main(){

    int choice ;

    while(1){
        printf("\n0 for exit\n1 for insert\n2 for delete\n3 for display\nenter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                insert();break;
            case 2:
                deleteQ();break;
            case 3:
                display();break;
        }
    }
    return 0;
}
