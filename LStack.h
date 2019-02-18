#ifndef LSTACK_H
#define LSTACK_H
#include "ISatck.h"
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
	virtual size_t size()const;
	virtual void clear();
private:
	Node<T>* m_top;
	size_t m_size;
};
#endif