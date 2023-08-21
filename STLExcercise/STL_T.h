#pragma once
#include <iostream>
#include <vector>


void STL_T()
{
	int x{}, y{}, value{};
	std::cin >> x >> y;
	std::cin >> value;
	std::vector<std::vector<int>> Array(x, std::vector<int>(y,value));

	std::cout << "{" << std::endl;

	for (int i = 0; i < Array.size(); i++)
	{
		std::cout << "{";

		for (int j = 0; j < Array[i].size(); j++)
		{
			std::cout << Array[i][j];

			if (j < Array[i].size() - 1)
			{
				std::cout << ",";
			}
		}

		std::cout << "}";

		if (i < Array.size() - 1)
		{
			std::cout << "," << std::endl;
		}
	}

	std::cout << std::endl << "}" << std::endl;
}
