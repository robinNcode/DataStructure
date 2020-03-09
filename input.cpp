#include<iostream>
using namespace std;

int main(){

 int test,i;

 cout<<"Enter any number :";
 cin>>test;
 int array[101];
 for (i=test; i<=test+100; i++){
    array[i]=i+1;
    cout<<"Enter a value :"<<array[i];
    cout<<array[i]<<endl;
 }


return 0;
}

