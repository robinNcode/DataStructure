#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class node {
    public:
    string info;
    node* link;
};
void print(node* ptr){

    while (ptr != NULL){
        cout<<ptr->info<<endl;
        ptr=ptr->link;
    }
}
int main(){

    node* start=NULL;
    node* second=NULL;
    node* third=NULL;

   start = new node();
   second = new node();
   third = new node();

   start -> info= "Arif";
   start->link=second;
   second-> info="Vod";
   second->link=third;
   third-> info="G";
   third->link =NULL;

   cout<<"<<< item in the linked list >>>"<<endl;
   print(start);

return 0;
}

