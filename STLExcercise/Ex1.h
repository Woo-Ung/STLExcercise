#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

bool Compare(int x, int y)
{
	return x > y;
}

std::ostream& operator << (std::ostream& os, std::vector<int> v)
{
	std::cout << "{";

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it;
		if (it != v.end() - 1)
		{
			std::cout << ",";
		}
	}

	std::cout << "}" << std::endl;
	return os;
}