#include "Trees.h"

Trees::Trees()
{
    
}

Node* Trees::newNode(int data,Node* parent)
{
    
    //Here we have a function that creates a new node that will be used in main to create "branches" of the tree
    Node* node = new Node(data);
    node->data = data;
    node->parent = parent;
    if (parent != nullptr)
    {
        parent->children.push_back(node);
    }
    return node;
}
/// \brief 
/// \param root 
/// \return Returns the sum of the tree from the root of our choice
int Trees::get_sum_of(Node* root)
{
    int sum= 0;
    if(root == nullptr)
        return 0;
    
    queue<Node*> queues;
    queues.push(root);

    while (!queues.empty())
    {
        int size = static_cast<int> (queues.size());

        while (size> 0)
        {
            Node* temp = queues.front();
            queues.pop();
            sum += temp->data;

            for (int i = 0; i < static_cast<int> (temp->children.size()); i++)
            {
                queues.push(temp->children[i]);
                
            }
            size--;
        }
        
    }
    return sum;
}
int Trees::return_data( Node* root)
{
    return root->data;
}
int Trees::return_root(Node* root)
    {
    if (root->parent == nullptr)
        return root->data;
    
            return return_root(root->parent);
        
    }
int Trees::return_parent(Node* root)
{
        //TODO: Make a function that finds the parent of a node
    return root->parent->data;
    
}
int Trees::return_size_of_child(Node* root)
{
    return static_cast<int> (root->children.size());
}
void Trees::return_children(Node* root)
    {
    cout<<"The data for the children of this node are: "<<endl;
        for (int i = 0; i < static_cast<int> (root->children.size()); ++i)
        {
            cout<<root->children[i]->data<<endl;
        }
    cout<<""<<endl;
    }
string Trees::is_root(Node* root)
    {
        if (root->parent == nullptr)
        {
            return "this is the root";
        }
        else
        {
            return "this is not the root";
        }
    }
int Trees::get_number_of_Nodes(Node* root)
{
    int NumberOfNodes = 0;
    if (root == nullptr)
    return 0;
    
    queue<Node*> queues;
    queues.push(root);
    
    while (!queues.empty())
    {
        int size = static_cast<int> (queues.size());
    
        while (size > 0)
        {
            Node* temp = queues.front();
            queues.pop();
            NumberOfNodes++;
    
            for (int i = 0; i < static_cast<int> (temp->children.size()); i++)
            {
                queues.push(temp->children[i]);
            }
            size--;
        }
    }
    return NumberOfNodes;
   
}

string Trees::is_leaf(Node* root)
{
    if (root->children.empty())
    {
        return "this is a leaf";
    }
    else
    {
        return "this is not a leaf";
    }
}
int Trees::get_depth(Node* root)
{
    int depth = 1;
    
    
    while (root->parent != nullptr){
        depth++;
        root = root->parent;
  }
    return depth;
}
void Trees::delete_node(Node* root)
{
    
    if (root == nullptr)
        return;
    for (int i = 0; i < static_cast<int> (root->children.size()); i++)
    {
        delete_node(root->children[i]);
    }
    delete(root);
}



int main()
{
    Trees trees;
    
    Node* root = trees.newNode(-1,nullptr);
    trees.newNode(1,root);
    trees.newNode(2,root);
    trees.newNode(3,root->children[0]);
    trees.newNode(4,root->children[0]);
    trees.newNode(5,root->children[0]->children[0]);
    trees.newNode(6,root->children[0]->children[0]);
    trees.newNode(7,root->children[0]->children[1]);
    trees.newNode(8,root->children[0]->children[0]->children[0]);
    
    



   //  trees.return_children(root->children[3]);
   //cout<<trees.return_root(root->children[3]->children[0])<<endl;
   //  cout<<trees.is_root(root->children[2])<<endl;
    //cout<<trees.return_data(root->children[0])<<endl;
    //cout<<trees.get_sum_of(root->children[3])<<endl;
   // cout<<trees.get_sum_of(root->children[3])<<endl;
     cout<<trees.get_depth(root->children[0]->children[1])<<endl;
    //cout<<trees.get_number_of_Nodes(root)<<endl;
    
    
    
    return 0;
}
