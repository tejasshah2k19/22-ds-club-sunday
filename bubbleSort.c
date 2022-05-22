#include<stdio.h>

int n = 7;



int main(){

    int a[] = {10	,6	,15	,25	,3	,17	,90};
    //int a[] = {10	,600	,1500	,2500	,3000	,17000	,90000};
    int i,j,tmp,x,flag = 1;

    printf("\nArray Before Sorting...\n");
    for(x=0;x<n;x++)
        printf("  %d",a[x]);

    for(i=0;i<n && flag ;i++){
            printf("\nPASS %d\n",i+1);
            flag =0;
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag = 1;
            }
        }
        for(x=0;x<n;x++)
            printf("  %d",a[x]);
    }
    printf("\nArray After Sorting...\n");
    for(x=0;x<n;x++)
        printf("  %d",a[x]);

    return 0;
}
