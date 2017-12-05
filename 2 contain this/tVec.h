#include "ITERATE.h"
#include <cassert>
#include <cstring>

#pragma once

template<typename G>
class tVector
{
	G* data;
	size_t capacity;
	size_t size;

public:

	tVector()
	{
		capacity = 2;
		data = new G[capacity];
		size = 0;

	}

	~tVector()
	{
		delete[] data;
	}

	iterator<tVector<G>> begin()
	{
		return iterator<G>(*this, 0);
	}

	iterator<tVector<G>> end()
	{
		return iterator<tVector<G>>(*this, size);
	}

	G& at(size_t idx)
	{
		assert(idx < size);
		return data[idx];
	}

	G& append(G val)
	{
		if (size == capacity)
		{
			bool didGrow = grow(size + 1);
			assert(didGrow);
		}

		data[size] = val;
		++size;
	}

	G* c_ptr() const
	{
		return data;
	}

	size_t getCapacity() const
	{
		return size_t(capacity);
	}

	size_t getSize() const
	{
		return size_t(size);
	}

	bool empty() const
	{
		return size == 0;
	}

	G front() const
	{
		return data[0];
	}

	G back() const
	{
		return data[size - 1];
	}

	void pop()
	{
		size -= 1;
	}
};

