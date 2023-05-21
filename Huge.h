#include <bits/stdc++.h>
#ifndef Huge
#define Huge
using namespace std;  //使用了string，所以需要 
class HugeInteger {
public:
	HugeInteger(long = 0);  //初始化，将long值按位分割存放 

	HugeInteger(const string&); //将数字字符串转换成相应的大整数 

	int DataLength(const HugeInteger) const;  //计算data[]中数据位数长度 

	void Output(); //将数据显示到屏幕上 

	HugeInteger   Add(const HugeInteger x, const HugeInteger y);//大整数相加 

	HugeInteger   Left(HugeInteger& x, const int n);//将大整数左移n位，相对于乘上n个10
	
	HugeInteger   Mul(const HugeInteger, const int); //一个大整数乘上一个n值
	
	HugeInteger   Mul(const HugeInteger, const HugeInteger); //两个大整数相乘 


	static const int LEN = 30;  //最长的整数位。如你的编译器不支持，修改初始化方式
private:
	short data[LEN]={0};  //存放每一位数字 
	int  N_LEN;      //大整数的位数
};
#endif
