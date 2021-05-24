#include <stdio.h>

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
    void add_edge(int u, int v)
    {
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    DisjointSet connected_component()
    {
        DisjointSet S;
        for(int i=0; i<N_VERTICES; i++)
        {
            S.make_set(i);
        }
        for(int i=0; i<N_VERTICES; i++)
        {
            for(int j=0; j<N_VERTICES; j++)
            {
                if(mat[i][j] != 0)
                {
                    if(S.find_set(i) != S.find_set(j))
                    {
                        S.union_set(i, j);
                    }
                }
            }
        }
        return S;
    }
};

int main()
{

    Graph G;
    G.init_graph();
    G.add_edge(0, 1);
    G.add_edge(0, 2);
    G.add_edge(1, 2);
    G.add_edge(1, 3);
    G.add_edge(4, 5);
    G.add_edge(4, 6);
    G.add_edge(7, 8);

    DisjointSet ds = G.connected_component();

    if(ds.same_set(0, 4) == true)
    {
        printf("%d and %d in same component\n", 0, 4);
    }
    else
    {
        printf("%d and %d in different component \n", 0, 4);
    }

    return 0;
}
