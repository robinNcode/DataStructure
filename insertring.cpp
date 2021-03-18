#include<iostream>

using namespace std;

int main()
{
    int pos,siz,i,j ;

    cout<<"Enter array size :";
    cin>>siz;

    int demo[siz];
    cout<<"Plz input the all value:\n";

    for (i=0; i<siz; i++){
        cin>>demo[i];
    }

    cout<<"Your inputs are:\n";
    for (i=0; i<siz; i++){
        cout<<demo[i]<<endl;
    }
cout << "length" << sizeof(demo)/sizeof(demo[0]) << endl;

    cout<<"Now if u wanted to insert a value then\n";
    cout<<"Enter a position number:";
    cin>>pos;

    int value;
    cout<<"Enter a new value:";
    cin>>value;

    for (j=siz-1; j>=pos; j--){

        demo[j+1]=demo[j];
            cout << " idex: " << j << " j+1 = " << demo[j+1] << endl;

    }

    demo[pos]=value;
    cout << demo[pos];
    siz=siz+1;

    cout << "length" << sizeof(demo)/sizeof(demo[0]) << endl;

    cout<<":After adding a new value:\n";

    for (i=0; i<siz; i++)
    {
        cout<<demo[i]<<endl;
    }

    return 0;
}
