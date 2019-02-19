#ifndef ISTACK_H
#define ISTACK_H
template<class T>
class IStack
{
public:
	virtual void push(const T&) = 0;
	virtual const T& top()const = 0;
	virtual T pop() = 0;
	virtual bool empty()const = 0;
	virtual unsigned int size()const = 0;
	virtual void clear() = 0;
	virtual ~IStack() {};
};
#endif