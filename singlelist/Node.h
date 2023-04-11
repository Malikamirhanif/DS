# include<stdlib.h>
class Node
{int objact;
Node * nextNode;
public:
	void set(int objact)
	{this->objact=objact;
	}
	int get()
	{return objact;
	}
	void setNext(Node * nex)
	{nextNode=nex;
	}
	Node * getNext()
	{return nextNode;
	}
};
