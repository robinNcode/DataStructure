#include<iostream>
#include<stdio.h>
using namespace std;

//Swap two elements - Utility function
void swap(long* num1,long* num2){
    long temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//Min number location find out function ....
long minLocation(long arr[],long len,long lb){
    long i,loc;
    loc = lb;
    for(i=lb+1; i<=len; i++){
        if(arr[loc]>arr[i])
            loc = i;
    }
    return loc;
}

//Selection Sort Algorithm Starts here ....
void selectionSort(long arr[],long len){
    long ptr,loc;
    for(ptr=0; ptr<len; ptr++){
        loc = minLocation(arr,len,ptr);
        if(loc!=ptr){
            swap(&arr[loc],&arr[ptr]);
        }
    }
}
int main(int argc, char ** argv){

    long digit,i,j;
    cout<<"How elements do you enter  :";
    cin>>digit;
     long data[digit];

     for(i=0; i<digit; i++){
        cout<<"Enter element no "<<i+1<<". ";
        cin>>data[i];
     }
     selectionSort(data,digit);

     cout<<"After sort \n";
     for(i=0; i<digit; i++){
        cout<<i+1<<"."<<data[i]<<endl;
     }

	return 0;
}
