#include<iostream>

using namespace std;
int main()
{
    int siz,i;

    cout<<"Enter array size :";
    cin>>siz;

    int demo[siz];

    for(i=0; i<siz; i++){
    cout<<i+1<<". Enter Value :";
    cin>>demo[i];
    }
    int value,test=0,vul=0;
    cout<<"Enter a Value for search :";
    cin>>value;

    for(i=0; i<siz; i++){
        if(value==demo[i]){
            test=1;
            break;
        }
        //else vul++;
    }
    if(test==1){
    cout<<"Search item found"<<endl;
    }
    else cout<<"Search item was not founded"<<endl;

    return 0;
}
