#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int pos,siz,i,j,length;

    cout<<"\tEnter array size :";//which represents the number of string
    cin>>siz;

    string demo[siz];
    cout<<"Plz input the all word:\n";
    for (i=0; i<siz; i++)
    {
    	cout<<"PLZ input "<<i+1<<" no. word :";
        cin>>demo[i];
    }
    cout<<"\tYour inputs are:\n";

    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    cout<<"Now if u wanted to delete a word then\n";
    cout<<"Enter a position number:";
    cin>>pos;

    //int n=siz;
    //char value[length];
    for (j=pos; j<=siz-1; j++)
    {
        demo[j]=demo[j+1];
    }
    cout<<"\t:After deleting a new Word:\n";
    siz=siz-1;
    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }


    return 0;
}

