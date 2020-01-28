#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int pos,siz,i,j,length;

    cout<<"Enter array size :";//which represents the number of string
    cin>>siz;

    cout<<"Enter string length:";
    cin>>length;

    char demo[siz][length];
    cout<<"Plz input the all value:\n";
    for (i=0; i<siz; i++)
    {
        cin>>demo[i];
    }
    cout<<"Your inputs are:\n";

    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    cout<<"Now if u wanted to delete a value then\n";
    cout<<"Enter a position number:";
    cin>>pos;

    //int n=siz;
    char value[length];


    for (j=pos; j<=siz-1; j++)
    {

        strcpy(demo[j],demo[j+1]);

    }
    cout<<":After adding a new value:\n";

    siz=siz-1;
    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }


    return 0;
}

