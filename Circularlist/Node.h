# include<stdlib.h>
class Node
{int obj;
Node * nextNode;
Node * prevNode;
public:
void set(int o)
{obj=o;
}
void setNext(Node * nextNode)
{this->nextNode=nextNode;
}
void setPrev(Node * prevNode)
{this->prevNode=prevNode;
}
int get()
{return obj;
}
Node * getNext()
{return nextNode;
}
Node * getPrev()
{return prevNode;
}
};
