#include <bits/stdc++.h>
#ifndef Huge
#define Huge
using namespace std;  //ʹ����string��������Ҫ 
class HugeInteger {
public:
	HugeInteger(long = 0);  //��ʼ������longֵ��λ�ָ��� 

	HugeInteger(const string&); //�������ַ���ת������Ӧ�Ĵ����� 

	int DataLength(const HugeInteger) const;  //����data[]������λ������ 

	void Output(); //��������ʾ����Ļ�� 

	HugeInteger   Add(const HugeInteger x, const HugeInteger y);//��������� 

	HugeInteger   Left(HugeInteger& x, const int n);//������������nλ������ڳ���n��10
	
	HugeInteger   Mul(const HugeInteger, const int); //һ������������һ��nֵ
	
	HugeInteger   Mul(const HugeInteger, const HugeInteger); //������������� 


	static const int LEN = 30;  //�������λ������ı�������֧�֣��޸ĳ�ʼ����ʽ
private:
	short data[LEN]={0};  //���ÿһλ���� 
	int  N_LEN;      //��������λ��
};
#endif
