//The input provided in lab was 15,10,20,17,25,5,13.
#include<iostream>
using namespace std;
class node
{
    public:
    node *left;
    node *right;
    int info;
};
class tree
{
    public:
    node *newnode;
    node *root;
    tree(){root=NULL;}
    void insertion(node*,int);
    void preorder(node *);
    void inorder(node *);
    void postorder(node *);
};
void tree::insertion(node*tree,int data)
{
    newnode=new node;
    newnode->info=data;
    newnode->left=NULL;
    newnode->right=NULL;
    if(tree==NULL)
    {
        tree=newnode;
        root=newnode;
    }
    else if(data<tree->info)
    if(tree->left==NULL)
    tree->left=newnode;
    else
    {
        insertion(tree->left,data);
    }
    else if(data>tree->info)
    {
        if(tree->right==NULL)
        tree->right=newnode;
        else
        {
            insertion(tree->right,data);
        }
    }
    else
    {
        cout<<"DUPLICATE DATA"<<endl;
    }
}
void tree::preorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        cout<<temp->info<<endl;
        preorder(temp->left);
        preorder(temp->right);
    }
}
void tree::inorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->info<<endl;
        inorder(temp->right);
    }
}
void tree::postorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->info<<endl;
    }
}
int main()
{
    tree t1;
    int ch,dat;
    cout<<"1.INSERTION\n2.PREORDER\n3.INORDER\n4.POSTORDER\n5.EXIT"<<endl;
    while(1)
    {
        cout<<"Enter the choice:";
        cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter the data:";
        cin>>dat;
        t1.insertion(t1.root,dat);
        break;

        case 2:
        t1.preorder(t1.root);
        break;

        case 3:
        t1.inorder(t1.root);
        break;

        case 4:
        t1.postorder(t1.root);
        break;

        case 5:
        exit(0);
        default:
        cout<<"INVAID CHOICE"<<endl;
    }
}
return 0;
}
// 15 10 20 17 25 5 13
