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
//	Vector(����)
//		-�迭�� ũ��(size)�� ���ҵ��� ����(pointer)
//		-���ҵ��� �������� 0 ~ size-1 �ε����� ����
//		÷�ڿ�����[]
//
//Iterator
//	������ ������Ʈ
//	�����̳� ���ο� ����Ǿ� ����
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
//	// char Ư��ȭ
//	std::string s1 {"�����ٶ󸶹ٻ�"};
//
//	std::cout << s1 << std::endl;
//
//	// wchar_t Ư��ȭ
//	// char ���ͷ� ''
//	//wchar_t ���ͷ� L''
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
//	wchar_t ch3 = L'��';
//	std::wstring str = L"�ȳ��ϼ���";
//	std::wcout << ch3 << std::endl;
//
//	return 0;
//}

//////////////////////////////////////////////////

//// C++
//����				is
//��				grade
//��/�� ��ȭ ����!	successfully enhanced

//// C
//%s���� %d�� %s��/�� ��ȭ ����!

//
//int main()
//{
//	std::string nick {"Doggy"};
//	int rarity{ 5 };
//	std::string itemName {"������"};
//
//	std::ostringstream oss;
//
//	oss << nick << "����" << rarity << "��" << itemName << "��/�� ��ȭ ����!" << std::endl;
//	 
//	std::cout << oss.str() << std::endl;
//
//	////////////////////////////////
//
//	char output[512];
//	snprintf(output, sizeof(output),"%���� %�� %�� ��ȭ ����!", nick.c_str(), rarity, itemName.c_str());
//
//	std::cout << output << std::endl;
//
//	return 0;
//}

/////////////////////////////////////////////////////

// vector(����)
//	- �迭�� ũ��(size)�� ���ҵ��� ����(pointer)
//	- ���ҵ��� �������� 0 ~ size-1 �ε����� ����
//		÷�� ������[]

//int main()
//{
//	std::vector<int> v1 {2, 3, 1, 5, 6};	
//	std::vector<std::string> v2 {"doggy", "kitty", "bunny"};
//
//	// �迭÷��
//	std::cout << v1[0] << std::endl;
//
//	for (int i = 0; i < v2.size();i++)
//	{
//		std::cout << v2[i] << std::endl;
//	}
//
//	// ������
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
//	std::vector<int> v5;	// ���Ұ� 0���� ����
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
//	for (auto itr = v.begin(); itr != v.end(); itr++)   //auto = �����Ϸ��� �߷��� �� �ִ� Ÿ���� ����, auto�� ����ڰ� Ȯ���� �Ÿ������ �˾ƾ���
//	{
//		std::cout << *itr << std::_Unlock_shared_ptr_spin_lock;
//	}
//	// �� == ��  rangebased llop
//	for (int e : v)
//	{
//		std::cout << e << std::endl;
//	}
//
//	std::vector<int>::iterator itr2 = v.begin();
//	itr2.		// iterator �ν��Ͻ��� ��� ����/�Լ� ����
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
//	//std::sort(numbers.begin(), numbers.end()); // ��������
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
//	std::cout << numbers << std::endl;	// ��������
//
//	//�ε���
//	for (int i = 0; i < numbers.size(); ++i)
//	{
//		std::cout << numbers[i] << std::endl;
//	}
//
//	// ���ͷ�����
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


//������ �����̳�(sequence Container)
//	���ҵ��� ������� ����
//	std::array		
//		Random Access []
//		Fixed Size
//
//	std::vector
//		Random Access []
//		Dynamic Size
//
//	std::forward_list	//�̱� ��ũ�� ����Ʈ
//		Sequential Access // Random Access �ƴ�
//
//	std::list			//���� ��ũ�� ����Ʈ
//		Double Linked List
//
//	std::deque		// Double ended QUEue (��ũ)
//		Ramdon Access
//
//
//���� �����̳�(Associative Container)
//	���ҵ��� �յ�, ����, �¿� ���ε� �������� ���� ���� �Ǿ� �ִ� ���
//	Binary Search Tree( BST ) //���� Ž�� Ʈ��
//	Hash
//	std::set
//		������ ������ ����
//		key ��
//		std::unordered_set
//
//	std::map
//		key <- value
//		Dictionary
//		
//	std::multiset
//		������ Ű�� ������
//
//	std::multimap
//
//�����̳� �����(container Adapter)
//	Ư���� ������ �°� ����
//	std::stack
//	std::queue
//	std::proiority_queue


//
//std::vector		//**�ָ��� �� �ַ� ���ͻ��**
//	�迭 ����
//	�����Ͱ� ���� ���
//	
//
//std::list
//	�߰����� ������ ���� ���
//	�����Ͱ� ���� ���
//
//std::map
//	�˻��� �ʿ��� ��
//	�����Ͱ� ���� ��� 



int main()
{
	Ex4();
}