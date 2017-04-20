#include<iostream>
using namespace std;
void merge(int list[], int p, int q, int r)
{
	//int n1=0;
	int n1 = q-p+1;
	int n2 = r-q;

	int l1[n1+1];
	int l2[n2+1];

	for(int i = 1;i < n1; i++)
	{
		l1[i] = list[p+i-1];
	}

	for(int j = 1;j < n1; j++)
	{
		l2[j] = list[q+j];
	}

	int i=1;
	int j=1;

	for(int k = 0; k <= r; k++)
	{
		if(l1[i] > l2[j])
		{
			list[k] = l2[j];
			j++;
		}
		else
		{
			list[k] = l1[i];
			i++;
		}
	}
}
void mergeSort(int list[], int p, int size)
{
	p = 0;
	int r = size-1;
	if(p < r)
	{
		int q = (p + r)/2;		
		mergeSort(list,p,q);
		mergeSort(list,q+1,size);
		merge(list,p,q,r);
		
	}
}
void main()
{
	int list[10];
	int p=0;
	int size = sizeof(list)/sizeof(list[0]);
	//cout<<"size = "<<size;
	cout<<"Enter the elements :";
	for(int i = 0; i < size; i++)
	{
		cin>>list[i];
	}
	for(int i = 0; i < size; i++)
	{
		cout<<list[i]<<" ";
	}
	mergeSort(list,p,size);
	cout<<"Sorted array : ";
	for(int i = 0; i < size; i++)
	{
		cout<<list[i]<<" ";
	}
}
