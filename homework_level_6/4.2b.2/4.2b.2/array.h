#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

using namespace std;

template<typename T>
class Array
{
private:
	static int default_size;
	T* m_data;
	int m_size;
public:
	Array();
	Array(int size);
	Array(const Array<T>& a);
	virtual ~Array();

	Array<T>& operator =(const Array<T>& source);

	int Size() const;
	void SetElement(int index, const T& np);
	T& GetElement(int index) const;
	T& operator [](int index);

	const T& operator[](int index) const;
	static int DefaultSize();
	static void DefaultSize(int newsize);
};

#endif // !ARRAY_H
