#include<iostream>
#include<vector>
//#include<bits/stdc++>
using namespace std;




int main()
{
	int arr1[] = { 1,3,3,7 };
	int arr2[] = { 2,3,3,8 ,10};

	//union of two arrays
	vector<int>ans;
	for (auto x : arr1)
		ans.push_back(x);
	for (auto x : arr2)
		ans.push_back(x);
	cout << "union of two arrays is as below ---" << endl;
	for (auto x : ans)
		cout << x << " ";
	cout << endl << "-------------------------" << endl;



	//intersection of two arrays i.e add only repeat element
	vector<int>ans2;
	for (int i=0;i<4;i++)
	{
		//int tmp = x;
		for (int j=0;j<5;j++)
		{
			
			if (arr1[i]==arr2[j])
			{
				arr2[j] = -1;
				ans2.push_back(arr1[i]);
			}
		}
	}

	cout << "intersection of 2 arrays is as below ---" << endl;
	for (auto x : ans2)
		cout << x << " ";
	cout << endl << "-------------------------" << endl;


}
