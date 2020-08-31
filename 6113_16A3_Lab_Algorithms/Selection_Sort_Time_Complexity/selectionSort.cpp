/*
  *MD Shahin Mia Robin
  *CSE1901016113
  *Date : 29-08-20
  *Selection sort Time Complexity
  */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define clockPerSec 1000
using namespace std;
long numbers[400000];

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
            loc = i; //getting index for minimum value
    }
    return loc;
}
        //Selection Sort Algorithm Starts here ....
void selectionSort(long arr[],long len){
    long ptr,loc;
    for(ptr=0; ptr<len; ptr++){
        loc = minLocation(arr,len,ptr);
        if(loc != ptr){
            swap(&arr[loc],&arr[ptr]);
        }
    }
}
        //main function starts here ...............
int main(int argc, char ** argv){

    cout<<"\t\t\t\t ++++ Selection sort Time Complexity Assignment ++++\n";
    cout<<"\t\t\t\t **** MD Shahin Mia Robin ****\n ";
    long amount,i,j,save;
    double finish;
    clock_t start;

    FILE *inputFile, *outputFile; //File operation starts here

    inputFile = fopen("../inputData.txt","r");
    outputFile = fopen("outputSelectionSort.txt","w");
    fscanf(inputFile,"%d",&amount);

    cout<<"\n\t<<< Reading data from File ..... "<<endl;
    for (i=0; i<amount; i++){
        fscanf(inputFile,"%d",&numbers[i]);
    }
    cout<<"\t<<< Data reading complete !!!\n";
    cout<<"\t<<< Selection sort process started,Please Wait...\n";

    start = clock(); //time initialization
            //Selection sort function calling here..
    selectionSort(numbers,amount);
    finish = ((double)start)/clockPerSec;

    cout<<"\t<<< Sorting Complete ...!!!\n\n";
    cout<<"\t<<< Number of Data : "<<amount<<" Time needed for sorting :  "<<finish<<" sec\n";

    cout<<"\n\n\t<<< This informations are printed in file named 'outputSelectionSort.txt' \n"<<endl;
	fprintf(outputFile,"Data = %d , Time needed = %lf sec\n",amount,finish);
	fprintf(outputFile,"\n\n\t<<< Array after Selection sort :\n");

    for(long i=0; i<=amount; i++){
        fprintf(outputFile,"%d\n",numbers[i]);
    }
	return 0;
}

