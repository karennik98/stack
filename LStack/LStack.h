#ifndef LSTACK_H
#define LSTACK_H
#include "IStack.h"
#include "Node.h"
template<class T>
class LStack : public IStack<T>
{
public:
	LStack();
	~LStack();
	virtual void push(const T& value);
	virtual const T& top()const;
	virtual T pop();
	virtual bool empty()const;
	virtual unsigned int size()const;
	virtual void clear();
private:
	Node<T>* m_top;
	unsigned int m_size;
};
#endif
