#include<iostream>
#include<stdlib.h>
using namespace std;


void main()
{
	int choice;
	cout<<"\n\tDATA STRUCTURE BASIC OPERATIONS\n";
	cout<<"\n\t\t[1] Insertion";
	cout<<"\n\t\t[2] Deletion";
	cout<<"\n\t\t[3] Search";
	cout<<"\n\t\t[4] Update";
	cout<<"\n\n\t\t Enter your choice: ";
	cin>>choice;

	if(choice=1)
	{insert();}
	


system("pause");
}

void insert()

{
	system("cls");
	int arr[100],a,loc,val,count;

	cout<<"\n[1] INSERTION":
	cout<<"\nInput 5 numbers: \n";
	for( a=0;a<5;a++)
	{
		cin>>arr[a];
	}
	do
	{
	cout<<"Input the location where you want to insert a number: ";
	cin>>loc;
	cout<<"What value you want to insert: ";
	cin>>val;
	count=a;
	

	for(a=count;a>=loc;a--)
		arr[a+1]=arr[a];
		arr[loc]=val;
		
		
		
	for( a=0;a<=count;a++)
		{
			cout<<arr[a] <<endl;
		}
	}
	while(a<10);
	
	
	system("pause");

	}