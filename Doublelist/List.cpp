# include<iostream>
# include"Node.h"
using namespace std;
class List
{int size;
Node * headNode;
Node * currentNode;
Node * lastCurrentNode;
public:
	void insert(int d)
	{Node * newNode=new Node();
	newNode->set( d);
	newNode->setNext(currentNode->getNext());
	newNode->setPrev(currentNode);
	(currentNode->getNext())->setPrev(newNode);
	currentNode->setNext(newNode);
	currentNode=newNode;
	size++;
	}
	void back()
	{if(currentNode->getPrev()!=NULL)
	{
	lastCurrentNode=currentNode;
	currentNode=currentNode->getPrev();}
	else
	cout<<"\nHead Node\n";
	}
List()
{Node * newNode=new Node();
headNode=newNode;
currentNode=NULL;
size=0;
}

void add(int l)
{Node * newNode=new Node();
newNode->set(l);
if(currentNode!=NULL)
{newNode->setNext(currentNode->getNext());
newNode->setPrev(currentNode);
currentNode->setNext(newNode);
lastCurrentNode=currentNode;
currentNode=newNode;
}
else
{newNode->setNext(NULL);
newNode->setPrev(headNode);
headNode->setNext(newNode);
currentNode=newNode;
lastCurrentNode=newNode;
}
size++;
}
int get()
{currentNode->get();
}
void start()
{currentNode=headNode;
lastCurrentNode=headNode;
}
bool next()
{if(currentNode==NULL && currentNode->getNext()==NULL)
return false;
else
{
lastCurrentNode=currentNode;
currentNode=currentNode->getNext();
return true;}
}

};
int main()
{List list;
list.add(1);
list.add(2);
list.add(3);
list.back();
list.back();
list.insert(7);
list.start();
while(list.next())
{cout<<"Value\t"<<list.get()<<"\n";
}
system("pause");
return 0;
}
