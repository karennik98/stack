#include "Stack.h"
template<class T>
class LStack : public IStack<T>
{
public:
	LStack::LStack() :m_top(nullptr), m_size(0u)
	{
	}
	LStack::~LStack()
	{
		clear();
	}
	virtual void LStack::push(const T& value)
	{
		Node<T>* top = new Node<T>(value, m_top);
		++m_size;
	}
	virtual const T& LStack::top()const
	{
		assert(!empty());
		return m_top->m_data;
	}
	virtual T LStack::pop()
	{
		assert(!empty());
		Node<T>* top = m_top;
		m_top = m_top->m_next;
		T val = top->m_data;
		delete top;
		--m_size;
		return val;

	}
	virtual bool LStack::empty()const
	{
		return nullptr == top;
	}
	virtual size_t LStack::size()const
	{
		return m_size;
	}
	virtual void LStack::clear()
	{
		while (!empty())
		{
			pop();
		}
	}

private:
	Node<T>* m_top;
	size_t m_size;
};