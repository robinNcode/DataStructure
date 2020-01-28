#include<iostream>
#include<string.h>
#include <sstream>
#include <cstdlib>
using namespace std;

int main(){
	
	int size,i,temp,ptr;
	
	cout<<"How many student's ID do u want to enter?";
	cin>>size;
	
	string id[size];
	string newID[size];
	int intID[size];
	for(i=0; i<size; i++){
		cout<<"Enter "<<i+1<<" number student's id: ";
		cin>>id[i];
	}
	
	for(i=0; i<size; i++){
		
		newID[i]=id[i].substr(3,12);
		//cout<<newID[i]<<endl;
		
		stringstream cnvrt(newID[i]);
		
		cnvrt>>intID[i];
		
	}
	//int sum[size];
	BubbleSort(intID, size);
	cout<< "Array after bubble short:"<<endl;
         for(i=0;i<size;i++)
         {
             cout<<intID[i]<<endl;
        }
      cout<<"\tafter merge\n";  
        for(i=0; i<size; i++){
        	stringstream merge;
	
	string str[size];
	//int count;
	
	merge<<"CSE";
	merge<<intID[i];
	str[i]=merge.str();
	
	cout<<str[i]<<endl;
		}
		
		
	return 0;
}


void BubbleSort (int data[], int n)
{
	int k,ptr,temp;
	for(k=1;k<n;k++)
         {
           for(ptr=0;ptr<n-k;ptr++ )

               {
                   if (data[ptr]>data[ptr+1])

                       {
                           temp=data[ptr];
                           data[ptr]=data[ptr+1];
                           data[ptr+1]=temp;

                       }
               }


         }
}	
