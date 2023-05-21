#include <bits/stdc++.h>
#include "Huge.h"
using namespace std;
HugeInteger::HugeInteger(long num)
{
	int i = 0;
	while (num)
	{
		data[i++] = num % 10;
		num /= 10;
	}
	N_LEN = i;
}
HugeInteger::HugeInteger(const string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		data[i] = str[str.size() - 1 - i]-'0';
	}
	N_LEN = str.size();
}
int HugeInteger::DataLength(const HugeInteger) const 
{
	for (int i = 29; i >= 0; i--)
	{
		if (data[i] != 0)
			return i + 1;
	}
	return 0;
}
void HugeInteger::Output()
{
	int flag = 1;
	int i = 30;
	while (!data[--i]&&i>0);
	for (int j = i; j >= 0; j--)
	{
		if (data[j] < 0)
		{
			cout << "-";
			break;
		}
	}
	for (; i >= 0; i--)
		cout << abs(data[i]);
	cout << '\n';
}
HugeInteger HugeInteger::Add(const HugeInteger x,const HugeInteger y)
{
	HugeInteger px;
	int lenx = x.DataLength(x);
	int leny = y.DataLength(y);
	for (int i = 0; i < max(lenx, leny); i++)
	{
		px.data[i]+= x.data[i] + y.data[i];
		px.data[i + 1] +=px.data[i] / 10;
		px.data[i] %= 10;
	}
	return px;
}
HugeInteger HugeInteger::Left(HugeInteger& x, const int n)
{
	HugeInteger px;
	for (int i = 29; i >= n; i--)
		px.data[i] = data[i - n];
	return px;
}
HugeInteger HugeInteger::Mul(const HugeInteger x, const int y)
{
	HugeInteger px;
	int lenx = x.DataLength(x);
	for (int i = 0; i < lenx; i++)
	{
		px.data[i] += x.data[i] * y;
		px.data[i + 1] += px.data[i] / 10;
		px.data[i] %= 10;
	}
	return px;
}
HugeInteger HugeInteger::Mul(const HugeInteger x, const HugeInteger y)
{
	HugeInteger px;
	int lenx = x.DataLength(x);
	int leny = y.DataLength(y);
	for (int i = 0; i < lenx; i++)
	{
		for (int j = 0; j < leny; j++)
		{
			px.data[i + j] += x.data[i] * y.data[j];
			px.data[i + j + 1] += px.data[i + j] / 10;
			px.data[i + j] %= 10;
		}
	}
	return px;
}
