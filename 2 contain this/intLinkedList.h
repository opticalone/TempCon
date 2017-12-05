#pragma once


class intLinkedList
{
	struct intLinkedListNode
	{

		int value;
		intLinkedListNode* next;
	};
public:
	

	intLinkedList();
	~intLinkedList();
	void append(int value);
	int at(int idx);
	size_t getsize(int val) const;
	bool empty() const;
	int front() const;
	int back() const;
	int clear() const;
	int count() const;


private:

	intLinkedListNode* head;
};