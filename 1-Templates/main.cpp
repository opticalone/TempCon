#include <iostream>
#include "person.h"

int add(int a, int b)
	{
		return a + b;
}

float add(float a, float b)
{
	return a + b;
}

template<typename T>
T sub(T a, T b)
{
	return a - b;
}


//closed
//print function

template<typename M>
void print(M a)
{
	std::cout << a << std::endl;
	
}



template<>
void print(Person value)
{
	std::cout << "age: " << value.age << std::endl;
	std::cout << "name: " << value.name << std::endl;
}

//2 Common Math Operations
//min

template<typename M>
M min(M a, M b)
{
	return a < b ? a : b;
}

//max

template<typename M>
M max(M a, M b)
{
	return a > b ? a : b;
}

//clamp

template<typename M>
M clamp(M value, M top, M bot)
{
	
	if (value > top)
	{
		return top;
	}
	else if (value < bot)
	{
		return bot;
	}
	else { return value; }
}



//open
// swap
template<typename M>
M swap(M &a, M &b)
{
	M temp = a;
	a = b;
	b = temp;

	return a,b;
}

//Boolean Assertions
template<bool other>
bool compare(bool condition)
{
	if (condition == other)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

//EQUAL
template<typename E>
bool isEqual(E a, E b)
{
	return a == b;
	if (a == b)
	{
		return true;
	}

}

//Not Equal
template<typename E>
bool notEqual(E a, E b)
{
	return a != b;
	if (a != b)
	{
		return false;
	}

}




int main()
{

	Person mi;
	mi.name = "Michael";
	mi.age = 23;

	//without template (using normal functions)
	int v1 = add(5, 2);
	float v2 = add(2.2f, 2.2f);

	//With template
	int s1 = sub(5, 4);
	float s2 = sub(5.1, 3.6);
	int s3 = sub<int>(1, 3.4f);

	//closed
	//print function
	 print(1);
	 print(3.35);
	 print(false);

	//min
	int q1 = min(3, 6);
	float q2 = min(3.4, 5.6);

	//max
	int w1 = max(3, 6);
	float w2 = max(3.4, 5.6);

	//clamp
	int c1 = clamp(3, 4, 5);

	// Explicit Print function Instantiation for User-Defined Type(person)
	print(mi);
	
	//swap
	int u1 = 3;
	int u2 = 5;

	print(u1);
	print(u2);
	print(swap(u2, u1));

	//Min and Max Instantiation for Char Types
	print(max('?', '!'));
	print(min('?', '!'));

	//Bool assertions
	bool isHungry = false;
	print(compare<true>(isHungry));
	
	//equal
	int eqCheck1 = 3;
	int eqCheck2 = 5;
	print(isEqual(eqCheck1, eqCheck2));

	//not equal
	print(notEqual(5, 5));

	while (true);
		
}

