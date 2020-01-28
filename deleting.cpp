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

    cout<<"Now if u wanted to delete a value then\n";
    cout<<"Enter a position number:";  //which value u wanted to delete
    cin>>pos;
    for (j=pos; j<=siz-1; j++)
    {

        demo[j]=demo[j+1];

    }
    cout<<":After deleting a value:\n";
    siz=siz-1;
    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    return 0;
}
