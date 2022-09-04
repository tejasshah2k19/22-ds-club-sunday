#include<stdio.h>
#define SIZE 5

int graph[SIZE][SIZE];

void addEdge(int src,int dest){  //0,1 => 1 1,0 => 1
    graph[src][dest] = 1;
    graph[dest][src] = 1; //undirected
}

int main(){
    int src,dest,ans;


    for(src=0;src<SIZE;src++){
        for(dest=0;dest<SIZE;dest++){
            if(graph[src][dest] != 1){
                printf("%d is connected with %d\n",src,dest);
                scanf("%d",&ans);//1 connected
                if(ans == 1){
                    addEdge(src,dest);
                }
            }
        }
    }

    printf("\nGraph : \n");

    for(src=0;src<SIZE;src++){
            printf("\n %d is connected with : ",src);
        for(dest=0;dest<SIZE;dest++){
            if(graph[src][dest] == 1){
                printf("  %d ",dest);
            }
        }
    }

    return 0;
}
