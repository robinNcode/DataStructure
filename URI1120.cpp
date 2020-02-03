#include<iostream>
#include<string.h>
#include<string>  // for string

using namespace std;
int main(){
	
	int d;
	long long int n;
	cin>>d>>n;
	
	char str1 = d+'0';//converting int to char
	
	// the str() coverts number into string 
    string str2 = to_string(n);
	//cout<<"str="<<str2;
		int size = str2.length(); 
  
    	// declaring character array 
    	char char_array[size + 1]; 
  
    	// copying the contents of the string to char array 
    	strcpy(char_array, str2.c_str());
    	//int newdec[size];
    	for (int i = 0; i < size; i++) {
    		 
			//cout<<"new = "<<char_array[i]<<" ";
			
			if(char_array[i]==str1) continue;
		    cout <<"final = "<<char_array[i]<<endl;
		}
	
	return 0;
}
