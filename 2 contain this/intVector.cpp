#include "intVector.h"
#include <cassert>
#include <cstring> 
#include "tVector.h"
intVector::intVector()
{
	capacity = 2;
	data = new int[capacity];
	size = 0;
}

intVector::~intVector()
{
	delete[] data;
}

int & intVector::at(size_t idx)
{
	//assert(idx >= 0, "idx must be greater than 0"); 
	assert(idx < size);
	return data[idx];
}

int & intVector::append(int val)
{

	if (size == capacity)
	{
		bool didGrow = grow(size + 1);
		assert(didGrow);
	}
		
	data[size] = val;
	++size;
	return data[size-1];
}

int * intVector::Rdata() const
{
	return data;
}

size_t intVector::getCapacity() const
{
	return size_t(capacity);
}

size_t intVector::getSize() const
{
	return size_t(size);
}

bool intVector::empty() const
{
	return size == 0;
	 
}

int intVector::front() const
{
	return data[0];
}

int intVector::back() const
{
	return data[size-1];
}

int & intVector::operator[](size_t idx)
{
	return data[idx];
}

int intVector::operator[](size_t idx) const
{
	return data[idx];
}

int intVector::clear()
{
	size =0;
}

int intVector::erase(int idx)
{
	for (size_t i = 0; i < size; i++)
	{
		data[idx + i] = data[idx + i + 1];
		
	}
	size -= 1;
}

int intVector::count(int match)
{
	int counter = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (data[i] == match)
		{
			counter++;
		}
	}
	return counter;
}

void intVector::insert(size_t idx, int value)
{
	assert(idx >= 0);
	assert(idx < size);
	append(value);

	for (size_t i = size; i < idx; i--)
	{
		int temp = data[i];
		data[i] = data[i - 1];
		data[i - 1] = temp;
	}
}

void intVector::reserve(size_t newcapacity)
{
	if (newcapacity > capacity)
	{
		int *newData = new int[newcapacity];
		memcpy(newData, data, sizeof(int)*size);
		delete[] data;
		data = newData;
		capacity = newcapacity;
	}

}

void intVector::Compact()
{
	if (capacity > size)
	{
	int *newData = new int[size];
	memcpy(newData, data, sizeof(int)*size);
	delete[]data;
	capacity = size;
	}
	
}

void intVector::printVector()
{

}

bool intVector::grow(size_t miniSize)
{
	if (miniSize <= capacity)
	{
		return true;
	}

	while (capacity < miniSize)
	{
		capacity *= 2;
	}
	
	
	int* newData = new int[capacity];
	memcpy(newData, data, sizeof(int)*size);

	delete[]data;
	data = newData;

	return true;
}
