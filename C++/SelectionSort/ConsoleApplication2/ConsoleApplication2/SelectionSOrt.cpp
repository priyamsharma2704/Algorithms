#include<iostream>

using namespace std;
void pprint(int list[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<< " ";
		//list[i] = num;
	}cout<<"\n";
}
void selectionSort(int list[],int size)
{
	int min=0;
	int temp =0;
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<< " ";
		//list[i] = num;
	}cout<<"\n";
	for(int i=0;i < size-1; i++)
	{
		min = i;
		for(int j=i+1; j< size; j++)
		{
			if(list[min]> list[j])
			{
				min = j;
			}
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
		pprint(list,size);
	}
	cout<< "\n";
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<< " ";
		//list[i] = num;
	}
}
void main(){
	int list[5];
	int size = sizeof(list)/sizeof(list[0]);
	int num=0;

	cout<<"Enter the list elements:";

	for(int i=0;i<size;i++)
	{
		cin>>list[i];
		//list[i] = num;
	}

	selectionSort(list,size);
}
