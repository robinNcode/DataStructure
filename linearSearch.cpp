#include<iostream>

using namespace std;
int main()
{
    int siz,i;

    cout<<"Enter array size :";
    cin>>siz;

    int demo[siz];
    cout<<"Enter array Values :";
    for(i=0; i<siz; i++){

    cin>>demo[i];
    }
    /*for(i=0; i<siz; i++){

    cout<<demo[i]<<endl;
    }*/
    int value,test=0,vul=0;
    cout<<"Enter array Values for search :";
    cin>>value;
    for(i=0; i<siz; i++){
        if(value==demo[i]){

        test++;
        }
        //else vul++;
    }
    /*cout<<"Search item found "<<test<<" times.."<<endl;

    if(vul==vul){
    cout<<"Search item not found .."<<endl;
    }*/

    return 0;
}
