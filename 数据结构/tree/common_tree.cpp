#include<iostream>

using namespace std;

typedef struct _common_tree_node{
    int data;
    _common_tree_node * first_child;
    _common_tree_node * next_sibling;

} CommonTreeNode;


void visit(CommonTreeNode  *root){
    if(!root){return;}
    visit(root->first_child);
    visit(root->next_sibling);
    
    cout<< root->data;
}