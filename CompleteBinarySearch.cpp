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
		cout<<i+1<<".Enter a number :";
		cin>>search[i];
	}
    for(i=0; i<size; i++){
            if(search[i] > search[i+1]){
            cout<<"Array not sorted as ascending order"<<endl;
            cout<<"\t<< Please enter numbers again >>"<<endl;
		}
    }
    cout<<"\tArray sorted as ascending order"<<endl;

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
