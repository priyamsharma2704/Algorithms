#include<iostream>
using namespace std;

void mergeSort(int list[],int size)
{
	int temp = 0;

	for(int  i=0;i<size-1;i++)
	{
		for(int j = 0; j<size-1;j++)
		{
			if(list[j] > list[j+1])
			{
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	cout<< "sorted array is \n";
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<<" ";
	}
}
void print()
{
	cout<<"TEST";
}
void main()
{
	int list[5];
	int num=0;
	int n=sizeof(list)/sizeof(list[0]);
	cout<<n;
	cout<<"\nENter the list elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>num;
		list[i] = num;
	}
	mergeSort(list,n);
	
}


