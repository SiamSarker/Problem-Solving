
#include <iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>

using namespace std;
//using namespace __gnu_pbds;
 
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define Max 10000000000000000
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
	
	ll t;
	cin>>t;
 
	read:
	while(t--){
		ll n,a,b,d1,d2;
		cin>>n>>a>>b>>d1>>d2;
 
		vector<ll> graph[n+1];
		for(ll i=1;i<n;i++){
			ll x,y;
			cin>>x>>y;
			graph[x].pb(y);
			graph[y].pb(x);
		}
 
		queue<ll> q;
		ll dis[n+1],d,id=a;
 
		for(ll x=1;x<=2;x++){
			q.push(id);
			memset(dis,-1,sizeof(dis));
			dis[id]=0;d=0;
 
			while(!q.empty()){
				ll u=q.front();
				q.pop();
 
				for(ll i=0;i<graph[u].size();i++){
					ll v=graph[u][i];
					if(dis[v]==-1){
						dis[v]=dis[u]+1;
						id=v;
						d=dis[v];
						q.push(v);
					}
				}
			}
 
			if(dis[b]<=d1 && !(x-1)){
				cout<<"Alice"<<endl;
				goto read;
			}
		}
 
		d2=min(d,d2);
		if(d2>2*d1) cout<<"Bob"<<endl;
		else cout<<"Alice"<<endl;
	}
 
	return 0;
}