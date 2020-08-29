/*
  *MD Shahin Mia Robin
  *CSE1901016113
  *Date : 29-08-20
  *Bubble Sort Time Complexity
  */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define clockPerSec 1000
using namespace std;
long numbers[400000];

// Bubble Sort Algorithm starts here ......
void bubbleSort(long data[],long amount){
    long k,ptr,temp;

    for(k=1;k<amount;k++){
           for(ptr=0;ptr<amount-k;ptr++ ){
                   if (data[ptr]>data[ptr+1]){
                           temp=data[ptr];
                           data[ptr]=data[ptr+1];
                           data[ptr+1]=temp;
                       }
               }
         }
}
        //main function starts here ...............
int main(int argc, char ** argv){

    cout<<"\t\t ++++ Bubble Sort Time Complexity Assignment ++++\n";
    cout<<"\t\t **** MD Shahin Mia Robin ****\n ";
    long amount,i,j,save;
    double finish;
    clock_t start;

    FILE *inputFile, *outputFile; //File operation starts here

    inputFile = fopen("../inputData.txt","r");
    outputFile = fopen("outputBubbleSort.txt","w");
    fscanf(inputFile,"%d",&amount);

    cout<<"\n\t<<< Reading data from File ..... "<<endl;
    for (i=0; i<amount; i++){
        fscanf(inputFile,"%d",&numbers[i]);
    }
    cout<<"\t<<< Data reading complete !!!\n";
    cout<<"\t<<< Bubble Sort process started,Please Wait...\n";

    start = clock(); //time initialization
    //Bubble Sort function calling here..
    bubbleSort(numbers,amount);
    finish = ((double)start)/clockPerSec;

    cout<<"\t<<< Sorting Complete ...!!!\n\n";
    cout<<"\t<<< Number of Data : "<<amount<<" Time needed for sorting :  "<<finish<<" sec\n";

    cout<<"\n\n\t<<< This informations are printed in file named 'outputBubbleSort.txt' \n"<<endl;
	fprintf(outputFile,"Data = %d , Time needed = %lf sec\n",amount,finish);
	fprintf(outputFile,"\n\n\t<<< Array after Bubble sort :\n");

    for(long i=0; i<amount; i++){
        fprintf(outputFile,"%d\n",numbers[i]);
    }
	return 0;
}
