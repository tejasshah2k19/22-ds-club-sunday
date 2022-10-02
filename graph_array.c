#include<stdio.h>
#define SIZE 4

int graph[SIZE][SIZE];
int count =0,cost=0 ;
int visited[SIZE];


void addEdge(int src,int dest,int cost){  //0,1 => 1 1,0 => 1
    graph[src][dest] = cost;
    graph[dest][src] = cost; //undirected
}

int main(){
    int src,dest,ans;


    for(src=0;src<SIZE;src++){//0 1
        for(dest=0;dest<SIZE;dest++){//0  1 2
            if(graph[src][dest] == 0){
                printf("%d is connected with %d\n",src,dest);
                scanf("%d",&ans);//1 connected  -1
               addEdge(src,dest,ans);

            }
        }
    }

    printf("\nGraph : \n");

    for(src=0;src<SIZE;src++){
            printf("\n %d is connected with : ",src);
        for(dest=0;dest<SIZE;dest++){
            if(graph[src][dest] != -1){
                printf("  %d(%d) ",dest,graph[src][dest]);
            }
        }
    }

    printf("\nGrap :=> \n");
    printf(" %d -> ",0);// 2 ->
    visited[0] = 1;
     count++;//3
     src =0;//1
    while(count!=SIZE){//s
        for(dest=0;dest<SIZE;dest++){//0 1
            if(graph[src][dest]!=-1){
                if(visited[dest] == 0 ){
                 printf(" %d -> ",dest);
                  cost = cost + graph[src][dest];
                  visited[dest] = 1;
                 src=dest;
                count++;
                break;
                }
            }
        }
    }

    return 0;
}
