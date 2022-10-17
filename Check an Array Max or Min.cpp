#include <iostream>
#include <climits>
#include <conio.h>
//Check an Array Max or Min
using namespace std;
int maxormin(int n)
{
	int arr[n],i;
	cout<<"Enter The Inputs:";
	
	for(i=0;i<n;i++){
		cin>>arr[i];									//Intialize The Array
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(i=0;i<n;i++){									
		maxNo=max(maxNo,arr[i]);								//Checking Max Or Min
		minNo=min(minNo,arr[i]);
	}
	cout<<"The Maximum No In The Array Is "<<maxNo<<" & The Minimum No In The Array is "<<minNo;
	return 0;
}
int main()
{
	int n;
	cout<<"Enter The Size of The Array:";
	cin>>n;
	maxormin(n);										//Call The Function
	getch();
}
