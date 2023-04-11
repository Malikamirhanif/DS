# include<iostream>
# include "Node.h"
using namespace std;
class Stack
{Node * headNode;
public:
	Stack()
	{Node * newNode=new Node();
	newNode->setNext(NULL);
	headNode=newNode;
	}
	void push (int a)
	{Node * newNode=new Node();
	newNode->set(a);
	newNode->setNext(headNode);
	headNode=newNode;
	}
	int pop()
	{Node *p=new Node();
	p=headNode;
	headNode=headNode->getNext();
	return p->get();
	delete p;
	}
	bool next()
	{if(headNode->getNext()!=NULL)
	{Node *p=new Node();
	p=headNode;
	cout<<"Value is\t"<<p->get()<<"\n";
	headNode=headNode->getNext();
	delete p;
	return true;
	}
	else
	{return false;
	}
	}
	int get()
	{return  headNode->get();
	}
};
int main()
{Stack stack;
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);
stack.push(5);
stack.push(6);
cout<<"poped value is"<<stack.pop()<<"\n";
while(stack.next())
{
}
system("pause");
return 0;

}

