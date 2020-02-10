//Complete Binary search for Integer Data type
//MsM Robin
//10-02-20
#include<iostream>
using namespace std;
int main()
{
    int size,i;
    int ascount1=0,ascount2=0;
    cout<<"How many numbers Do u want to enter :";
    cin>>size;

    int search[size];

    for(i=0; i<size; i++)
    {
        cout<<"Enter a number:";
        cin>>search[i];
    }
  //Checking the array is sorted or not
    for(i=0; i<size-1; i++)
    {
       if(search[i]<search[i+1])
        {
            ascount1++;
        }
        else if(search[i]>search[i+1]){
            ascount2++;
        }
  }
      if(ascount1 != size-1 && ascount2 != size-1){
            cout<<" <<Array is not sorted >>";
      }
      //<<< Ascending Order Searching >>>
      else  if (ascount1 == size-1 ){

            cout<<"\t <<< Array sorted as ascending order >>>"<<endl;
    int item,beg,end,mid;
    cout<<"Enter a search item:";
    cin>>item;
    //<<<Initialization of mid>>>
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
    else cout<<"Searh item was not founded !!"<<endl;
    }

    //<<<Descending Order Searching>>>
       else if(ascount2==size-1){
            cout<<"\t <<< Array sorted as descending order >>>"<<endl;
            int item,beg,end,mid;
    cout<<"Enter a search item:";
    cin>>item;

    beg=0;
    end=size;
    mid=(beg+end)/2;

    while (beg<=end && search[mid]!=item){
    	if(item>search[mid]){
    		beg=mid+1;
    	}
    	else end=mid-1;
    	mid=(beg+end)/2;
        }

    if(item==search[mid]){
    	cout<<"Search item found at position "<<mid+1<<" !!"<<endl;
    }
    else cout<<"Searh item was not founded !!"<<endl;
    }
    return 0;
}
