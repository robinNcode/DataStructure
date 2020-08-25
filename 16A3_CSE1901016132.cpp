/*Name: Ayesha Siddika
    Id: CSE-1901016132
*/
#include<iostream>
#include<string.h>

using namespace std;
int main()
 {

     int i,j,n,k,len;

     cout<<"Enter the size:";
     cin>>n;
     cout<<"\tEnter the string length:";
     cin>>len;
    char name[n][len],temp[10];
     for(i=0;i<n;i++)
     {
         cout<<"\tEnter the student name"<<i+1<<":";
         cin>>name[i];
     }
     //sorting part

     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(strcmp(name[j],name[j+1])>0)
             {
                 strcpy(temp,name[j]);
                 strcpy(name[j],name[j+1]);
                 strcpy(name[j+1],temp);
             }
         }
     }
     cout<<"After sorting the array : "<<endl;
     for(i=0;i<n;i++)
     {
         cout<<name[i]<<endl;
     }
    //insert part
    cout<<"If u wanted to insert a name"<<endl;
    cout<<"Enter a position:";
    cin>>k;
    char value[len];
    cout<<"Enter a new value:";
    cin>>value;

    for (j=n-1; j>=k; j--)
    {
        strcpy(name[j+1],name[j]);
    }
    cout<<"\t:After adding a new name:\n";
    strcpy(name[k],value);
    n=n+1;
    for (i=0; i<n; i++)
    {
        cout<<name[i]<<endl;
    }

    //Delete part
    cout<<"If u wanted to delete a name"<<endl;
    cout<<"Enter a position:";
    cin>>k;

    for (j=k; j<=n-1; j++)
    {
        strcpy(name[j],name[j+1]);
    }
    cout<<"\t:After deleting a  name:\n";
    n=n-1;
    for (i=0; i<n; i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
 }
