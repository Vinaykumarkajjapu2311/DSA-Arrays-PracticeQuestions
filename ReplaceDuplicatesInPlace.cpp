#include<bits/stdc++.h>
using namespace std;
int replaceDuplicatesInPlace(vector<int>&arr,int n)
{
	int i=0,j=1;
	while(j<n)
	{
		if(arr[j]!=arr[i])
		{
			arr[i+1]=arr[j];
			i++;
		}
		j++;
	}
	return i+1;
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
	
	int noofUnique=replaceDuplicatesInPlace(arr,n);
	cout<<"The number of Unique Elements are"<<noofUnique<<endl;
}
