#include "intLinkedList.h"
#include <cassert>
intLinkedList::intLinkedList()
	:head(nullptr)
{

}

intLinkedList::~intLinkedList()
{
	clear();
}

void intLinkedList::append(int value)
{
	intLinkedListNode* newNode = new intLinkedListNode;
	newNode->value = value;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	if (head == nullptr)
	{
		head = newNode;
	}
	else 
	{
		intLinkedListNode* iter = head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		newNode->prev = iter;
		iter->next = newNode;


	}


}

int intLinkedList::at(int idx)
{
	
	assert(head != nullptr);

	int counter = 0;
	intLinkedListNode* iter = head;

	while (iter != nullptr && counter != idx)
	{
		iter = iter->next;
		counter++;
	}
	assert(iter != nullptr);

	return iter->value;

}

size_t intLinkedList::getsize(int val) const
{
	int counter = 0;
	intLinkedListNode* iter = head;
	while (counter != val && iter != nullptr)
	{
		counter++;
		iter = iter->next;
	}
	return iter->value;
}

bool intLinkedList::empty() const
{
	if (head == nullptr)
	{
		return true;
	}
	else
	{
		return false;

	}
}

int intLinkedList::front() const
{
	assert(!empty());
	return head->value;
}

int intLinkedList::back() const
{
	assert(!empty());
	intLinkedListNode* iter = head;
	while (iter->next != nullptr)
	{
		iter = iter->next;
	}
	return iter->value;
}

void intLinkedList::clear() const
{
	assert(!empty());
	intLinkedListNode* iter = head;
	while (iter->next != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}

}

int intLinkedList::count() const
{
	
	int counter = 0;
	intLinkedListNode* iter = head;
	while (counter >=0 && iter != nullptr)
	{
		counter++;
		iter = iter->next;
	}
	
	return counter;
}

void intLinkedList::insert(size_t idx, int value)
{
	intLinkedListNode *newNode = new intLinkedListNode;
	newNode->value = value;

	intLinkedListNode * iter = head;
	intLinkedListNode* prev = head;
	int counter = 0;
	while (iter->next != nullptr && counter != idx)
	{
		if (counter == idx - 1)
		{
			prev = iter;
		}
		iter = iter->next;
		counter++;
	}
	prev->next = newNode;
	newNode->next = iter;
}



