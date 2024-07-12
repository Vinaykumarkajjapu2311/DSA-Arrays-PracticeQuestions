#include<bits/stdc++.h>
using namespace std;
void checksortedOrNot(vector<int>&arr,int n)
{
	int flag=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])
		{
			
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"The array is not Sorted"<<endl;
	}
	else{
		cout<<"The array is sorted"<<endl;
	}
	
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
	
	checksortedOrNot(arr,n);
}
