# include<iostream>
# include "Node.h"
using namespace std;
class Queue
{Node *currentNode;
Node *lastCurrentNode;
Node *headNode;
Node *lastHeadNode;
int size;
public:
		Queue(int a)
	{Node *newNode=new Node();
	newNode->set(a);
	headNode=newNode;
	currentNode=newNode;
	lastCurrentNode=newNode;
	currentNode->setNext(NULL);
	size++;
	}
	void enQueue(int a)
	{Node *newNode=new Node();
	newNode->set(a);

	newNode->setNext(currentNode->getNext());
		currentNode->setNext(newNode);
	lastCurrentNode=currentNode;
	currentNode=newNode;
	size++;}

	int  deQueue()
	{lastHeadNode=headNode;
	headNode=headNode->getNext();
	
	return lastHeadNode->get();
	delete lastHeadNode;
	lastCurrentNode=currentNode;
	size--;
	}
	void front()
	{cout<<"First Node Is \t"<<headNode->get();
	}
	bool isEmpty()
	{if(size==0)
	return true;
	else 
	return false;
	}
	void first()
	{currentNode=headNode;
	lastCurrentNode=headNode;
	cout<<"Value Is \t"<<currentNode->get()<<"\n";
	}
	bool next()
	{if((currentNode->getNext())!=NULL)
	{
	lastCurrentNode=currentNode;
	currentNode=currentNode->getNext();
	cout<<"Value Is \t"<<currentNode->get()<<"\n";
	
	return true;}
	
	else
	return false;
	}
	
};
int main()
{Queue queue(1);
queue.enQueue(2);
queue.enQueue(3);
queue.enQueue(4);
queue.enQueue(5);
queue.deQueue();
queue.first();
while(queue.next())
{
}
system("pause");
return 0;
}
