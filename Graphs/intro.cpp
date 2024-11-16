#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>  //creating template for generic data type so that we can just tell once what type of data we are using


class graph {
    public: 
        unordered_map<T, list<T>> adjList;

        void addEdge(T u, T v, bool direction){
            //direction = 0 -> undirected
            //direction = 1 -> directed

            //create an edge from u to v
            adjList[u].push_back(v);

            if(direction == 0){
                adjList[v].push_back(u);
            }

        }

        void printAdjList(){
            for(auto i: adjList){
                cout<< i.first << " -> ";
                for(auto j: i.second){
                    cout<< j <<", ";
                }
                cout<<endl;
            }
        }

};

int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the no. of edges"<<endl;
    cin>>m;

    graph <int>g; //Here we need to tell just once that we are using integer data type

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();


    return 0;
}