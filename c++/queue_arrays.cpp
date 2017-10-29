#include<iostream>
using namespace std;
int q[10];
int front=NULL;
int rear=NULL;
void display()
{
	cout<<"Displaying queue:";
	for(int i=front;i<=rear;i++)
	{
		cout<<q[i]<<" ";
		
	}
}
void qinsert()
{
    int item;
	cout<<"Enter item to be inserted:\n";
	cin>>item;
	if(front==1&&rear==10)
	{cout<<"OVERFLOW";
	exit(0);
	}
	if(front==NULL){
		front=1;
		rear=1;
	}
	else
	{
	rear=rear+1;
    }
	q[rear]=item;

}
void createq()
{
	char ch;
	do
	{
	qinsert();
	cout<<" \nwant to Enter another?\n";
	cin>>ch;
	}while(ch=='y');
	
}
void deleteq()
{
    int item;
	item=q[front];
	if(front==NULL&&rear==NULL)
	{
		cout<<"UNDERFLOW";
		exit(0);
	}
	if(front==10)
	{
		front=1;
	}
	else{
		front=front+1;
	}

}
int main()
{
char ch1;
int cho;
do{
cout<<"Enter 1 to create a queue:\n";
cout<<"Enter 2 to insert into queue:\n";
cout<<"Enter 3 to delete into queue:\n";
cout<<"Enter 4 to display:";
cin>>cho;
switch(cho)
{
	case 1:
		createq();
		break;
	case 2:
		qinsert();
		break;
	case 3:
		deleteq();
		break;
	case 4:
		display();
		break;
}
cout<<"\nWant to enter choice?\n";
cin>>ch1;
}while(ch1=='y');

return 0;
}
