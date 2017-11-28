#include "intVector.h"
#include <cassert>
#include <cstring>
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
