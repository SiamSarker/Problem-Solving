#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define N_VERTICES 8
#define INF 99999
#define NULL -1

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
    }

    void relax(int u, int v, int d[], int p[]) {

        if(d[v]>d[u]+mat[u][v]){
			d[v]=d[u]+mat[u][v];
			p[v]=u;
		}
    }

    void print_shortest_path_tree(int p[], int d[]) {
		for (int i = 0; i < N_VERTICES; i++)
		{
			cout<<i<<" "<<d[i]<<" "<<p[i]<<endl;
		}


    }

    void Bellmanford(int source) {
        int d[N_VERTICES];
        int p[N_VERTICES];
		 for(int i=0;i<N_VERTICES;i++)
        {
           d[i]=INF;
		   p[i]=-1;
        }
		d[source]=0;

		for (int i = 0; i <N_VERTICES ; i++)
		{
			for (int j = 0; j <N_VERTICES ; j++)
			{
				if(mat[i][j]!=0){
					int u=i;
				   int v=j;
				   relax(u,v,d,p);


				}

			}

		}
      int flag=0;
		for (int i = 0; i <N_VERTICES ; i++)
		{
			for (int j = 0; j <N_VERTICES ; j++)
			{
				if(mat[i][j]!=0){
					int u=i;
				   int v=j;
				   if(d[v]>d[u]+mat[u][v]){
			        cout<<"no solution"<<endl;
					flag=1;
					break;
		         }

				}

			}
			if(flag==1) break;

		}

		if(flag==0){
			print_shortest_path_tree(d,p);
		}









        // write your code here
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

    for(int i=0; i<N_VERTICES; i++) {
        for(int j=0; j<N_VERTICES; j++) {
            printf("%3d ", G.mat[i][j]);
        }
        printf("\n");
    }

    G.Bellmanford(0);

    return 0;
}