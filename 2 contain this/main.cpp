#include "intVector.h"
#include "test.h"
#include "intLinkedList.h"

int main()
{

	intLinkedList nums;
	nums.append(1);
	nums.append(2);
	nums.append(3);
	nums.append(4);
	nums.append(5);



	/*intVector nums;
	nums.append(1);
	nums.append(5);

	assertEqual(nums.at(0), 1);
	assertEqual(nums.at(1), 5);
	
	nums.append(33);
	assertEqual(nums.at(0), 1);
	assertEqual(nums.at(1), 5);
	assertEqual(nums.at(2), 33);

	assertEqual<size_t>(nums.getCapacity(),4);
	assertEqual<size_t>(nums.getSize(), 3);
	assert<false>(nums.empty());
	assertEqual(nums.front(), 1);
	assertEqual(nums.back(), 33);
		
	*/
}