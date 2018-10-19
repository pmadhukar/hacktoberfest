#include <iostream>
Using namespace std;

int main() {
int input;
cin>>input;
num = input;
int rev=0,rem;
while(num!=0){
rem=num%10;
rev =sum*10 + rem;
num = num/10;
}
if(rev == input)
cout<<"No. is a Palindrome";
else
cout<<"Not a Palindrome";
return 0;
}
