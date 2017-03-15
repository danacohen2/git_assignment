#ifndef STACK_H
#define STACK_H

#include "linkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct
{
	struct list *n;
} stack;
//typedef struct stack stack;

void push(stack *s, int element);
int pop(stack *s);  

void initStack(stack *s);
void cleanStack(stack *s);


#endif /*STACK_H*/