#include<bits/stdc++.h>
using namespace std;
void findSecondLargest(vector<int>&arr,int n)
{
	int largest=arr[0],slargest=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>slargest && arr[i]<largest)
		{
			slargest=arr[i];
		}
	}
	
	cout<<"The second largest element is "<<slargest <<endl;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	findSecondLargest(arr,n);
}
