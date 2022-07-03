#include<stdio.h>


int fact(int num);
void fibo(int a,int b,int count);
int arraySum(int a[],int n);
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {11,22,33,44,55,66,77,88,99,100};
    printf(" = %d ",fact(5));
    printf("\n");
    fibo(1,2,5);
    printf("\n");
    printf("%d",arraySum(a,5));
    printf("\n");
    printf("%d",arraySum(b,10));
    return 0;
}

int fact(int num){
	if(num==1)
	{
		printf("%d",num);
		return num;
	}
	printf("%d*",num);
	return num*fact(num-1);
}

void fibo(int a,int b,int count){
    if(count!=0){
        printf("%d ",a);
        fibo(b,a+b,--count);
    }
}

int arraySum(int a[],int n){
    if(n==0)
        return 0;
    return a[n-1]+arraySum(a,n-1);//4+3+2+1+0
}














