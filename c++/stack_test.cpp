#include <iostream>
#include <stack>

using namespace std;

int main(void)
{ int n;
  char ch='y'; 
  stack<int> s;
  do{
   cout<<"Enter a Number";
   cin>>n;
   s.push(n);
   cout<<"Want to insert again";
   cin>>ch;} while(ch=='y');
  
  cout <<showstack(s);
  return 0;
}
