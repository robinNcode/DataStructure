//23-01-2020
//MsM Robin
//CSE1901016113
//Sonargaon University

#include<iostream>
#include<string.h>
#include <sstream>
using namespace std;

int main(){
	
	int size,i,temp,ptr;
	
	cout<<"How many student's ID do u want to enter? ::";
	cin>>size;
	
	string id[size];
	string newID[size];
	int intID[size];
	
	for(i=0; i<size; i++){
		cout<<"Enter "<<i+1<<" number student's id: ";
		cin>>id[i];
	}
	
		//<<This part is about cutting string for convert into integer>>
	
	for(i=0; i<size; i++){
		
		newID[i]=id[i].substr(3,12);
		
		stringstream cnvrt(newID[i]);
		
		cnvrt>>intID[i];
		
	}
	
		//<<integer value sorting Part>>
	
	cout<< "\tAfter  sorting all those id:\t\n"<<endl;
   
        for(i=1;i<size;i++)
         	{
           for(ptr=0;ptr<size-i;ptr++ )

               {
                   if (intID[ptr]>intID[ptr+1])

                       {
                           temp=intID[ptr];
                           intID[ptr]=intID[ptr+1];
                           intID[ptr+1]=temp;

                       }
               }


         }
         
  		//<String Merging part>
  
        for(i=0; i<size; i++){
        	
        	stringstream merge;
			string str[size];
	
			merge<<"CSE";
			merge<<intID[i];
			str[i]=merge.str();
	
			cout<<str[i]<<endl;
		}
		
	return 0;
}

