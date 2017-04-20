#include<iostream>
using namespace std;

void printList(int list[],int size)
{
	for(int i=0; i< size; i++)
	{
		cout<<list[i]<< " ";
	}
	cout<<"\n";
}
void insertionSort(int list[], int size)
{
	printList(list,size);
	int key=0;
	int temp=0;
	for(int i=1;i<size;i++)
	{
		key = list[i];
		while(i > 0 && key < list[i-1])
		{
			list[i] = list[i-1];
			i = i-1;
			cout<<"before swap: ";
			printList(list,size);
		}
		
		list[i] = key;
		cout<<"after swap:  ";
		printList(list,size);
		
	}

}
void main()
{
	int list[5];
	int size = sizeof(list)/sizeof(list[0]);

	cout<<"Enter the elements:";
	for(int i=0;i<size;i++)
	{
		cin>>list[i];
	}

	insertionSort(list,size);
		

}