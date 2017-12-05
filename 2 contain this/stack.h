#pragma once
#include "tVec.h"
#include "intVector.h"
#include "intLinkedList.h"

template<typename S>
class Stack
{
private:
	tVector<S>vector;
public:
	//top size-1

	bool empty()
	{
		/*if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}*/
		return vector.empty;
	}
	


	size_t size()
	{
		return vector.getSize;
	}

	//size

	S pop()
	{
		assert(!empty());
		T t = vector[size];
		size -= 1;
		return t;
	}
	//pop
	//-return what was popped

	S push(S a)
	{
		vector.append(a);
	}
	//push
	//	add element to top o stack


	S top()
	{
		return vector.front;
	}
	//top
	//	access from top

};
