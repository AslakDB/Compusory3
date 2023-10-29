#include "Grafs.h"


/// \brief Here we are creating an edge between two nodes, we want it to be directed so we only add it to the adjecency list of the first node
/// \param start 
/// \param end 
void graphs::add_edge(int start, int end)
{
    
    

}

void graphs::addvertex(int node, int weight)
{
    adjecencyList[node].push_back(node);
    this->weight = weight;
    numberOfVertices ++;
    adjecencyList.resize(numberOfVertices);
}

string graphs::are_connected(int start, int end)
{
    for (int i = 0; i < adjecencyList[start].size(); i++)
    {
        if (adjecencyList[start][i] == end)
        {
            return "yes";
        }
    }
    return "no";
   
    
}


void graphs::print_graph()
{
    for (int i = 0; i < numberOfVertices; ++i)
    {
        cout<<"The edges for vertex "<<i<<" are: "<<endl;
        for (int j = 0; j < adjecencyList[i].size(); ++j)
        {
            cout<<adjecencyList[i][j]<<endl;
        }
       
    }
}

int graphs::returnNodeInformation(int node)
{
    //Todo: return the information of a node after giving nodes weight so that there is something to return
    return 0;
}

void graphs::getadjecentNodes(int node)
{
    cout<<"The adjecent nodes are: "<<endl;
    for (int i = 0; i < adjecencyList[node].size(); ++i)
    {
        cout<<adjecencyList[node][i]<<endl;
    }
}


int main()
{
 graphs graph;

graph.addvertex(0, 33);    
graph.addvertex(1, 0);    
graph.addvertex(2, 17);   
graph.addvertex(3, 2);    
graph.addvertex(4, 56);   

   graph.add_edge(0, 1 );
   graph.add_edge(0, 2); 
   graph.add_edge(1, 3);
   graph.add_edge(2, 3);
   graph.add_edge(3, 4);

    //graph.returnNodeInformation(3);
    graph.print_graph();
}
