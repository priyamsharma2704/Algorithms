#include<iostream>
using namespace std;


void binarySearch(int list [], int size, int val)
{
	bool found = false;
	int first = 0;
	int end = size-1;
	int mid= 0;
	
	while(!found && first != end)
	{
		mid = ((first+end)/2);
		if(val == list[mid])
		{
			cout<<"Item found at "<< mid << "th position\n";
			found = true;
		}
		else if(val > list[mid])
		{
			first = mid+1;
		}
		else
			end = mid-1;		
	}
	if(found == false)
		{
			cout<<"Element not found\n";
			
		}
	
}
void sort(int list[],int size)
{
	int min = 0;
	int temp=0;
	int val=0;
	for(int i=0; i< size-1; i++)
	{
		min = i;
		for(int j=i+1; j< size; j++)
		{
			if(list[min]>list[j])
				min = j;
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;

	}
	cout<<"\nSorted List is : ";
	for(int i=0; i < size; i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<"\nEnter the element to be searched = ";
	cin>>val;
	binarySearch(list,size,val);
}
void main()
{
	int list[5];
	
	int size = sizeof(list)/sizeof(list[0]);
	cout<<"Enter the elements";
	for(int i=0;i<size;i++)
	{
		cin>>list[i];
	}
	
	sort(list,size);
	
}
