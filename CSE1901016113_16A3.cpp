/*
MD Shahin Mia Robin
16A3
CSE1901016113
*/
#include<iostream>
#include <stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

//Function For menu
void menu(){
    cout<<" \t\t\t================= Menu =================\n";
    cout<<" \t\t\t   0. Exit The Program\n";
    cout<<" \t\t\t   1. To Insert an Element\n";
    cout<<" \t\t\t   2. To Delete an Element\n";
    cout<<" \t\t\t   3. To Search an Element\n";
    cout<<" \t\t\t   4. To Sort as Lexicographical\n";
    cout<<" \t\t\t   5. To Display\n";
    cout<<" \t\t\t================= +++++ =================\n";
}
string* student_insert(string demo[], int siz){

    int pos;
    cout<<"Now if u want to Insert a element then\n";
    cout<<"Enter a position number:";  //which value u element to Insert
    cin>>pos;
    string item;
    cout<<"Enter a new Element :";
    cin>>item;
     for (int i=siz-1; i>=pos; i--){
        demo[i+1] = demo[i];
     }
     demo[pos] = item;
    return demo;
}
void student_delete(string demo[], int siz){
    int pos;
    cout<<"Now if u wanted to delete a value then\n";
    cout<<"Enter a position number:";  //which value u wanted to delete
    cin>>pos;
    for (int j=pos; j<=siz-1; j++){
        demo[j]=demo[j+1];
    }
    cout<<":After deleting a value:\n";
    siz=siz-1;
    //return demo[];
    for (int i=0; i<siz; i++) cout<<demo[i]<<endl;
}
void  student_sort(string demo[], int siz){
    int i,k,ptr;
    string temp;
    //for(int i=0; i<siz; i++) cout<<demo[i]<<endl;
     for(k=1;k<siz;k++){
           for(ptr=0;ptr<siz-k;ptr++ ){
                   if (demo[ptr]>demo[ptr+1]){
                           temp=demo[ptr];
                           demo[ptr]=demo[ptr+1];
                           demo[ptr+1]=temp;
                       }
               }
         }
         cout<< "Array after bubble short:"<<endl;
         for(i=0;i<siz;i++) cout<<demo[i]<<endl;
}
void student_search(string demo[], int siz){
    sort(demo,demo+siz);
    cout<<"\t <<< Array sorted as ascending order >>>"<<endl;
    for(int i=0; i<siz; i++) cout<<"\t"<<i<<". "<<demo[i]<<endl;
    int beg,end,mid;
    string item;
    cout<<"Enter a search item:";
    cin>>item;
    //<<<Initialization of mid>>>
    beg=0;
    end=siz;
    mid=(beg+end)/2;

    while (beg<=end && demo[mid] != item){
    	if(item<demo[mid]){
    		end=mid-1;
    	}
    	else beg=mid+1;
        mid=(beg+end)/2;
        }

    if(item==demo[mid]){
    	cout<<"Search item found at position "<<mid<<" !!"<<endl;
    }
    else cout<<"Searh item was not founded !!"<<endl;
}
            //Main function Starts here .........................

int main(int argc, char ** argv){

    cout<<" \t\t\t****\t\tData Structure Lab Final\t\t****\t\t\t " <<endl<<endl<<endl;
    int siz;
    // For initialize an Array....
    cout<<"How many elements do you want to Initialize? =>:";
    cin>>siz;
    string student[siz];

    for(int i=0; i<siz; i++){
        cout<<"Element "<<i<<":";
        cin>>student[i];
    }
    cout<<"\n\t\tHere is your Initial Array\n";
    for(int i=0; i<siz; i++) cout<<"\t\t"<<i<<". "<<student[i]<<endl;
    cout<<endl<<endl;

    menu(); // Calling menu function...

        int choice;
        cout <<"Now Enter your choice :";
        cin>>choice;

        switch(choice){
            case 0:
                exit(0);
                break;
            case 1:
                {
                        string *new_arr = student_insert(student,siz); // Insert Function is calling here
                        siz = siz + 1;
                        cout<<"\t::After Inserting a value::\n";
                        for (int i=0; i<siz; i++) cout<<"\t"<<new_arr[i]<<endl;
                }
                break;
            case 2:
                student_delete(student,siz); // Delete function is calling here
                break;
            case 3:
                student_search(student,siz); //Binary search function is calling here
                break;
            case 4:
                student_sort(student,siz); //Bubble sort function is calling here
                break;
            case 5:
                cout<<"Here is the array all elements";
                for(int i=0; i<siz; i++) cout<<student[i]<<endl;
                break;
            default:
                cout<<"Wrong choice please try again !!!";
        }

    return 0;
}
