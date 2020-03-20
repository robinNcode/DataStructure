#include<bits/stdc++.h>
#define MAXQ  8
using namespace std;

int Queue[MAXQ],item;
int front=0,rear=0;
void insert(){
    if (front==rear+1 || (front ==1 && rear==MAXQ)){
        cout<<"Queue situation is Overflow\n";
    }
    else{
        if(front==0){
            front =1;
            rear=1;
        }
        else if (rear == MAXQ) rear=1;
        else  rear ++;
        cout<<"Enter An Element :=>";
        cin>>item;
        Queue[rear]=item;
    }
}
void del(){
    if (front==0) cout<<"Queue situation is Underflow\n";
    else{
            item=Queue[front];
        if (front == rear) front = 0;
        else if (front == MAXQ) front = 1;
        else front++;
    }
}
void display(){
    for (int i = front; i<=rear; i++){
        cout<<"Queue [ "<<i<<"] ->"<<Queue[i]<<endl;
    }
}
int main(){

  int choice;
  cout<<"\t\t<<<<< Queue Menu >>>>>\n";
  cout<<"\t\t\t1.Insertion\n";
  cout<<"\t\t\t2.Deletion\n";
  cout<<"\t\t\t3.Display\n";
  cout<<"\t\t\t4.Exit\n";
  while (1){
  cout<<"Enter your choice => ";
  cin>>choice;

  switch(choice){
    case 1:
        insert();
         break;
    case 2:
        del();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0) ;
        break;
    default :
        cout<<"Wrong Choice\n";
        }
  }
return 0;
}

