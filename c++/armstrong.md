#include<iostream.h>
#include<math.h>

int main(){
int input;
cin>>input;
int num,sum=0,rem;
num = input;
while(num!=0){
rem = num%10;
sum = sum+pow(rem,3);
num = num/10
}
if(input==sum)
cout<<"Armstrong No.";
else
cout<<"Not Armstrong No.";
return 0;
}

