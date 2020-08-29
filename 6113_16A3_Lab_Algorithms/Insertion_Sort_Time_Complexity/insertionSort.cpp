/*
  *MD Shahin Mia Robin
  *CSE1901016113
  *Date : 29-08-20
  *Insertion Sort Time Complexity
  */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define clockPerSec 1000
using namespace std;
long numbers[400000];

// Function to sort an array using insertion sort
void insertionSort(long arr[], long n){
    //arr[400000],n=400000
    long i, key, j;

    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
        //main function starts here ...............
int main(int argc, char ** argv){

    cout<<"\t\t ++++ Insertion Sort Time Complexity Assignment ++++\n";
    cout<<"\t\t **** MD Shahin Mia Robin ****\n ";
    long amount,i,j,save;
    double finish;
    clock_t start;

    FILE *inputFile, *outputFile; //File operation starts here

    inputFile = fopen("../inputData.txt","r");
    outputFile = fopen("outputInsertionSort.txt","w");
    fscanf(inputFile,"%d",&amount);

    cout<<"\n\t<<< Reading data from File ..... "<<endl;
    for (i=0; i<amount; i++){
        fscanf(inputFile,"%d",&numbers[i]);
    }
    cout<<"\t<<< Data reading complete !!!\n";
    cout<<"\t<<< Insertion Sort process started,Please Wait...\n";

    start = clock(); //time initialization
    insertionSort(numbers,amount); //Insertion Sort function calling here..
    finish = ((double)start)/clockPerSec;

    cout<<"\t<<< Sorting Complete ...!!!\n\n";
    cout<<"\t<<< Number of Data : "<<amount<<" Time needed for sorting :  "<<finish<<" sec\n";

    cout<<"\n\n\t<<< This informations are printed in file named 'outputinsertionSort.txt' \n"<<endl;
	fprintf(outputFile,"Data = %d , Time needed = %lf sec\n",amount,finish);
	fprintf(outputFile,"\n\n\t<<< Array after Insertion Sort :\n");

    for(long i=0; i<amount; i++){
        fprintf(outputFile,"%d\n",numbers[i]);
    }
	return 0;
}
