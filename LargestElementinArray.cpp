#include<bits/stdc++.h>
using namespace std;
void findLargestElement(vector<int>&arr,int n)
{
	int largest=arr[0];
	for(int i=1;i<n;i++)
	{
		largest=max(largest,arr[i]);
	}
	cout<<"the largest element in the array of elements is "<<largest<<endl;
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
	
	findLargestElement(arr,n);
}
