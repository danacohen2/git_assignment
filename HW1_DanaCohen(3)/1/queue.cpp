#include <iostream>
#include "queue.h"
using namespace std;

void initQueue(queue *q, int maxSize)
{
	q->_count = 0;
	q->_maxSize = maxSize;
	q->_elements = new int[maxSize];
}

void cleanQueue(queue *q)
{
	delete[] q->_elements;
}

bool isEmpty(queue *q)
{
	return (q->_count == 0);
}

bool isFull(queue *q)
{
	return (q->_count == q->_maxSize);
}

void enqueue(queue *q, int newValue)
{
	if (!isFull(q))
	{
		q->_elements[q->_count] = newValue;
		q->_count++;
	}
}

int dequeue(queue *q) // return element in top of queue, or -1 if empty
{
	int i = 0;
	int ans = -1;
	if (!isFull(q))
	{
		ans = q->_elements[0];
		for (i = 0; i < q->_count; i++)
		{
			q->_elements[i] = q->_elements[i + 1];
		}
		q->_count--;
	}
	return ans;
}