#include<stdio.h>

struct vertex {
    int data;//10 20 30 50
};



struct edge{
    int src,dest,cost;//0 1 4 , 1 0 4
    int visited;
};

    int totalVertices;
    int totalEdges;
    int i,j,s,d,c;
    struct vertex *vertices;
    struct edge *edges;
    int x=0;
void init(){
    printf("\nEnter total vertices");
    scanf("%d",&totalVertices); // 6

    printf("\nEnter total Edges");
    scanf("%d",&totalEdges); //7

    vertices = (struct vertex*)calloc(totalVertices,sizeof(struct vertex));
    edges = (struct edge*) calloc(totalEdges*2,sizeof(struct edge));
}

void getVertices(){
    for(i=0;i<totalVertices;i++){
        printf("\nEnter vertex value:");
        scanf("%d",&vertices[i].data);
    }
}

void getEdges(){
    for(i=0;i<totalEdges*2;i++){//0
        printf("\nEnter Src - Dest - Cost ");
        scanf("%d%d%d",&s,&d,&c);
        edges[i].src = s;
        edges[i].dest = d;
        edges[i].cost = c;
        i++;//1
        edges[i].src = d;
        edges[i].dest = s;
        edges[i].cost = c;

    }
}

void travel(){

    for(i=0;i<totalVertices;i++){
        printf("\n %d is connected with : ",vertices[i].data);
        for(j=0;j<totalEdges*2;j++){
            if(vertices[i].data == edges[j].src){
                printf(" %d ",edges[j].dest);
            }
        }
    }
}

void addEdges(int s,int d,int c){
    edges[x].src = s;
    edges[x].dest= d;
    edges[x].cost = c;
    x++;
    edges[x].src = d;
    edges[x].dest= s;
    edges[x].cost = c;
    x++;
}
int main(){


    init();
    getVertices();
    //getEdges();

    addEdges(10,20,13);
    addEdges(20,30,10);
    addEdges(30,7,8);
    addEdges(7,9,6);
    addEdges(9,10,11);
    addEdges(10,5,7);
    addEdges(5,30,10);


    travel();

    //printEdges();
    //sortEdges()
    //printEdges();

    return 0;

}
