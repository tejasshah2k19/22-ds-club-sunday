#include<stdio.h>

struct node {
    int

void insertAtLast(){
    if(head == NULL){

    }else{

    }
}

struct edge{
    int src,dest,cost;
    int visited; data;
}*head=NULL;


};

struct graph{
    int totalVertices; //5
    struct edge *edges;//7
    int totalEdges;
};


int main(){
    struct graph g1;
    int i;
    printf("\nHow many Vertices you have? ");
    scanf("%d",g1.totalVertices);

    printf("\nHow many edges you have?");
    scanf("%d",g1.totalEdges);

    for(i=0;i<g1.totalVertices;i++){
        insertLast();
    }

    g1.edges = calloc(g1.totalEdges,sizeof(struct edge));


    for(i=0;i<g1.totalEdges;i++){
        addEdge(g1.edges[i]);
    }

    return 0;

}
