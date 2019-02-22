#ifndef NODE_H
#define NODE_H
template<class T>
struct Node
{
	Node(const T& data, Node* next = nullptr) :m_next(data), m_next(next){}
	T m_data;
	Node<T>* m_next;
};
#endif