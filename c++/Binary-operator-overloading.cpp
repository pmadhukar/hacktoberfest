#include<iostream.h>
#include<conio.h>
class ov_ld{
       int num1,num2;
       public:
       ov_ld()
       {
 num1=15;
 num2=20;
       }
       void input()
       {
cout<<"Enter the first number= ";
cin>>num1;
cout<<"Enter the second number= ";
cin>>num2;
       }
       void output()
       {
cout<<"\nNew first number = "<<num1;
cout<<"\nNew second number = "<<num2;
       }
       void operator+(int x)
       {
int a=0,b=1,c;
cout<<"\n\nFibonacci series----->\n";
cout<<a<<" "<<b<<" ";
for(int i=2;i<x;i++)
{
  c=a+b;
  a=b;
  b=c;
  cout<<c<<" ";
}
       }
       ov_ld operator-(ov_ld o1)
       {
ov_ld temp;
temp.num1=num1-(o1.num1);
temp.num2=num2-(o1.num2);
return temp;
       }
       ov_ld operator*(ov_ld o1)
       {
ov_ld temp;
temp.num1=num1*(o1.num1);
temp.num2=num2*(o1.num2);
return temp;
       }
       ov_ld operator/(ov_ld o1)
       {
ov_ld temp;
temp.num1=(o1.num1)/num1;
temp.num2=(o1.num2)/num2;
return temp;
       }
       ~ov_ld(){}
};
void main()
{
  clrscr();
  int a;
  ov_ld ol1,ol2;
  ol2.input();
  ov_ld ol3=ol1*ol2;
  ov_ld ol4=ol3-ol2;
  ov_ld ol5=ol4/ol3;
  ol1.output();
  ol2.output();
  ol3.output();
  ol4.output();
  ol5.output();
  cout<<"\n\nEnter the required length of fibonacci series= ";
  cin>>a;
  ol1+(a);
  getch();
}
