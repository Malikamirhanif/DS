# include<iostream>
# include"TreeNode.h"
using namespace std;
void preOrder(TreeNode<int> * treeNode)
{if(treeNode!=NULL)
{cout<<*(treeNode->getInfo())<<" ";
preOrder(treeNode->getLeft());
preOrder(treeNode->getRight());
}
}
void inOrder(TreeNode<int> * treeNode)
{if(treeNode!=NULL)
{inOrder(treeNode->getLeft());
cout<<*(treeNode->getInfo())<<" ";
inOrder(treeNode->getRight());
}
}
void postOrder(TreeNode<int> * treeNode)
{if(treeNode!=NULL)
{postOrder(treeNode->getLeft());
postOrder(treeNode->getRight());
cout<<*(treeNode->getInfo())<<" ";

}
}

void insert(TreeNode<int> * root,int * info)
{TreeNode<int> * node=new TreeNode<int>(info);
TreeNode<int> *p;
TreeNode<int> *q;
p=q=root;
while(*info!=*(p->getInfo()) && q!=NULL)
{p=q;
if(*info<*(p->getInfo()))
{q=p->getLeft()
;}
else
{q=p->getRight();
}
}

if(*info==*(p->getInfo()))
{cout<<"\nDuplication\t"<<*(p->getInfo())<<" is Already present\n";
delete node;
}
else if(*info<*(p->getInfo()))
{p->setLeft(node);
}
else if(*info>*(p->getInfo()))
{p->setRight(node);
}}
int main()
{int x[]={14,15,4,9,7,18,3,5,16,4,20,17,9,14,5,-1};
TreeNode<int> * root=new TreeNode<int>();
root->setInfo(&x[0]);
for(int i=0;x[i]>0;i++)
{insert(root,&x[i]);
}
cout<<"\nCalling preOrder Method\n";
preOrder(root);
cout<<"\nCalling inOrder Method\n";
inOrder(root);
cout<<"\nCalling postOrder Method\n";
postOrder(root);
}

