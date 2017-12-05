#pragma once


template<typename Q, typename P>
static P addRange(Q* start, Q* end)
{
	P total = 0;
	Q* iter = start;
	while(iter!= end)
	{
		total += *iter;
		++iter; //moves memory one address across
	}
	return total;

}