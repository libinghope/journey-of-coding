#include <iostream>

using namespace std;
//一般的树都可以通过逆时针旋转90度，变成二叉树
typedef struct _binary_tree_node
{
    int data;
    _binary_tree_node *pLeft;
    _binary_tree_node *pRight;
} BinaryTreeNode, BinaryTree, __node;

//二叉树的递归(recursive)遍历分三种，即前中后序遍历，所谓的前中后是相对根(root)来说的
//其实遍历经过节点的顺序是一样的，只是访问元素内容的时间不一样

//递归遍历
void preOrderTraversal(BinaryTree *root)
{
    if (root)
    {
        cout << root->data << endl; //前序遍历 1 这行代码的位置决定遍历顺序
        preOrderTraversal(root->pLeft);
        //cout<< root->data<<endl;//中序遍历 2
        preOrderTraversal(root->pRight);
        //cout<< root->data<<endl;//后序遍历 3
    }
}

//非递归中序遍历 下面是前序和后序遍历的方法
//使用链表栈存储树节点
#include "../stack/link_stack.hpp"
void notRecursiveTraversal(BinaryTreeNode *const root)
{
    LinkStack<BinaryTreeNode *> stack;
    BinaryTreeNode *node = root;
    while (node || !stack.isEmpty())
    {
        while (node)
        {
            cout << node->data << endl; //前序遍历
            stack.push(node);
            node = node->pLeft;
        }
        if (!stack.isEmpty())
        {
            node = stack.pop();
            // cout<<node->data<<endl;//中序遍历
            node = node->pRight;
        }
    }
}

//非递归后序遍历  后序遍历比较麻烦,一直搞了一天才写出来太扯淡了
void notRecursiveTraversal2(BinaryTreeNode *const root)
{
    LinkStack<BinaryTreeNode *> stack,s;
    BinaryTreeNode *pCurrentNode = root;
    BinaryTreeNode *pLastVisitNode = NULL;
    BinaryTreeNode *lastvisit = NULL;

    BinaryTreeNode *p = root;
    while (p || !s.isEmpty())
    {
        if (p)
        {
            s.push(p);
            p = p->pLeft;
        }
        else
        {
            p = s.pop();
            s.push(p);
            if (!p->pRight || p->pRight == lastvisit)
                {
                    s.pop();
                    cout << p->data<<endl;
                    lastvisit = p; //访问完后有清理工作
                    p = 0;
                    continue;
                }
            p = p->pRight;
        }
    }
}

int main()
{
    BinaryTreeNode root;
    root.data = 0;

    BinaryTreeNode node1;
    node1.data = 1;
    root.pLeft = &node1;

    BinaryTreeNode node2;
    node2.data = 2;
    root.pRight = &node2;

    BinaryTreeNode node3;
    node3.data = 3;
    node1.pLeft = &node3;
    node1.pRight = NULL;
    node3.pLeft = NULL;
    node3.pRight = NULL;

    BinaryTreeNode node4;
    node4.data = 4;
    node2.pRight = &node4;
    node2.pLeft = NULL;
    node4.pLeft = NULL;
    node4.pRight = NULL;

    BinaryTreeNode node5;
    node5.data = 5;
    node1.pRight = &node5;
    node5.pLeft = NULL;
    node5.pRight = NULL;

    BinaryTreeNode node6;
    node6.data = 6;
    node2.pLeft = &node6;
    node6.pLeft = NULL;
    node6.pRight = NULL;

    notRecursiveTraversal(&root);
    cout << "-------------------------------------" << endl;
    notRecursiveTraversal2(&root);

    return 0;
}
