#pragma once


class intLinkedList
{
	struct intLinkedListNode
	{

		int value;
		intLinkedListNode* next;
		intLinkedListNode* prev;
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
	void clear() const;
	int count() const;
	void insert(size_t idx, int value);


private:

	intLinkedListNode* head;
};