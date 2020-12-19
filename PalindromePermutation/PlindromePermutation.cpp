#include<iostream>
using namespace std;

int main()
{
	string str = "aaabcc";
	int bitVector = 0;
	for (int i = 0; i < str.length(); i++)
	{
		int val = str[i]-'a';
		int mask = 1 << val;
		if ((bitVector & mask) == 0)
		{
			bitVector |= mask;
		}
		else
		{
			bitVector &= ~mask;
		}
	}

	if ((bitVector & (bitVector - 1)) == 0)
	{
		cout << "palindrome permutation";
	}
	else
	{
		cout << "not palindrome permutation";
	}
}