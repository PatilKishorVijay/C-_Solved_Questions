#include<iostream>
#include<string>
using namespace std;



int BinaryToDecimal(int no)
{

	int decimal = 0;

	int i = 0;
	while (no > 0)
	{
		int rem = no % 10;
		no = no / 10;

		int powerOfTwo = 1;
		for (int j = 0; j < i; j++)
		{
			powerOfTwo *= 2;
		}
		decimal += rem * powerOfTwo;
		i++;
	}

	return decimal;
}

int main()
{
	int bin;
	cin >> bin;

	int decimal = BinaryToDecimal(bin);
	cout << decimal << endl;
  
  return 0;
  
}
