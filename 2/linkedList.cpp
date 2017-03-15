#include <iostream>
#include "linkedList.h"
using namespace std;



list* addNode(list *l, int num)
{
	if (l == 0)
	{
		l->next = 0;
		l->num = num;
		return l;
	}
	list *temp = new list;
	temp->next = l;
	temp->num = num;
	l = temp;
	return l;
}

list* removeNode(list *l)
{
	if (l != 0)
	{
		list *temp = l;
		temp = l->next;
		delete l;
		l = temp;
	}
	return l;
}
