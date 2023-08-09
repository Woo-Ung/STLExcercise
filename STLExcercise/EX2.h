#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

struct Student
{
	int mNumber;
	int mScore;
	std::string mName;
};

std::ostream& operator << (std::ostream& os, const std::vector<Student>& students)
{
	for (const auto& e : students)
	{
		std::cout << e.mNumber << " : " << e.mName << ", " << e.mScore << std::endl;
	}
	return os;
}

bool GreaterCompare(Student x, Student y)
{
	return x.mScore > y.mScore;
}

bool LessCompare(Student x, Student y)
{
	return x.mScore < y.mScore;
}

void Ex2()
{
	std::vector<Student> students
	{	
		{ 1, 100, "Doggy" },
		{ 2, 50, "kitty" },
		{ 3, 90, "Piggy" },
		{ 4, 20, "Bunny" }
	};

	std::sort(students.begin(), students.end(), GreaterCompare);
	std::cout << students << std::endl;

	std::sort(students.begin(), students.end(), LessCompare);
	std::cout << students << std::endl;
}