#include<iostream>
using namespace std;
void merge(int list1[], int size1,int list2[], int size2, int list3[])
{
	for(int i=0;i<size1;i++)
	{
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		list3[size1 + j] = list2[j];
	}
	for (int k = 0; k < (size1 + size2-1); k++)
	{
		for(int m=k+1;m<(size1+size2);m++)
		{ 
		  if(list3[k]>list3[m])
		  {
			  int temp;
			  temp = list3[k];
			  list3[k] = list3[m];
			  list3[m] = temp;
		  }
		  else { continue; }
		}
	}
	for(int a=0;a<(size1+size2);a++)
	{
		cout << list3[a] << " ";
	}
}
int main()
{
	int size1;int size2;
	cout << "请输入数组一中的元素个数"; cin >> size1;
	cout << "请输入数组二中的元素个数"; cin >> size2;
	cout << "请输入数组一中的元素" << endl;
	int *list1=new int[size1];
	for(int n=0;n<size1;n++)
	{
		cin >> list1[n];
	}
	cout << "请输入数组二中的元素" << endl;
	int *list2=new int[size2];
	for (int n = 0; n < size2; n++)
	{
		cin >> list2[n];
	}
	int *list3=new int[size1+size2];
	merge(list1,size1,list2,size2,list3);
	return 0;
}