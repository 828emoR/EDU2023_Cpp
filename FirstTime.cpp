#include<iostream>
using namespace std;
// #define = ��ũ�θ� �����ϴ� ���ù�.(#define identfire token-list(��� ����), #define identifire(parameter-list) token-list(�Լ� ����))
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
//	cout << "�̸��� �Է����ּ��� " << endl;
//
//	char name[256];
//	cin >> name;
//
//	cout << name << "�� C++���迡 ���Ű��� ȯ���մϴ�. " << endl;
//
//}

//cout �� cin �� �� ������ �˾Ƶ���.

//230330 ����

//void main()
//{
//	int a = 3;
//	
//	//int �� �ƴϴ��� �տ��� ������ Ÿ���� �տ� signed�� �پ�����. �� �ݴ��� ��츦 ������� unsigned �� ������ ���.
//	//ex(unsignd = 0~42��, int = -21�� ~ 21�� ������ ��
//	//& = �ּ� ������, * = ������ ������. �������� �����ڿ����� ���� ������ �Ұ�. 
//	int* pa = &a;
//	cout << pa << endl << *pa << endl;
//	cout << &a << endl << a << endl;
//}

//230330 ����2

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
//void = ��ȯ�� ����. return �����Ƿ� return  ���� ���Ұ�.

//## const - ��ȣ��� ##//

//int ga; // 0�ʱ�ȭ
//int gb = 1; // 1�ʱ�ȭ
//
////g : Global.
//// ga - 0�ʱ�ȭ : = �ڿ� ���� �����Ƿ� �����Ϸ��ܿ��� 0���� �׻� ��ȯ��.
//
//void main()
//{
//	int a; // ������ �� �ʱ�ȭ
//	int b = 2; // 2�ʱ�ȭ
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
//	cout << "��";
//
//	cin >> a;
//
//	cout << "��";
//
//	cin >> b;
//
//	cout << "��";
//
//	cin >> c;
//
//	cout << "����" << a + b + c << endl;
//	cout << "��� : " << (a + b + c) / 3.0 << endl;
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
//����
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
//	//�Ǽ�
//	float a = 3.7;
//	float b = 7.3;
//
//	*(int)&a = *(int)&a ^ *(int)&b;
//	*(int)&b = *(int)&a ^ *(int)&b;
//	*(int)&a = *(int)&a ^ *(int)&b;
//	cout << a << " " << b << endl;
//}

// ## ��Ʈ �̵� ������(<<, >>) ## //

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

//## ���� ������ ##//

//int NOT(int arg)
//{
//	return arg ? 0 : 1;
//}
//void main()
//{
//	cout << NOT(3) << " " << NOT(0) << endl;
//}

// ## ��Ÿ ������ - sizeof ## //

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

//## ��Ÿ ������ - Ÿ�� ��ȯ ������ ##//
/*
* (TYPE)��
* ��(TYPE)
* static_cast<TYPE>(��)
* dynamic_cast<TYPE>(��)
* const_cast<TYPE>(��)
* reinterpret_cast<TYPE>(��)
*/

//## ��Ÿ ������ - Ÿ�� ��ȯ ������2 ##//
/*void main()
{
	cout << fixed; //������.
	cout.precision(0); // �Ҽ��� ���ڸ� ���� ����
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

//## �ܼ� if �� ##//
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

	//��� = 1 1
}
*/

//## if else ##//
/*int main()
{
	int nai, walk, zzak, a, a2;
	
	cout << "���̸� �Է����ּ���" << endl;
	cin >> nai;

	if (nai < 20)
		cout << "20�� �����Դϴ�.���� ����Դϴ�." << endl;

	cout << "���� �� �Է�" << endl;
	cin >> walk;

	if (walk >= 1000)
		cout << "1000���� �̻��� �ɾ����ϴ�.��ǥ�� �޼��߽��ϴ�." << endl;

	cout << "�� �Է� ��" << endl;
	cin >> zzak;

	if (zzak % 2 == 0)
		cout << "¦���Դϴ�" << endl;
	else 
	{
		cout << "Ȧ���Դϴ�" << endl;
	}

	cout << "�ð��� �Է����ּ���" << endl;
	cin >> a;

	if (a < 12)
		cout << "�����Դϴ�" << endl;
	else
		cout << "�����ӹ̴�" << endl;

	cout << "���� �Է����ּ���" << endl;
	cin >> a2;

	if (a2 % 3 == 0 && a2 % 5 == 0)
		cout << "3�� 5�� �����" << endl;
	else
		cout << "3�� 5�� ����� �ƴѵ���?" << endl;
}
*/