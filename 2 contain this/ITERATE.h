#pragma once
#include "tVec.h"

template<typename Q>
class iterator
{
public:
	iterator() = delete;
	iterator(tVector<Q>& container, int initIdx)
		:owningContainer(&container)
		,currentIdx(initIdx)
	{

	}
	iterator(const iteratorr<Q>& other)
		:owningContainer(other.owningContainer)
		,currentIdx(other.currentIdx)
	{

	}

	iterator<Q>& operator=(const iterator<Q>& other)
	{
		owningContainer = other.owningContainer;
		currentIdx = other.currentIdx;
	}
	
	//bool operator==(const iterator<Q>& other);
	//bool operator!=(const iterator<Q>& other);
	//Q& operator*();

	//Q& operator++();
	//Q& operator++(Q);


private:
	tVector<Q>& owningContainer; //ref cuz gotta be sumthin
	int         currentIdx;
};