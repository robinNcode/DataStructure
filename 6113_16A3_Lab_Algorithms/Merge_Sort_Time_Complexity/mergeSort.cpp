/*
  *MD Shahin Mia Robin
  *CSE1901016113
  *Date : 29-08-20
  *Merge Sort Time Complexity
  */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define clockPerSec 1000
using namespace std;
long numbers[400000];

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(long arr[], long l, long m, long r){
    long i, j, k;
    long n1 = m - l + 1;
    long n2 = r - m;

    /* create temp arrays */
    long L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
// Merge Sort Algorithm starts here ......
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(long arr[], long l, long r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
        //main function starts here ...............
int main(int argc, char ** argv){

    cout<<"\t\t ++++ Merge Sort Time Complexity Assignment ++++\n";
    cout<<"\t\t **** MD Shahin Mia Robin ****\n ";
    long amount,i,j,save;
    double finish;
    clock_t start;

    FILE *inputFile, *outputFile; //File operation starts here

    inputFile = fopen("../inputData.txt","r");
    outputFile = fopen("outputMergeSort.txt","w");
    fscanf(inputFile,"%d",&amount);

    cout<<"\n\t<<< Reading data from File ..... "<<endl;
    for (i=0; i<amount; i++){
        fscanf(inputFile,"%d",&numbers[i]);
    }
    cout<<"\t<<< Data reading complete !!!\n";
    cout<<"\t<<< Merge Sort process started,Please Wait...\n";

    start = clock(); //time initialization
    //Merge Sort function calling here..
    mergeSort(numbers,0,amount-1);
    finish = ((double)start)/clockPerSec;

    cout<<"\t<<< Sorting Complete ...!!!\n\n";
    cout<<"\t<<< Number of Data : "<<amount<<" ,Time needed for sorting :  "<<finish<<" sec\n";

    cout<<"\n\n\t<<< This informations are printed in file named 'outputMergeSort.txt' \n"<<endl;
	fprintf(outputFile,"Data = %d , Time needed = %lf sec\n",amount,finish);
	fprintf(outputFile,"\n\n\t<<< Array after Merge Sort :\n");

    for(long i=0; i<amount; i++){
        fprintf(outputFile,"%d\n",numbers[i]);
    }
	return 0;
}
