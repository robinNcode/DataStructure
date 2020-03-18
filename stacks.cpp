#include<bits/stdc++.h>
#define MAXSTK 8
using namespace std;

int top= -1;
string  stk[MAXSTK];
                                    //Push Function
void push(){
    string item;
    if (top == MAXSTK-1){
        cout<<"Overflow\n";
    }
    else {
        cout<<"Enter a value ->";
        cin>>item;
        top++;
        stk[top]=item;
    }
}
                    //Pop Function
void pop(){
    if (top ==-1){
        cout<<"Underflow\n";
    }
    else{
        cout<<"Deleted item is ->"<<stk[top]<<endl;
        top--;
    }
}
                    //Display Function
void display (){
    int i;
    if (top ==-1){
        cout<<"stk is empty\n";
    }
    else {
        cout<<"\t\tstk Is :\n";
        for (i=top; i>=0; i--){
            cout<<"\t\tStack["<<i<<"] -> "<<stk[i]<<endl;
        }
    }
}
int main(){

 int choice;
  cout<<"\t \t<<<< Stack Menu >>>>\n";
    cout<<"\t\t1.Push\n\t\t2.Pop\n\t\t3.Display\n";

    while(1){
    cout<<"Enter Your Choice :";
    cin>>choice;
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
return 0;
}
