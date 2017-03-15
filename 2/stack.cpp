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
	if(!isEmpty(s))
	{
		s->_count--;
		return removeHead(s->_elements);
	}
	else
	{
		return 0;
	}
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