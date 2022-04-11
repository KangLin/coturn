#include <iostream>
#include "apputils.h"

void test_clock_gettime()
{
	timeval tv;
	int nRet = clock_gettime(1, &tv);
	std::cout << "Clock time:" << " " << nRet << " " << tv.tv_sec << " " << tv.tv_usec << std::endl;
}

int main()
{
	for(int i = 0; i < 100; i++)
		test_clock_gettime();
	return 0;
}

