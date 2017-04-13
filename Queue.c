#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 10 

struct queue {
	int items[MAXQUEUE];
	int front, rear;
};

struct queue q;
q->rear = q->front = MAXQUEUE - 1;

int empty(struct queue *pq) {
	if (pq->rear == pq->front) {
		return(1);
	}
	else
	{
		return(0);
	}

}
int remove(struct queue *pq)
{
	if (empty(pq)) {
		printf("stack bos");
		exit(1);
	}
	if (pq->front == MAXQUEUE - 1)
		pq->front = 0;
	else
	{
		pq->front++;
	}
	return(pq->items[pq->front]);
}

void insert(struct queue *pq, int x) {
	if (pq->rear == MAXQUEUE - 1) {
		pq->rear = 0;
	}
	else
	{
		pq->rear++;
	}
	if (pq->rear == pq->front) {
		printf("stack dolu");
		exit(1);
	}
	pq->items[pq->rear] = x;
}
