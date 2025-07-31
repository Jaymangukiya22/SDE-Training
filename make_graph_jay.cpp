#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

pair<int, vector<vector<int>>> make_graph(){
    int v = 7;
    vector<vector<int>> edges({{0,1}, {0,2}, {0,3}, {3,4}, {1,4}, {1,5}, {2,5}, {6,6}});
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

vector<vector<bool>> get_adj_matrix(pair<int, vector<vector<int>>> &graph)
{
    //
    int v = graph.first;
    vector<vector<bool>> adj_mat(v, vector<bool>(v, false));
    vector<vector<int>> edges = graph.second;
    for(vector<int> &edge:edges){
        adj_mat[edge[0]][edge[1]] = true;
    }
    return adj_mat;
    
}

void solve(){
    pair<int, vector<vector<int>>> graph = make_graph();
    vector<vector<bool>> adj_matrix = get_adj_matrix(graph);
}

int main(){
    solve();
}