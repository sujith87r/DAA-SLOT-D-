#include <stdio.h>

#define V 5

void printSolution(int path[]) {
    printf("Hamiltonian Cycle: ");
    for (int i = 0; i < V; i++)
        printf("%d ", path[i]);
    printf("%d", path[0]);
    printf("\n");
}

int isSafe(int v, int graph[V][V], int path[], int pos) {
