#include<stdio.h>

#define SIZE 10

int main(){
    int graph[SIZE][SIZE];
    int vertics, edges;
    int i, j;

    printf("Enter the Number of Vartices: \n");
    scanf("%d", &vertics);
    for (int i = 0; i < vertics;i++){
        for (int j = 0; j < vertics;j++){
            graph[i][j] = 0;
        }
    }

    printf("enter the number of edges: \n");
    scanf("%d", &edges);

    printf("Enter the edges (format: start end)\n");
    for (int i = 0; i < edges;i++){
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v]=1;
        graph[v][u]=1;
    }
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < vertics; i++)
    {
        for (int j = 0; j < vertics; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
