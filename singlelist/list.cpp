# include<iostream>
# include"Node.h"
using namespace std;
class List 
{Node * headNode;
Node * currentNode;
Node * lastCurrentNode;
int size;
public:
	List()
	{Node * newNode=new Node();
	headNode=newNode;
	currentNode=NULL;
	size=0;
	}
	void add (int obj)
	{Node *newNode=new Node();
	newNode->set(obj);
	if(currentNode!=NULL)
	{newNode->setNext(currentNode->getNext());
	currentNode->setNext(newNode);
	lastCurrentNode=currentNode;
	currentNode=newNode;
	}
	else
	{newNode->setNext(NULL);
	headNode->setNext(newNode);
	lastCurrentNode=currentNode;
	currentNode=newNode;
	}
	size++;
	}
	void start()
	{currentNode=headNode;
	lastCurrentNode=headNode;
	}
	int getc()
	{return currentNode->get();
	}
	bool next()
	{if(currentNode==NULL)
	return false;
	if(currentNode->getNext()!=NULL)
	{lastCurrentNode=currentNode;
	currentNode=currentNode->getNext();
	return true;
	}
	}

};
int main(int argc,char *argv[] )
{List list;
list.add(1);
list.add(2);
list.add(3);
list.add(3);
list.add(4);
list.add(5);
list.start();
while(list.next())
{cout<<list.getc()<<"\n";
}
system("pause");
return 0;
}
