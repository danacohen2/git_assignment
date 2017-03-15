#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct list
{
	struct list* next;
	int num;
}; 
typedef struct list list;
//part A:
list* addNode(list *l ,int num);
list* removeNode(list *l);

//part B:





#endif