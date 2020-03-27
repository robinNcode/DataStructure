#include<bits/stdc++.h>
using namespace std;

int main(){
   int siz,i,pass,ptr;
   cout<<"Enter array size : ";
   cin>>siz;

   int arr[siz],temp;
    for (i=0; i<siz; i++){
        //cout<<"Enter array elements :=> ";
        arr[i] = (rand()%100)+1;
   }
   for (i=siz-1; i>=0; i--){
        arr[i+1]=arr[i];

   }
      arr[0]=0;
      cout<<"\t\t << Array before INSERTION Sort >>\n";
      for (i=0; i<=siz; i++){
            cout<<arr[i]<<endl;
   }

   for (int pass=2; pass<=siz; pass++){
         temp=arr[pass];
         ptr=pass-1;

         while(temp<arr[ptr]){
            arr[ptr+1] = arr[ptr];
            ptr--;
         }
         arr[ptr+1]=temp;
   }
    cout<<"\t\t << Array after  INSERTION Sort >>\n";
      for (i=0; i<siz; i++){
            arr[i]=arr[i+1];
            cout<<arr[i]<<endl;
   }
return 0;
}

