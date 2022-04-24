#include<stdio.h>
#define SIZE 5


int a[SIZE];

int main(){

    int i,min=0,max=SIZE-1,mid,search,found=0;
    printf("Enter Elements in ASC order ");
    for(i=0;i<SIZE;i++){
        printf("\nEnter number : ");
        scanf("%d",&a[i]);
    }


    while(1){
        found = 0;
        min = 0;
        max = SIZE - 1;
        printf("\nEnter number SEARCH : (-1) for Exit ");
        scanf("%d",&search);
        if(search == -1)
            break;


        while(min<= max ){
            mid = (min+max)/2;
            if(a[mid]==search){
                found = 1;
                printf("%d found ",search);
                break;
            }else if( a[mid] > search ){
                max = mid -1 ;

            }else{
                min = mid + 1;
            }

        }

        if(!found)
            printf("%d noT FOUND",search);

    }

    return 0;
}
