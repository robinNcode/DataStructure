#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size :";
    cin>>n;
    int demo[n];
    cout<<"plz input the all value:\n";
    //srand((unsigned)time(0));
    for (int i=0; i<n; i++)
    {
        //cout<<"Enter a value : ";
        demo[i]= (rand()%100)+1;
    }

    cout<<"\t:::your output is:::"<<endl;
    int sum=0;

    for(int robin=0; robin<n; robin++)
    {
        sum = sum+demo[robin];

        cout<<demo[robin]<<endl;

    }
    cout<<"Sum of all value = "<<sum<<endl;

    float avg;

    avg=(float)sum/n;

     cout<<"Avg of all value = "<<avg<<endl;

    return 0;
}
