#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
};

typedef struct node *NODEPTR;

NODEPTR getnode() {
	NODEPTR p;
	p = (NODEPTR)malloc(sizeof(struct node));
	return p;
}

void freenode(NODEPTR p) {
	free(p);
}

void insafter(NODEPTR p, int x) {
	NODEPTR q;
	if (p == NULL) {
		printf("...");
		exit(1);
	}
	q = getnode();
	q->info = x;
	q->next = p->next;
	p->next = q;
}

void delafter(NODEPTR p, int *px) {
	NODEPTR q;
	if ((p == NULL) || (p->next == NULL))
	{
		printf("...");
		exit(1);
	}
	q = p->next;
	p->next = q->next;
	freenode(q);

}
