#include "Stack.h"
	template<class T>
	LStack<T>::LStack() :m_top(nullptr), m_size(0u)
	{
	}
	template<class T>
	LStack<T>::~LStack()
	{
		clear();
	}
	template<class T>
	void LStack<T>::push(const T& value)
	{
		Node<T>* top = new Node<T>(value, m_top);
		++m_size;
	}
	template<class T>
	const T& LStack<T>::top()const
	{
		assert(!empty());
		return m_top->m_data;
	}
	template<class T>
	T LStack<T>::pop()
	{
		assert(!empty());
		Node<T>* top = m_top;
		m_top = m_top->m_next;
		T val = top->m_data;
		delete top;
		--m_size;
		return val;

	}
	template<class T>
	bool LStack<T>::empty()const
	{
		return nullptr == top;
	}
	template<class T>
	unsigned int LStack<T>::size()const
	{
		return m_size;
	}
	template<class T>
	void LStack<T>::clear()
	{
		while (!empty())
		{
			pop();
		}
	}