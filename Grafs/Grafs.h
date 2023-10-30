#include <iostream>
#include <vector>

using namespace std;


class graphs {
public:
    int numberOfVertices;
    vector<vector<int>> adjecencyList;
    vector<int> visited_list;


    graphs(int numberofvertices) {
        numberOfVertices = numberofvertices;
        adjecencyList.resize(numberOfVertices);
    }
    

    void add_edge(int start, int end);

    void addvertex();

    void addrandomvertex();
    
    void deleteEdge(int src, int End);
    

    string are_connected(int start, int end) ;

    void returnNodeInformation(int node);

   

    void returnEgdes();

    void returnvertices();

    void returnSize();
    

void isEmpty(int node);

    void traverse(int startnode);

    
    
    void getadjecentNodes(int node);
    

    void print_graph();
    
};

