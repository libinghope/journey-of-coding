#include<iostream>

using namespace std;

typedef struct _common_tree_node{
    int data;
    _common_tree_node * first_child;
    _common_tree_node * next_sibling;

} CommonTreeNode;


void traversal(CommonTreeNode  *root){
    if(!root){return;}
    traversal(root->first_child);
    traversal(root->next_sibling);
    
    cout<< root->data<<endl;
}