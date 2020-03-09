#include<iostream>
#include<sstream>

using namespace std;

int main(){
	
	stringstream merge;
	
	string str;
	//int count;
	
	merge<<"CSE";
	merge<<"msmrobin";
	str=merge.str();
	
	cout<<str<<endl;
	return 0;
}
