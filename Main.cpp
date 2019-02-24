#include "./LStack/Stack.h"
#include <iostream>

int main()
{
	LStack<int> stack;
	stack.push(12);
	stack.push(7);
	stack.push(-4);
	while(!stack.empty())
	{
		std::cout<<stack.pop()<<std::ends;
	}
	std::cout<<std::endl;
	return 0;
}
