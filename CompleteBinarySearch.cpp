//Binary search with Array
//MsM Robin
//29-01-20
#include<iostream>
using namespace std;

int main(){

	int size,i;
	cout<<"How many numbers Do u want to enter :";
	cin>>size;

	int search[size];

	for(i=0; i<size; i++){
		cout<<"Enter a number:";
		cin>>search[i];
	}

    int k,ptr,temp;
    int sorted[size];
    for(i=0; i<size; i++){

        sorted[i]=search[i];
        //cout<<"Sorted = "<<sorted[i]<<endl;
	}

    for(k=1; k<size; k++)
         {
           for(ptr=0; ptr<size-k; ptr++ )

               {
                   if (sorted[ptr]>sorted[ptr+1])

                       {
                           temp=sorted[ptr];
                           sorted[ptr]=sorted[ptr+1];
                           sorted[ptr+1]=temp;

                       }
               }


         }
    int count=0;
	for(i=0; i<size; i++){

            if(sorted[i]==search[i]){
                count++;
            }


        //cout<<"after sort"<<endl;
        //cout<<"Sorted = "<<sorted[i]<<endl;
	}
	if(count==size) cout<<"Array sorted as ascending order"<<endl;
	else cout<<"Array not sorted as ascending order"<<endl;
	/*int item,beg,end,mid;
	cout<<"Enter a search item:";
	cin>>item;

	beg=0;
    end=size;
    mid=(beg+end)/2;

	while (beg<=end && search[mid]!=item){
		if(item<search[mid]){
			end=mid-1;
		}
		else beg=mid+1;

		mid=(beg+end)/2;
	}

	if(item==search[mid]){
		cout<<"Search item found at position "<<mid+1<<" !!"<<endl;
	}
	else cout<<"Searh item was not founded !!"<<endl;*/

	return 0;
}
