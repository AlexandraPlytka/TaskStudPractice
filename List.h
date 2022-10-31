#pragma once
#include <iostream>
using namespace std;

template <class T>
class List
{
protected:
	T* items;
	int current;

public:
	List();
	~List();

	void WriteAllToConsole() const;
	void Add(T& item);
};

template <class T>
List<T>::List()
{
	current = 0;
	items = new T[100];
}


template <class T>
List<T>::~List()
{
	delete[] items;
}


template <class T>
void List<T>::Add(T& item)
{
	items[current] = item;
	current++;
}

template <class T>
void List<T>::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++)
	{
		items[i].WriteToConsole();
		cout << endl;
	}
}