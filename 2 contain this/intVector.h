#pragma once


class intVector
{
	int *data;				//pointer to dynamicakky allcoated array
	unsigned int capacity;	//total size (capacity)
	size_t size;			//total # of elements stored

							//sizeT == unisgned int

public:
	intVector();
	~intVector();
	int& at(size_t idx);

	int& append(int val);	//introduce new elements
	int* Rdata() const;
	size_t getCapacity() const;
	size_t getSize() const;
	bool empty() const;
	int front() const;
	int back() const;
private:
	bool grow(size_t miniSize);
};