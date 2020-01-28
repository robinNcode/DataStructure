//Babble short
//20/01/2020
//Robin
#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int i,n,k, ptr;
    cout<< "enter size :";
    cin>>n;
    string data[n],temp[n];
    cout<< "enter array: " <<endl;

     for(i=0;i<n;i++)
         {
             cin>>data[i];
         }
     for(k=1;k<n;k++)
         {
           for(ptr=0; ptr<n-k; ptr++)

               {
                   if (data[ptr]>data[ptr+1])
                       
                       {
                          strcpy(temp[n],data[ptr]) ;
                           strcpy(data[ptr],data[ptr+1]);
                           strcpy(data[ptr+1],temp[n]);
                       }
               }


         }
         cout<< "Array after bubble short:"<<endl;
         for(i=0;i<n;i++)
         {
             cout<<data[i]<< "\t" ;
        }
return 0;
}
