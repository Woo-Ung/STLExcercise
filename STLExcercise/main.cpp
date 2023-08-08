#include <iostream>
#include <string>
#include <locale>
#include <sstream>  //string stream
#include <vector>

//int main()
//{
//	std::string s1, s2;
//
//	s1 = "hello";
//	s2 = "world";
//
//	s1 = s2;
//	s1 += s2;
//
//	std::cout << s1[0] << std::endl;
//	s1[0] = 'W';
//
//	if (s1 == s2)
//	{
//		if (s1 > s2)
//		{
//
//		}
//	}
//
//	s1.size();
//
//	// C++ std::string
//	// C char *
//	s1.c_str();
//	
//	std::cout << s1 << std::endl;
//
//	s1.begin();
//	s1.end();
//
//	return 0;
//}

////////////////////////////////////////////////

//int main()
//{
//	// char 특수화
//	std::string s1 {"가나다라마바사"};
//
//	std::cout << s1 << std::endl;
//
//	// wchar_t 특수화
//	// char 리터럴 ''
//	//wchar_t 리터럴 L''
//
//	char ch1 = 'A';
//	wchar_t ch2 = L'B';
//
//	std::cout << ch1 << std::endl;
//	std::wcout << ch2 << std::endl;
//
//
//	_wsetlocale(LC_ALL, L"korean");
//	std::wcout.imbue(std::locale("korean"));
//
//	
//	wchar_t ch3 = L'나';
//	std::wstring str = L"안녕하세요";
//	std::wcout << ch3 << std::endl;
//
//	return 0;
//}

//////////////////////////////////////////////////

//// C++
//님이				is
//성				grade
//을/를 강화 성공!	successfully enhanced

//// C
//%s님이 %d성 %s을/를 강화 성공!

//
//int main()
//{
//	std::string nick {"Doggy"};
//	int rarity{ 5 };
//	std::string itemName {"서리한"};
//
//	std::ostringstream oss;
//
//	oss << nick << "님이" << rarity << "성" << itemName << "을/를 강화 성공!" << std::endl;
//	 
//	std::cout << oss.str() << std::endl;
//
//	////////////////////////////////
//
//	char output[512];
//	snprintf(output, sizeof(output),"%님이 %성 %를 강화 성공!", nick.c_str(), rarity, itemName.c_str());
//
//	std::cout << output << std::endl;
//
//	return 0;
//}

/////////////////////////////////////////////////////

// vector(백터)
//	- 배열의 크기(size)와 원소들의 집합(pointer)
//	- 원소들의 시퀀스는 0 ~ size-1 인덱스로 접근
//		첨자 연산자[]

//int main()
//{
//	std::vector<int> v1 {2, 3, 1, 5, 6};	
//	std::vector<std::string> v2 {"doggy", "kitty", "bunny"};
//
//	// 배열첨자
//	std::cout << v1[0] << std::endl;
//
//	for (int i = 0; i < v2.size();i++)
//	{
//		std::cout << v2[i] << std::endl;
//	}
//
//	// 생성자
//	std::vector<int> v3(5);
//	std::vector<int> v4(5, 10);
//
//	for (int i = 0;i < v3.size(); i++)
//	{
//		std::cout << v3[i] << std::endl;
//	}
//
//	// Range-based loop : [0 : v1.size)
//	for (int e : v1)
//	{
//		std::cout << e << std::endl;
//	}
//
//	int numbers[]{ 1,2,3,4,5 };
//	for (int number : numbers)
//	{
//		std::cout << number << std::endl;
//	}
//
//	std::vector<int> v5;	// 원소가 0개인 벡터
//	v5.push_back(2);
//	v5.push_back(3);
//	//{ 2, 3 }
//
//	return 0;
//}

//int main()
//{
//	int x{}, Sum{};
//	std::vector<int> v1;
//	while (std::cin >> x)
//	{		
//		v1.push_back(x);
//	}	
//
//	for(int i : v1)
//	{			
//		Sum += i;		
//	}
//
//	std::cout << Sum << std::endl;
//}

//int main()
//{
//	int x{}, min{}, count{};
//	std::vector<int> v2;	
//	min = 100;
//	while (std::cin >> x)
//	{
//		v2.push_back(x);
//	}
//
//	for (int i = 0; i < v2.size();i++)
//	{		
//		if(	v2[i] < min)
//		{
//			min = v2[i];
//			count = i;
//		}
//	}	
//	std::cout << count << std::endl;
//}