#include <iostream>
#include <string>
#include <locale>
#include <sstream>  //string stream
#include <vector>
#include <algorithm>
#include "EX1.h"
#include "EX2.h"
#include "EX3.h"
#include "EX4.h"

//STL
//
//Container
//	Vector(벡터)
//		-배열의 크기(size)와 원소들의 집합(pointer)
//		-원소들의 시퀀스는 0 ~ size-1 인덱스로 접근
//		첨자연산자[]
//
//Iterator
//	포인터 오브젝트
//	컨테이너 내부에 선언되어 있음
// [begin, end)
//
//Algorithm


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

//int main()
//{
//	std::vector<int> v {1, 2, 3, 4, 5};
//
//	std::vector<int>::iterator itr;
//
//	itr = v.begin();
//	std::cout << *itr << std::endl;
//
//	itr++;
//	std::cout << *itr << std::endl;
//
//	// traverse
//	itr = v.begin();
//	while (itr != v.end())
//	{
//		std::cout << *itr << std::endl;
//		itr++;
//	} 
//
//	//	for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
//	for (auto itr = v.begin(); itr != v.end(); itr++)   //auto = 컴파일러가 추론할 수 있는 타입을 생략, auto는 사용자가 확실히 어떤타입인지 알아야함
//	{
//		std::cout << *itr << std::_Unlock_shared_ptr_spin_lock;
//	}
//	// ㄴ == ㄱ  rangebased llop
//	for (int e : v)
//	{
//		std::cout << e << std::endl;
//	}
//
//	std::vector<int>::iterator itr2 = v.begin();
//	itr2.		// iterator 인스턴스의 멤버 변수/함수 접근
//	itr2->		// (*itr2).
//}

//int main()
//{
//	class Student
//	{
//	public:
//		int mNumber;
//	};
//
//	std::vector<Student> students {{ 1 }, { 2 }, { 3 } };
//
//	std::vector<Student>::iterator itr = students.begin();
//		
//	itr->mNumber = 0;
//
//}

//int main()
//{
//	std::vector<int> numbers {5, 2, 3, 1, 4};
//
//	min
//	int x = 5, y = 3;
//	std::cout << std::min(x, y) << std::endl;
//	std::cout << std::min({ 1,2,3,4,5 }) << std::endl;
//
//	min_element
//	/*std::vector<int>::iterator result = std::min_element(numbers.begin(), numbers.end());
//	std::cout << *result << std::endl;*/
//
//	swap
//	std::vector<int> numbers2 {0, 0, 0, 0, 0, 0, 0 };
//	std::swap(numbers, numbers2);
//
//	for (const auto& e : numbers)
//	{
//		std::cout << e << ", ";
//	}std::cout << std::endl;
//
//	for (const auto& e : numbers2)
//	{
//		std::cout << e << ", ";
//	}std::cout << std::endl;
//
//	 Function + Object => Functor
//
//
//
//
//	struct CompareObject
//	{
//		bool operator() (int x, int y)
//		{
//			return x > y;
//		}
//	};
//
//	CompareObject c;
//
//	//std::sort(numbers.begin(), numbers.end()); // 오름차순
//	//std::cout << numbers << std::endl;
//
//	//std::sort(numbers.begin(), numbers.end(),c);					// functor
//	//std::cout << numbers << std::endl;
//
//	//std::sort(numbers.begin(), numbers.end(), Compare);				// function
//	//std::cout << numbers << std::endl;
//
//	//std::sort(numbers.begin(), numbers.end(), std::less<int>());	// predicate
//	//std::cout << numbers << std::endl;
//
//	//std::sort(numbers.begin(), numbers.end(), std::greater<int>()); // predicate
//	//std::cout << numbers << std::endl;
//
//	//std::sort(numbers.begin(), numbers.end(), [](int x, int y) {return x > y;} ); // lambda expression
//	//std::cout << numbers << std::endl;
//
//	std::sort(numbers.begin(), numbers.end(), [](int x, int y) -> bool {
//		return x > y;
//		});
//
//	std::cout << numbers << std::endl;	// 오름차순
//
//	//인덱스
//	for (int i = 0; i < numbers.size(); ++i)
//	{
//		std::cout << numbers[i] << std::endl;
//	}
//
//	// 이터레이터
//	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
//	{
//		std::cout << numbers[i] << std::endl;
//	}
//
//	// for_each
//	std::for_each(numbers.begin(), numbers.end(), [](const int& val)
//		{
//			std::cout << val << std::endl;
//		});
//
//	// range-based
//	for (const auto& e : numbers)
//	{
//		std::cout << e << std::endl;
//	}
//}

//int main()
//{
//	Ex2();
//
//}


//시퀀스 컨테이너(sequence Container)
//	원소들이 순서대로 나열
//	std::array		
//		Random Access []
//		Fixed Size
//
//	std::vector
//		Random Access []
//		Dynamic Size
//
//	std::forward_list	//싱글 링크드 리스트
//		Sequential Access // Random Access 아님
//
//	std::list			//더블 링크드 리스트
//		Double Linked List
//
//	std::deque		// Double ended QUEue (데크)
//		Ramdon Access
//
//
//연관 컨테이너(Associative Container)
//	원소들이 앞뒤, 상하, 좌우 어디로든 연관성에 따라 연결 되어 있는 방식
//	Binary Search Tree( BST ) //이진 탐색 트리
//	Hash
//	std::set
//		고유한 값들이 정렬
//		key 값
//		std::unordered_set
//
//	std::map
//		key <- value
//		Dictionary
//		
//	std::multiset
//		동일한 키가 여러개
//
//	std::multimap
//
//컨테이너 어댑터(container Adapter)
//	특수한 목적에 맞게 변형
//	std::stack
//	std::queue
//	std::proiority_queue


//
//std::vector		//**애매할 때 주로 벡터사용**
//	배열 접근
//	데이터가 적은 경우
//	
//
//std::list
//	중간에서 삭제가 잦은 경우
//	데이터가 적은 경우
//
//std::map
//	검색이 필요할 때
//	데이터가 많은 경우 



int main()
{
	Ex4();
}