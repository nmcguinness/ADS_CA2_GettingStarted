#pragma once

template <class T>
class CircularQueue {
private:

public:
	CircularQueue(int size) {};
	~CircularQueue() {};

	void Enqueue(T item);

	T Dequeue()
	{
		return T();
	}
	int size() const
	{
		return -1;
	}
	void clear()
	{
	}
};

/// @brief Inserts an item in the back of the queue
/// @tparam T C++ value type or reference type or user-defined reference type
/// @param item Data stored by the queue
template<class T>
void CircularQueue<T>::Enqueue(T item)
{
}
