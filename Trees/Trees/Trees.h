#include <iostream>
#include <queue>

#include "vector"
using namespace std;

struct Node
{
    //here we are setting up the node class to be used in the tree
   
    int data;
    vector<Node*> children;
    Node* parent;
    Node(int value) {this->data = value;}
    
};
class Trees
{
public:
    Trees();
    vector<Node*> list_of_nodes;
    
     Node* newNode(int data,Node* parent);
     void newRandomNode(int data, Node* root);
    Node* createRandomChild(int randomNumber,Node* root);
   int get_sum_of(Node* root);
   int return_data( Node* root);
   int return_root(Node* root);
   int return_parent(Node* root);
   int return_size_of_child(Node* root);
   void return_children(Node* root);
   string is_root(Node* root);
    vector<Node*> GetTree(Node* root);
   int get_number_of_Nodes(Node* root);
 void getNodeForFunction(vector<Node*>& list, Node* root);
   string is_leaf(Node* root);
   int get_depth(Node* root);
    void deleteNodeAndChildren(Node* root);
   void delete_node(Node* root);
};
