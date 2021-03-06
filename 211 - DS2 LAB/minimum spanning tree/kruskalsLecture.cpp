#include <stdio.h>
#include <stdlib.h>

#define N_VERTICES 10

class DisjointSet
{
    int p[N_VERTICES];

public:
    void make_set(int x)
    {
        p[x] = x;
    }
    int find_set(int x)
    {
        while(x != p[x])
        {
            x = p[x];
        }
        return x;
    }
    void union_set(int x, int y)
    {
        int a = find_set(x);
        int b = find_set(y);
        p[a] = b;
    }
    bool same_set(int x, int y)
    {
        if(find_set(x) == find_set(y))
            return true;
        return false;
    }
};

struct Edge {
    int u;
    int v;
    int weight;
};

int cmpfunc(const void * a, const void * b) {
    // return ((Edge*)a)->weight > ((Edge*)b)->weight;
    // the mistake was to use > instead of -
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

class Graph
{
public:
    int mat[N_VERTICES][N_VERTICES];
    void init_graph()
    {
        for(int i=0; i<N_VERTICES; i++)
        {
            for(int j=0; j<N_VERTICES; j++)
            {
                mat[i][j] = 0;
            }
        }
    }
    void add_edge(int u, int v, int weight)
    {
        mat[u][v] = weight;
        mat[v][u] = weight;
    }

    int create_edge_list(Edge edgelist[]) {
        int c = 0;
        for(int i=0; i<N_VERTICES; i++) {
            for(int j=i; j<N_VERTICES; j++) {
                if(mat[i][j] != 0) {
                    Edge e;
                    e.u = i;
                    e.v = j;
                    e.weight = mat[i][j];
                    edgelist[c] = e;
                    c++;
                }
            }
        }
        return c;
    }

    void sort_edge_list(Edge edgelist[], int n) {
        qsort(edgelist, n, sizeof(Edge), cmpfunc);
    }
};

int main()
{

    Graph G;
    G.init_graph();
    G.add_edge(0, 1, 4);
    G.add_edge(1, 2, 9);
    G.add_edge(1, 4, 2);
    G.add_edge(3, 4, 15);
    G.add_edge(4, 5, 8);
    G.add_edge(5, 6, 3);
    G.add_edge(5, 7, 10);
    G.add_edge(6, 7, 14);
    G.add_edge(1, 7, 5);
    G.add_edge(0, 7, 6);

    Edge edgelist[10000];
    int nE = G.create_edge_list(edgelist);

    for(int i=0; i<nE; i++) {
        printf("(%d, %d, %d)\n", edgelist[i].u, edgelist[i].v, edgelist[i].weight);
    }

    G.sort_edge_list(edgelist, nE);

    printf("After sorting:\n");
    for(int i=0; i<nE; i++) {
        printf("(%d, %d, %d)\n", edgelist[i].u, edgelist[i].v, edgelist[i].weight);
    }

    return 0;
}
