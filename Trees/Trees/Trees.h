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
    
static Node* newNode(int data,Node* parent);
    static int get_sum_of(Node* root);
    static int return_data( Node* root);
    static int return_root(Node* root);
    static int return_parent(Node* root);
    static int return_size_of_child(Node* root);
    static void return_children(Node* root);
    static string is_root(Node* root);
    static int get_number_of_Nodes(Node* root);
    static string is_leaf(Node* root);
    static int get_depth(Node* root);
    static void delete_node(Node* root);
};
