#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    string info;
    node* link;
};
void print(node* ptr)
{
    while (ptr != NULL)
        {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
}
int main(){
    node start;
    node* nod;

    start.link=NULL;
    nod =&start;

    int i,test;
    cout<<"How Many Elements do u want to enter ? :";
    cin>>test;

    for(i=0; i<test; i++){
        nod->link = new node();
        cout<<"Enter element number "<<i+1<<":";
        cin>>nod->info;
        nod=nod->link;
    }
    for (i=0; i<4; i++){

    }

    nod=&start;
   cout<<"<<< item in the linked list >>>"<<endl;
   print(nod);

   nod=&start;
   string item;
   int count=1;
         /*cout<<"\n\tNow,do u wanna search an element ?:\n then enter an element :";
         cin>>item;

         while(nod->link != NULL){
                if(nod->info == item) break;
                else count++;
                nod = nod->link;
                     }
         if(count <= test) cout<<"Searched item is at node =>"<<count<<endl;
         else cout<<"Your item is not in the list\n";
         */
   return 0;

}

