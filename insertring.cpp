#include<iostream>

using namespace std;

int main()
{
    int pos,siz,i,j ;

    cout<<"Enter array size :";
    cin>>siz;

    int demo[siz];
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

    cout<<"Now if u wanted to insert a value then\n";
    cout<<"Enter a position number:";
    cin>>pos;

    //int n=siz;
    int value;
    cout<<"Enter a new value:";
    cin>>value;

    for (j=siz-1; j>=pos; j--)
    {

        demo[j+1]=demo[j];

    }
    cout<<":After adding a new value:\n";
    demo[pos]=value;
    siz=siz+1;
    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    return 0;
}
