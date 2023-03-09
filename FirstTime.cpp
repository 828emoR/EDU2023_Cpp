#include<iostream>
using namespace std;
// #define = 매크로를 정의하는 지시문.(#define identfire token-list(상수 정의), #define identifire(parameter-list) token-list(함수 정의))
//int main()
//{
//
//	cout << "Hello World" << endl;
//	return 0;
//
//
//}
void main()
{
	cout << "이름을 입력해주세요 " << endl;

	char name[256];
	cin >> name;

	cout << name << "님 C++세계에 오신것을 환영합니다. " << endl;

}

//cout 과 cin 은 꼭 개념을 알아두자.