#include <bits/stdc++.h>

using namespace std;

class Graph{
    int noOfVertices;
    int noOfEdges;
    vector<vector<int>> graph;
    public:
        Graph(int V,int E){
            graph.reserve(V);
        }
};

int main(){
    int v,e;
    cin >> v >> e;
    Graph graph(v,e);
}