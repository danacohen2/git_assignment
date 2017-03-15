#include <iostream>
#include "stack.h"

using namespace std;

void push(stack *s, int element)
{
	list* ls = new list;
	ls->num = element;
	ls->next = s->n;
	s->n = ls;
} 

int pop(stack *s)
{
	int r = -2;
	list* ls = new list;
	if (s)
	{
		list *temp = ls;
		temp = ls->next;
		r = s->n->num;
		delete s->n;
	}
	return r;

}

void initStack(stack *s)
{
	push(s, -1);
}

void cleanStack(stack *s)
{
	list* l_temp = s->n;
	while (l_temp->num != -1)
	{
		l_temp = l_temp->next;
		delete s->n;
		s->n = l_temp;
	}
	delete l_temp;
	delete s;
}