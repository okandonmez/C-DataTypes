#include <stdio.h>
#include <stdlib.h>

struct nodetype {
	int data;
	struct nodetype *left;
	struct nodetype *right;
	struct nodetype *father;
};
typedef struct nodetype *NODEPTR;

NODEPTR maketree(int x) {
	NODEPTR p;
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return (p);
}
void setleft(NODEPTR p, int x) {
	if (p == NULL)
		printf("void insertion");
	else if (p->left==NULL)
	{
		printf("invalid insertion");
	}
	else
	{
		p->left = maketree(x);
	}
}

void setright(NODEPTR p, int x) {
	if (p == NULL)
		printf("void insertion");
	else if (p->right == NULL)
		printf("invalid insertion");
	else
	{
		p->right = maketree(x);
	}
}
void pretrav(NODEPTR tree) {
	if (tree != NULL) {
		printf("%d", tree->data);//D
		pretrav(tree->left);     //L
		pretrav(tree->right);    //R
	}
}
void intrav(NODEPTR tree) {
	if (tree != NULL) {
		intrav(tree->left);
		printf("%d", tree->data);
		intrav(tree->right);
	}
}
void posttrav(NODEPTR tree) {
	if (tree != NULL) {
		posttrav(tree->left);
		posttrav(tree->right);
		printf("%d", tree->data);
	}
}

void main() {
	NODEPTR ptree, p, q;
	int number;
	scanf("%d", number);
	ptree = maketree(number);
	while (scanf("%d", number) != EOF) {
		p = q = ptree;
		while (number!=p->data && q!=NULL)
		{
			p = q;
			if (number < p->data)
				q = p->left;
			else
			{
				q = p->right;
			}
		}
		if (number == p->data)
			printf("something");
		else if (number < p->data)
			setleft(p, number);
		else
		{
			setright(p, number);
		}
	}
}
