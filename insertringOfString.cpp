//This program is about inserting a string in an array

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int pos,siz,i,j,length;

    cout<<"Enter array size :"; //which represents the number of string
    cin>>siz;

    cout<<"Enter string length:";
    cin>>length;  //which represents the number of char in an array

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

//insertion part

    cout<<"Now if u wanted to insert a word then\n";
    cout<<"Enter a position number:";
    cin>>pos;

    char value[length];
    cout<<"Enter a new value:";
    cin>>value;

    for (j=siz-1; j>=pos; j--)
    {

        strcpy(demo[j+1],demo[j]);

    }
    cout<<":After adding a new value:\n";
    strcpy(demo[pos],value);
    siz=siz+1;
    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    return 0;
}
