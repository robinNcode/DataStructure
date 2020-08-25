/*Mehedi hasan Rasel
CSE-1901016054
*/

#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {

     int i,j,n,k,length;
     cout<<"How many name do u want to enter?:";
     cin>>n;
     cout<<"Enter the name length:";
     cin>>length;
       char studentName[n][length],temp[10];
     for(i=0;i<n;i++)
     {
         cout<<"enter the Student Name"<<i+1<<":";
         cin>>studentName[i];
     }

    string value;
	int beg,end,mid;
	cout<<"\t\tEnter value for Binary Search:";
	cin>>value;

	beg=0;
    end=n;
    mid=(beg+end)/2;

	while (beg<=end && studentName[mid]!=value){
		if(value<studentName[mid]){
			end=mid-1;
		}
		else beg=mid+1;

		mid=(beg+end)/2;
	}

	if(value==studentName[mid]){
		cout<<"Search value found at position "<<mid+1<<endl;
	}
	else cout<<"Search value was not founded !!"<<endl;

    cout<<"\t\tTo insert a data"<<endl;
    cout<<"\t\tEnter a position:";
    cin>>k;
   char data[length];

    cout<<"\t\tEnter a new data:";
    cin>>data;

    for (j=n-1; j>=k; j--)
    {
        strcpy(studentName[j+1],studentName[j]);
    }
    cout<<"\t:After adding a new word:\n";
    strcpy(studentName[k],data);
    n=n+1;
    for (i=0; i<n; i++)
    {
        cout<<studentName[i]<<endl;
    }
    cout<<"\t\tTo delete a data"<<endl;
    cout<<"\t\tEnter a position number:";
    cin>>k;
    for (j=k; j<=n-1; j++)
    {
        strcpy(studentName[j],studentName[j+1]);
    }
    cout<<"\t:After deleting a new Word:\n";

    n=n-1;
    for (i=0; i<n; i++)
    {
        cout<<studentName[i]<<endl;
    }

    return 0;
 }
