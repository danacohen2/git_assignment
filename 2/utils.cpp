#include <iostream>
#include "utils.h"
#include "stack.h"

using namespace std;

void reverse(int *nums, int size)
{
	int i = 0;
	stack *s = new stack;
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = size; i > size; i--)
	{
		pop(s);
	}
	delete s;
}

int* reverse10()
{
	int i = 0;
	int size = 10;
	int nums[10] = { 0 };
	for (i = 0; i < size; i++)
	{
		cout << ("Insert a number: ") << endl;
		cin >> nums[i];
	}
	reverse(nums, size);
	return nums;
}