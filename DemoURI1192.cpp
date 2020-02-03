#include<iostream>

using namespace std;
int main(){
	
	int test,a,c,sub;
	char b;
	int newchr;
	cin>>test;
	
	while(test--){
		cin>>a>>b>>c;
		newchr=(int)b;
		if(a!=c){
			if(newchr>=65 && newchr<=90)
			{
				sub=c-a;
				cout<<sub<<endl;
			}
			else if(newchr>=97 && newchr<=122)
			{
				sub=a+c;
				cout<<sub<<endl;
			}
		}
		else cout<<a*c<<endl;
	}
	
	
	return 0;
}
