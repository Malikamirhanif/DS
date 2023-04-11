# include<stdlib.h>
template <class Objact>
class TreeNode
{Objact  *objact;
TreeNode * left;
TreeNode * right;
public:
	TreeNode()
	{this->objact=NULL;
	this->left=NULL;
	this->right=NULL;
	}
	TreeNode(Objact *objact)
	{this->objact=objact;
	this->left=NULL;
	this->right=NULL;
	}
	void setInfo(Objact *objact)
	{this->objact=objact;
	}
	void setRight(TreeNode * right)
	{this->right=right;
	}
	void setLeft(TreeNode * left)
	{this->left=left;
	}
	Objact * getInfo()
	{return this->objact;
	}
	TreeNode * getRight()
	{return this->right;
	}
	TreeNode * getLeft()
	{return this->left;
	}
	int isLeaf()
	{if(this->left==NULL && this->right==NULL)
	return 1;
	else 
	return 0;
	}

};
