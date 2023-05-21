#include <bits/stdc++.h>
#include "Huge.h"
using namespace std;
int main()
{
	HugeInteger 	a, a1(50), a2(504),a3(-504);  //使用int或默认值初始化大整数 
	HugeInteger 	b(""), b1("1234567"), b2("7891234567");
	bool f;

	//上述的变量值，先可以选择小一点，再选择超大整数
		//第一步：先验证 a，a1、a2、b, b1, b2的正确性 
	cout << "\n---------初始化数据a,a1,a2是否正确？--------" << endl;
	a.Output();
	a1.Output();
	a2.Output();

	cout << "\n---------初始化数据 b，b1、b2是否正确？--------" << endl;
	b.Output();
	b1.Output();
	b2.Output();
	cout << "\n------------------------------------------------------------------------" << endl;
	cout << " a.length=" << a.DataLength(a) << endl;
	cout << "a1.length=" << a1.DataLength(a1) << endl;
	cout << "a2.length=" << a2.DataLength(a2) << endl;
	cout << "b1.length=" << b1.DataLength(b1) << endl;

	//第二步验证加法是否正确？ 
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

	//第三步验证乘法: 一个对象乘上 int 数的是否正确？
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

	//第四步验证乘法: 一个对象乘上 一个对象，是否正确？
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