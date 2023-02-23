#include<iostream>
#include<string>
using namespace std;


int DecimalToBinary(int no)
{

	int binary = 0;
	int i = 0;
	while (no>0)
	{
		int rem  = no % 2;
		no = no / 2;

		int poweroften=1;
    
    /*  loop for getting the vlaue of 10 to the power */
		for (int j=0;j<i;j++)
		{
			poweroften *= 10;
		}

		binary += rem * poweroften;
		i++;
	}

	return binary;
}


int main()
{
  int no;
	cin >> no;
	int binary = DecimalToBinary(no);
	cout << binary << endl;
  return 0;
}
