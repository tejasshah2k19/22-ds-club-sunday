#include<stdio.h>

struct std {
    char name[10];//10
    int rollNum; //4
    float resut;//4
    int m,s,e;//12 [ 16 ]
};

int main()
{
    int *p,i,x=3;

    //
    p = (int*)malloc(sizeof(int)*x);
    //p => 50 byte --> 16 int , 10 char , 4  float
    //p = (int*)calloc(5,sizeof(int));

    for(i=0;i<x;i++){
        printf("\nEnter number");
        //scanf("%d",&p[i]);
        scanf("%d",p+i);
    }


    for(i=0;i<x;i++){
        //printf("\n%d",p[i]);
        printf("\n%d", *(p+i) );
    }

    free(p);

    return 0;
}
