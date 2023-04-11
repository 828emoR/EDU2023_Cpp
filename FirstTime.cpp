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
//}
//
//void main()
//{
//	short a, b;
//	cout << "input the First number = " << endl;
//	cin >> a;
//	cout << " input the Second Number = " << endl;
//	cin >> b;
//
//	cout << "Sum = " << a + b << endl;
//	cout << "Sub = " << a - b << endl;
//	cout << "Mul = " << a * b << endl;
//	cout << "Div = " << result << endl;
//	cout << "Sum = " << a / b << endl;
//	cout << "Rem = " << a % b << endl;
//}
//int main()
//{
//	int a, b, c;
//	cout << "국";
//
//	cin >> a;
//
//	cout << "영";
//
//	cin >> b;
//
//	cout << "수";
//
//	cin >> c;
//
//	cout << "총점" << a + b + c << endl;
//	cout << "평균 : " << (a + b + c) / 3.0 << endl;
//}
//void main()
//{
//	int a, b;
//
//	a = 1;
//
//	cout << ++a << endl; //2
//
//	a = 1;
//	b = ++a;
//	cout << b << endl; //2
//
//	a = 1;
//	cout << a++ << endl; //1
//
//	a = 1;
//	b = a++;
//	cout << b << endl; //1
//
//	a = 1;
//	++a;
//	cout << a << endl; //2
//
//	a = 1;
//	a++;
//	cout << a << endl; //2
//
//}
//void main()
//{
//	int a = 4;
//	++a = 1; // OK:l-value
//	cout << a << endl;
//	//a++ = 1; // Error: r-value
//}
//void main()
//{
//	int a = 0;
//
//	if (a = 1)
//	{
//		cout << "a == 1" << endl;
//
//	}
//	else
//	{
//		cout << "a != 1 " << endl;
//	}
//
//}
//int Func()
//{
//	cout << "Func" << endl;
//	return 1;
//}
//void main()
//{
//	if (0 && Func())
//	{
//		cout << "main" << endl;
//	}
//}
//void main()
//{
//	cout << ~9 << endl;
//	cout << !9 << endl;
//}
//void main()
//정수
//{
//	int a = 3;
//	int b = 7;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << a << " " << b << endl;
//}
//
//void main() {
//	//실수
//	float a = 3.7;
//	float b = 7.3;
//
//	*(int)&a = *(int)&a ^ *(int)&b;
//	*(int)&b = *(int)&a ^ *(int)&b;
//	*(int)&a = *(int)&a ^ *(int)&b;
//	cout << a << " " << b << endl;
//}

// ## 비트 이동 연산자(<<, >>) ## //

//void main()
//{
//	char c = 1;
//
//	c = c << 7;
//	cout << +c << endl;
//
//	c = c >> 7;
//	cout << +c << endl;
//}
//void main() {
//	char c; // signed
//
//	c = 2; // [0000,0010] 2
//	c = c >> 1; // [0000,0001] 1
//	cout << +c << endl;
//
//	c = -126;	// [1000,0010] -126
//	c = c >> 1; // [1100,0001] -63
//	cout << +c << endl;
//}

//## 삼항 연산자 ##//

//int NOT(int arg)
//{
//	return arg ? 0 : 1;
//}
//void main()
//{
//	cout << NOT(3) << " " << NOT(0) << endl;
//}

// ## 기타 연산자 - sizeof ## //

//void main() {
//	cout << sizeof(char) << endl; //1 byte
//	cout << sizeof(int) << endl;  // 4byte
//	cout << sizeof(double) << endl;  // 8byte
//
//	char c;
//	int i;
//	double d;
//	int arr[4];
//
//	cout << sizeof(c) << endl;	// 1byte
//	cout << sizeof(i) << endl;	// 4byte
//	cout << sizeof(d) << endl;	// 4byte
//	cout << sizeof(arr) << endl; // 16byte
//}

//## 기타 연산자 - 타입 변환 연산자 ##//
/*
* (TYPE)식
* 식(TYPE)
* static_cast<TYPE>(식)
* dynamic_cast<TYPE>(식)
* const_cast<TYPE>(식)
* reinterpret_cast<TYPE>(식)
*/

//## 기타 연산자 - 타입 변환 연산자2 ##//
/*void main()
{
	cout << fixed; //고정형.
	cout.precision(0); // 소수점 뒷자리 개수 정의
	int i = 3.141592; //3
	float f = 67108870; //6710872

	cout << i << " " << f << endl;
}

void main()
{
	cout << 1 / 2 << endl;
	cout << (double)1 / 2 << endl;
}
*/

//## 단순 if 문 ##//
/*void main()
{
	if (0)
		cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
}
*/
/*#define SWAP(a, b) a ^= b; b ^= a; a ^= b;
void main()
{
	int a = 0;
	int b = 1;

	if (1) {
		SWAP(a, b);
	}
		

	cout << a << " " << b << endl;

	//결과 = 1 1
}
*/

//## if else ##//
/*int main()
{
	int nai, walk, zzak, a, a2;
	
	cout << "나이를 입력해주세요" << endl;
	cin >> nai;

	if (nai < 20)
		cout << "20세 이하입니다.할인 대상입니다." << endl;

	cout << "걸음 수 입력" << endl;
	cin >> walk;

	if (walk >= 1000)
		cout << "1000걸음 이상을 걸었습니다.목표를 달성했습니다." << endl;

	cout << "수 입력 ㄱ" << endl;
	cin >> zzak;

	if (zzak % 2 == 0)
		cout << "짝수입니다" << endl;
	else 
	{
		cout << "홀수입니다" << endl;
	}

	cout << "시간을 입력해주세요" << endl;
	cin >> a;

	if (a < 12)
		cout << "오전입니다" << endl;
	else
		cout << "오후임미다" << endl;

	cout << "수를 입력해주세요" << endl;
	cin >> a2;

	if (a2 % 3 == 0 && a2 % 5 == 0)
		cout << "3과 5의 배수잼" << endl;
	else
		cout << "3과 5의 배수가 아닌데오?" << endl;
}
*/