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
//void main()
//{
//	cout << "이름을 입력해주세요 " << endl;
//
//	char name[256];
//	cin >> name;
//
//	cout << name << "님 C++세계에 오신것을 환영합니다. " << endl;
//
//}

//cout 과 cin 은 꼭 개념을 알아두자.

//230330 오전
//void main()
//{
//	int a = 3;
//	
//	//int 가 아니더라도 앞에서 선언한 타입은 앞에 signed가 붙어있음. 그 반대의 경우를 만드려면 unsigned 를 붙혀서 사용.
//	//ex(unsignd = 0~42억, int = -21억 ~ 21억 까지의 수
//	//& = 주소 지정자, * = 포인터 연산자. 포인터형 연산자에서는 값의 저장이 불가. 
//	int* pa = &a;
//	cout << pa << endl << *pa << endl;
//	cout << &a << endl << a << endl;
//}

//230330 오전2
//class CPerson
//{
//public:
//	const char* m_Name;
//	int m_Age;
//
//		void print()
//	{
//		cout << "Name: " << m_Name << endl;
//		cout << "Age: " << m_Age << endl;
//	}
//};
//
//int main()
//{
//	CPerson p[2];
//	CPerson* pPer;
//
//p[0].m_Name = "Kim do Hyung";
//p[0].m_Age = 11; 
//
//pPer = &p[0];
//pPer->print();
//	
//
//
//p[1].m_Name = "Kim Na In";
//p[1].m_Age = 9;
//p[1].print();
//
//return 0;
//}
//void = 반환값 없음. return 없으므로 return  구문 사용불가.

//## const - 기호상수 ##//

//int ga; // 0초기화
//int gb = 1; // 1초기화
//
////g : Global.
//// ga - 0초기화 : = 뒤에 값이 없으므로 컴파일러단에서 0으로 항상 변환함.
//
//void main()
//{
//	int a; // 미정의 값 초기화
//	int b = 2; // 2초기화
//
//	cout << ga << endl;
//	cout << gb << endl;
//	cout << a << endl;
//	cout << b << endl;
//}
}