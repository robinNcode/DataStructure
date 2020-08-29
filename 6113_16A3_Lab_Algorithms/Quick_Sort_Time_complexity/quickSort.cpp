/*
  *MD Shahin Mia Robin
  *CSE1901016113
  *16A3
  *Quick Sort Time Complexity
  */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define clockPerSec 1000
using namespace std;
long numbers[400000];

// Swap two elements - Utility function
void swap(long* a, long* b) {
    long t = *a;
    *a = *b;
    *b = t;
}
// partition the array using last element as pivot
long partition (long arr[], long low, long high) {
    long pivot = arr[high];    // pivot
    long i = (low - 1);

    for (long j = low; j <= high- 1; j++) {
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot) {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
//quicksort algorithm
void quickSort(long arr[], long low, long high) {
    if (low < high) {
        //partition the array
        long pivot = partition(arr, low, high);
        //sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
        //main function starts here ...............
int main(int argc, char ** argv){

    cout<<"\t\t ++++ Quick Sort Time Complexity Assignment ++++\n";
    cout<<"\t\t **** MD Shahin Mia Robin ****\n ";
    long amount,i,j,save;
    double finish;
    clock_t start;

    FILE *inputFile, *outputFile; //File operation starts here

    inputFile = fopen("../inputData.txt","r");
    outputFile = fopen("outputData.txt","w");
    fscanf(inputFile,"%d",&amount);

    cout<<"\n\t<<< Reading data from File ..... "<<endl;
    for (i=0; i<amount; i++){
        fscanf(inputFile,"%d",&numbers[i]);
    }
    cout<<"\t<<< Data reading complete !!!\n";
    cout<<"\t<<< Quick Sort process started,Please Wait...\n";

    start = clock(); //time initialization
    //Quick Sort function calling here..
    quickSort(numbers, 0, amount-1);
    finish = ((double)start)/clockPerSec;

    cout<<"\t<<< Sorting Complete ...!!!\n\n";
    cout<<"\t<<< Number of Data : "<<amount<<" ,Time needed for sorting :  "<<finish<<" sec\n";

    cout<<"\n\n\t<<< This informations are printed in file named 'outputData.txt' \n"<<endl;
	fprintf(outputFile,"Data = %d , Time needed = %lf sec\n",amount,finish);
	fprintf(outputFile,"\n\n\t<<< Sorted Data :\n");

    for(long i=0; i<amount; i++){
        fprintf(outputFile,"%d\n",numbers[i]);
    }
	return 0;
}
