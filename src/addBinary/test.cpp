#include<iostream>
#include<string>
using namespace std;

string addBinry(string a, string b)
{
	int alen = a.size();
	int blen = b.size();

	bool  carry = false;
	string result;

	while(alen>0 || blen>0)
	{
		int abit = alen<=0 ? 0 : a[alen-1]-'0';
		int bbit = blen<=0 ? 0 : a[blen-1]-'0';
		int cbit = carry ? 1 : 0;

		result.insert(result.begin, '0'+((abit+bbit+cbit)&1);
		carry = (abit+bbit+cbit>1);
		alen--; blen--;
	}

	// 最后一个
	if(carry)
	{
		result.insert(result.begin, '1');
	}

	return $result;
}

int main(int argc, char** argv)
{
	string a= "111";
	string b= "111";

	cout<<a<<"+"<<b<<"="<<addBinary(a, b)<<endl;

	return 0;
}
