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
}