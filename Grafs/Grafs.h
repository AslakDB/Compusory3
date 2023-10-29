#include <iostream>
#include <vector>

using namespace std;

struct  edge;

struct vertex
{
    int data;
};


struct edge
{
    int origin, destination ,weight;
    
    
    
}; 
class graphs {
public:
    int numberOfVertices = 0;
    int weight;
    vector<vector<int>> adjecencyList;


    graphs() = default;

    void add_edge(int start, int end);

    void addvertex(int node, int weight);

    void addRandomEdge() {
        int start = rand() % numberOfVertices;
        int end = rand() % numberOfVertices;
        add_edge(start, end);
    }
    void deleteEdge(int src, int dest) {
        // // Find the index of the destination vertex in the source vertex's adjacency list
        // int destIndex = -1;
        // for (int i = 0; i < adjList[src].size(); i++) {
        //     if (adjList[src][i] == dest) {
        //         destIndex = i;
        //         break;
        //     }
        // }
        // // Remove the destination vertex from the source vertex's adjacency list
        // if (destIndex != -1) {
        //     adjList[src].erase(adjList[src].begin() + destIndex);
        // }
        //
        // // Find the index of the source vertex in the destination vertex's adjacency list
        // int srcIndex = -1;
        // for (int i = 0; i < adjList[dest].size(); i++) {
        //     if (adjList[dest][i] == src) {
        //         srcIndex = i;
        //         break;
        //     }
        // }
        // // Remove the source vertex from the destination vertex's adjacency list
        // if (srcIndex != -1) {
        //     adjList[dest].erase(adjList[dest].begin() + srcIndex);
        // }
    }

    string are_connected(int start, int end) ;

    int returnNodeInformation(int node);

    void getallVertices() {
        for (int i = 0; i < numberOfVertices; ++i) {
            cout << "The vertices are: " << i << endl;
        }
    }

    int returnEgdes() {
        int edges = 0;
        for (int i = 0; i < numberOfVertices; ++i) {
            edges += adjecencyList[i].size();
        }
        return edges;
    }

    int returnSize() {
        return numberOfVertices;
    }

bool isEmpty(int node) {
        if (adjecencyList[node].size() == 0) {
            return true;
        } else {
            return false;
        }
    }

    
    
    void getadjecentNodes(int node);
    

    void print_graph();
    
};

