# include<iostream>
# include<string.h>
# include"TreeNode.h"
using namespace std;
void insert(TreeNode<char>* root,char * info)
{TreeNode<char>* node=new TreeNode<char>(info);
TreeNode<char> *p;
TreeNode<char> * q;
p=q=root;
while(strcmp(info,p->getInfo()) !=0 && q!=NULL)
{p=q;
if(strcmp(info,p->getInfo())<0)
q=p->getLeft();
else
q=p->getRight();
}
if(strcmp(info,p->getInfo()) ==0 )
{cout<<"\nDuplication\t"<<*(info);
delete node;}
else if(strcmp(info,p->getInfo()) <0 )
p->setLeft(node);
else
p->setRight(node);
}
//void inOrder(TreeNode<char>* r)
//{if(r !=NULL)
//{
//inOrder(r->getLeft());
//cout<<*(r->getInfo())<<" ";
//inOrder(r->getRight());
//}
//}
void WordTree()
{TreeNode<char>* root=new TreeNode<char>();
static char * Word[]={"ALI","AHMAD","BILAL","BILAL","CHAND","NAEEM","GOHAR",NULL}; 
root->setInfo(Word[0]);
for(int i=0;Word[i];i++)
{insert(root,Word[i]);
//inOrder(root);
//cout<<"\n";
}
}
int main()
{WordTree();
}
