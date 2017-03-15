#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains only positive integer values */
struct  queue
{
	int* _elements;
	int _maxSize;
	int _count;
};

typedef struct queue queue;

void initQueue(queue *q, int maxSize);
void cleanQueue(queue *q);

void enqueue(queue *q, int newValue);
int dequeue(queue *q); // return element in top of queue, or -1 if empty


#endif /* QUEUE_H */