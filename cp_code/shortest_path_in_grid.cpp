#include <bits/stdc++.h>
  using namespace std;

//COPY THE BLACKBOX, there is no need to change anything in it.
//Check the main function at bottom for USAGE

//****************BLACKBOX START*****************
//START COPYING FROM HERE

typedef int ll;

class Hash {
  private:
	map<tuple<int,int,int>,int>hash_table;
  public:
	Hash () {}
	int hash(int x){
		return hash({x,0,0});
	}
	int hash(tuple<int,int>x){
		return hash({get<0>(x),get<1>(x),0});
	}
	int hash(tuple<int,int,int>x){
		if(hash_table.find(x)!=hash_table.end())
			return hash_table[x];
		int new_hash = hash_table.size();
		hash_table[x]=new_hash;
		return new_hash;
	}
};

class Graph {

	bool is_directed;

	public:
		vector<vector<pair<int,ll>>>adj;
    	int n,N=2000000;
    	Hash h;

		Graph(int n_, bool is_directed_ = true){
			n=n_; is_directed = is_directed_;
			adj.resize(N,vector<pair<int,ll>>());
		}

		int hash(int u, int v){
			return h.hash({u,v});
		}
		int hash(int u, int v, int k){
			return h.hash({u,v,k});
		}

		void add_edge(int uR, int vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}
		void add_edge(tuple<int,int> uR, tuple<int,int> vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}
		void add_edge(tuple<int,int,int> uR, tuple<int,int,int> vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}


	private :

	  void add_edge_internal(int u, int v, ll c=0){
			add_edge_weighted_undirected(u,v,c);
			if(!is_directed)
				add_edge_weighted_undirected(v,u,c);
		}
		void add_edge_weighted_undirected(int u, int v, ll c) {
			pair<int,ll>p = make_pair(v,c);
			adj[u].push_back(p);
		}

};

class BFS {
    vector<ll>min_dist_from_source;
    vector<bool> visited;
    Graph *g;

    public:
      BFS(Graph *g_) {
          g = g_;
          clear();
      }

	  	void clear() {
  			min_dist_from_source.clear();
  			min_dist_from_source.resize(g->N,-1);
  			visited.clear();
  			visited.resize(g->N, false);
  		}


      void run(int sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }
      void run(tuple<int,int> sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }
      void run(tuple<int,int,int> sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }


      int min_dist(int targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }
      int min_dist(tuple<int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }
      int min_dist(tuple<int,int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }

      bool is_visited(int targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }
      bool is_visited(tuple<int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }
      bool is_visited(tuple<int,int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }

  private:
    void run_internal(int source) {
			queue<int> q;
			q.push(source);

			visited[source] = true;
			min_dist_from_source[source] = 0;

			while(!q.empty()) {
				int cur_node = q.front();
				for (unsigned int i = 0; i < (g->adj[cur_node]).size(); ++i) {
					int adj_node =  (g->adj[cur_node])[i].first;
					if (visited[adj_node] == false) {
						visited[adj_node] = true;
						min_dist_from_source[adj_node] = min_dist_from_source[cur_node] + 1;
						q.push(adj_node);
					}
				}
				q.pop();
			}

			return;
    }

    int min_dist_internal(int target){
    	return min_dist_from_source[target];
    }

    bool is_visited_internal(int target){
    	return visited[target];
    }

};
//END COPYING HERE
//********************BLACKBOX END******************
  int main() {
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    int sizer=n*m;
    Graph g(sizer);
    vector<string>v;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      v.push_back(s);
    }
    pair<int,int> start_point;
    pair<int,int> end_point;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(v[i][j]=='A')start_point={i,j};
        else if(v[i][j]=='B')end_point={i,j};
        if(v[i][j]!='#'){
         if(j+1<m)  if(v[i][j+1]!='#'){g.add_edge({i,j},{i,j+1});g.add_edge({i,j+1},{i,j});}
         if(j-1>=0) if(v[i][j-1]!='#'){g.add_edge({i,j},{i,j-1});g.add_edge({i,j-1},{i,j});}
         if(i-1>=0) if(v[i-1][j]!='#'){g.add_edge({i,j},{i-1,j});g.add_edge({i-1,j},{i,j});}
         if(i+1<n)  if(v[i+1][j]!='#'){g.add_edge({i,j},{i+1,j});g.add_edge({i+1,j},{i,j});}
        }
      }
    }
    //cout<<end_point.first<<" "<<end_point.second<<'\n';
    BFS bfs(&g);
    bfs.run(start_point);
    if(bfs.is_visited(end_point))cout<<bfs.min_dist(end_point);
    else cout<<-1;
    return 0;

  }