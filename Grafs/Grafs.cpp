#include "Grafs.h"


/// \brief Here we are creating an edge between two nodes, we want it to be directed so we only add it to the adjecency list of the first node
/// \param start 
/// \param end 
void graphs::add_edge(int start, int end)
{
    adjecencyList[start].push_back(end);
}

void graphs::addvertex()
{
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

void graphs::returnNodeInformation(int node)
{
    cout<<"The node is: "<<node<<endl;
    
}

void graphs::returnEgdes()
{
    int edges = 0;
    for (int i = 0; i < numberOfVertices; ++i)
    {
        edges += adjecencyList[i].size();
    }
    cout<<"The number of edges are: "<<edges<<endl;
}

void graphs::returnvertices()
{
    cout<<"The number of vertecies are: "<<numberOfVertices<<endl;
}

void graphs::getadjecentNodes(int node)
{
    cout<<"The adjecent nodes are: "<<endl;
    for (int i = 0; i < adjecencyList[node].size(); ++i)
    {
        cout<<adjecencyList[node][i]<<endl;
    }
}

void graphs::returnSize()
{
    int edges = 0;
    for (int i = 0; i < numberOfVertices; ++i)
    {
        edges += adjecencyList[i].size();
    }
    cout<<"The size of the graph is: vertecies + nodes witch is "<<numberOfVertices + edges<<endl;
}

void graphs::deleteEdge(int Start, int End) {
    // Find the index of the destination vertex in the source vertex's adjacency list
    int destIndex = -1;
    for (int i = 0; i < adjecencyList[Start].size(); i++) {
        if (adjecencyList[Start][i] == End) {
            destIndex = i;
            break;
        }
    }
    // Remove the destination vertex from the source vertex's adjacency list
    if (destIndex != -1) {
        adjecencyList[Start].erase(adjecencyList[Start].begin() + destIndex);
    }

    // Find the index of the source vertex in the destination vertex's adjacency list
    int SourceIndex = -1;
    for (int i = 0; i < adjecencyList[End].size(); i++) {
        if (adjecencyList[End][i] == Start) {
            SourceIndex = i;
            break;
        }
    }
    // Remove the source vertex from the destination vertex's adjacency list
    if (SourceIndex != -1) {
        adjecencyList[End].erase(adjecencyList[End].begin() + SourceIndex);
    }
}

void graphs::isEmpty(int node)
{
    if (adjecencyList[node].size() == 0) {
        cout <<"this node is empty" << endl;
    } else {
        cout <<"is not empty" << endl;
    }
}

void graphs::addrandomvertex()
{
    srand(time(NULL));
    int random = rand() % 10 + 1;
    numberOfVertices += random;
    adjecencyList.resize(numberOfVertices);
    
}


void graphs::traverse(int startnode)
{
    
    visited_list.push_back(startnode);
    cout<<"The node is: "<<startnode<<endl;
    for (int i = 0; i < adjecencyList[startnode].size() ; ++i)
    {
        bool visited = false;
        for (int j = 0; j < visited_list.size(); ++j)
        {
            if (visited_list[j] == adjecencyList[startnode][i])
            {
                visited = true;
            }
        }
        if (!visited)
        {
            traverse(adjecencyList[startnode][i]);
        }
    }
}


int main()
{
 graphs graph(5);

graph.addvertex();
graph.addvertex();
    //graph.addrandomvertex();

   graph.add_edge(0, 1 );
   graph.add_edge(0, 2); 
   graph.add_edge(1, 3);
   graph.add_edge(2, 3);
   graph.add_edge(3, 4);
    graph.add_edge(5, 4);
    graph.add_edge(5, 2);
    graph.add_edge(4, 6);
    graph.add_edge(6, 1);
    

    //graph.deleteEdge(0, 1);


    graph.isEmpty(6);
    
    // graph.returnNodeInformation(3);
    // graph.print_graph();
    // graph.are_connected(0, 1);
    graph.returnEgdes();
    // graph.getadjecentNodes(1);
     graph.returnvertices();
    // graph.returnSize();
     //graph.traverse(0);
}
