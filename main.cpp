#include <bits/stdc++.h>
#include "Huge.h"
using namespace std;
int main()
{
	HugeInteger 	a, a1(50), a2(504),a3(-504);  //ʹ��int��Ĭ��ֵ��ʼ�������� 
	HugeInteger 	b(""), b1("1234567"), b2("7891234567");
	bool f;

	//�����ı���ֵ���ȿ���ѡ��Сһ�㣬��ѡ�񳬴�����
		//��һ��������֤ a��a1��a2��b, b1, b2����ȷ�� 
	cout << "\n---------��ʼ������a,a1,a2�Ƿ���ȷ��--------" << endl;
	a.Output();
	a1.Output();
	a2.Output();

	cout << "\n---------��ʼ������ b��b1��b2�Ƿ���ȷ��--------" << endl;
	b.Output();
	b1.Output();
	b2.Output();
	cout << "\n------------------------------------------------------------------------" << endl;
	cout << " a.length=" << a.DataLength(a) << endl;
	cout << "a1.length=" << a1.DataLength(a1) << endl;
	cout << "a2.length=" << a2.DataLength(a2) << endl;
	cout << "b1.length=" << b1.DataLength(b1) << endl;

	//�ڶ�����֤�ӷ��Ƿ���ȷ�� 
	cout << "----(a)+(b)-----" << endl;
	cout << "a=";
	a.Output();
	cout << "a=a.Add(0,0):" << "\t";
	a = a.Add(a, a);   // 0+0
	a.Output();
	cout << endl;

	cout << "a2=";
	a2.Output();
	cout << "b2=";
	b2.Output();
	a = a.Add(a2, b2);   // (a2)+(b)
	cout << "a=a.Add(a2,b2):" << "\t";
	a.Output();
	cout << endl;

	cout << "a1=";
	a1.Output();
	a = a.Add(a1, a1);
	cout << "a=a.Add(a1,a1):" << "\t";
	a.Output();
	cout << endl;

	//��������֤�˷�: һ��������� int �����Ƿ���ȷ��
	cout << "----(a)*int------" << endl;
	a = a.Mul(a, 0);
	a.Output();

	cout << "a=a.mul(a2,2):" <<'\t';
	a2.Output();
	a = a.Mul(a2, 2);   // (a)*(2)
	a.Output();

	cout << "a=a.mul(a2,-2):" <<'\t';
	a = a.Mul(a2, -2);   // (a)*(-2)
	a.Output();

	cout << "a=a.mul(a1,3):" <<'\t';
	a = a.Mul(a1, 3);   // (-a)*(3)
	a.Output();

	cout << "a=a.mul(a1,-3):" ;
	a = a.Mul(a1, -3);   // (-a)*(3)
	a.Output();

	//���Ĳ���֤�˷�: һ��������� һ�������Ƿ���ȷ��
	cout << "----(a)*(b)------" << endl;

	cout << "a=a.mul(a2,a2):" <<"\t";
	a = a.Mul(a2, a2);   // (a)*(b)
	a.Output();

	cout << "a=a.mul(a1,a2):" <<'\t';
	a = a.Mul(a1, a2);   // (-a)*(b)
	a.Output();

	cout << "a=a.mul(a1,a1):"<<'\t';
	a = a.Mul(a1, a1);   // (-a)*(-b)
	a.Output();

	cout << "a=a.mul(a3,a1):" <<'t';
	a = a.Mul(a3, a1);   // (a)*(-b)
	a.Output();

}