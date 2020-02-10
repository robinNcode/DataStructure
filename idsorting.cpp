//23-01-2020
//MsM Robin
//CSE1901016113
//Sonargaon University

#include<iostream>
#include<string.h>
#include <sstream>
using namespace std;

int main()
{

    int size,i,temp,ptr;
    int digit,cha;

    cout<<"How many student's ID do u want to enter? ::";
    cin>>size;
    cout<<"\tHow many Character do u have in your ID? ::";
    cin>>cha;
    cout<<"\tHow many Digit do u have in your ID? ::";
    cin>>digit;

    string id[size],str;
    string newID[size];
    int intID[size];

    for(i=0; i<size; i++)
    {
        cout<<i+1<<"..Enter student's id :";
        cin>>id[i];
    }

//<<This part is about cutting string for convert into integer>>

    for(i=0; i<size; i++)
    {

        newID[i]=id[i].substr(cha,digit);
        str=id[i].substr(0,cha);
        stringstream cnvrt(newID[i]);

        cnvrt>>intID[i];

    }
//<<integer value sorting Part>>

    cout<< "\tAfter  sorting all those id:\t\n"<<endl;
    for(i=1; i<size; i++)
    {
        for(ptr=0; ptr<size-i; ptr++ )
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
    for(i=0; i<size; i++)
    {
        cout<<str<<intID[i]<<endl;
    }
    return 0;
}

