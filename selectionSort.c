#include<stdio.h>

int n = 10;



int main(){

    int a[] = {10	,6	,15	,25	,3	,17	,90,-1,1500,150};
     //int a[] = {10	,600	,1500	,2500	,3000	,17000	,90000};
    int i,j,tmp,x,flag = 1,min;

    printf("\nArray Before Sorting...\n");
    for(x=0;x<n;x++)
        printf("  %d",a[x]);

    for(i=0;i<n;i++){
            printf("\nPASS %d\n",i+1);
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min] > a[j]){
                min=j;
             }
        }
        if(i != min){
            tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
        for(x=0;x<n;x++)
            printf("  %d",a[x]);
    }
    printf("\nArray After Sorting...\n");
    for(x=0;x<n;x++)
        printf("  %d",a[x]);

    return 0;
}
