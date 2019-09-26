#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){
	
  int a,b,c;
  double delta, x1, x2;
  
  cout<<"give a: ";
  cin>>a;
  cout<<"give b: ";
  cin>>b;
  cout<<"give c: ";
  cin>>c;

	delta = (b*b)-(4*a*c);
  cout<<"Delta = "<<delta<<endl;
	
	if(delta<0)
	{
		cout<<"Delta <0. No solutions"<<endl;
	}
	else if(delta == 0)
	{
		x1=(-b)/(2*a);
    cout<<"Delta = 0. One solution = "<<x1<<endl;
	}
	else
	{
		x1=(-b -sqrt(delta))/(2*a);
		x2=(-b +sqrt(delta))/(2*a);
		cout<<"Delta > 0. Two solutions x1= "<<x1<<" x2= " <<x2<<endl;
	}
  
	return 0;
}
