/**
*This is my 2nd CGI program
*/
#include <iostream>
using namespace std;

int main () {
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Sum Of two variable CGI Program</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<h2>Sum Of two variable CGI Program</</h2>\n";
    int a = 300, b = 500;
    cin>>a>>b;
    cout<<"<h2> " << a+b <<"</h2>\n";
   cout << "</body>\n";
   cout << "</html>\n";

   return 0;
}

