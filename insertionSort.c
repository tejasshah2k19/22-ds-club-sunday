#include<stdio.h>
#define N 5

int main()
{
    int sort,i,j,x;
    int a[] = { 10,5,2,6,3};

    printf("\nArray Before Sorting");
    for(x=0;x<N;x++)
        printf("  %d",a[x]);


    //sort
    for(i=1;i<N;i++){
        sort=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j] > sort){
                a[j+1]=a[j];
            }else{
                break;
            }
        }
        a[j+1] = sort;
    }


    printf("\nArray After Sorting");
    for(x=0;x<N;x++)
        printf("  %d",a[x]);

    return 0;
}
