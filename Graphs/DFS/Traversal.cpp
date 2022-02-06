#include <bits/stdc++.h>

using namespace std;

class Graph{
    int noOfVertices;
    int noOfEdges;
    map<int,bool> isVisit;
    map<int,list<int>> graph;
    public:
        Graph(int v,int e){
            noOfVertices=v;
            noOfEdges=e;
        }

        void addEdge(int v,int e){
            graph[v].push_back(e);
        }

        void DFS(int vertex){
            isVisit[vertex]=true;
            cout << vertex << " ";
            list<int>::iterator it;
            for(it=graph[vertex].begin();it!=graph[vertex].end();it++){
                if(!isVisit[*it]){
                    DFS(*it);
                }
            }
        }
};

int main(){
    int v,e;
    cin >> v >> e;
    Graph g(v,e);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 1);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.DFS(3);
}