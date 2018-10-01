#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
int data;
node *next;
friend class queue;

public:
	node()
	{
		data=0;
		next=NULL;
	}

	node(int d,node *n=0)
	{
		data=d;
		next=n;
	}


};

class queue
{
node *front,*rear;

public:
	queue()
	{
		front=NULL;
		rear=NULL;
	}

	void enqueue(int d)
	{
		if(front==NULL &&rear==NULL)
		{
			front=new node(d);
			rear=front;
		}
		else
		{
			rear->next=new node(d);
			rear=rear->next;
		}
	}

	void dequeue()
	{
		if(front==rear)
		{
			if(front==NULL && rear==NULL)
			{
				cout<<"Underflow";
				getch();
				return;
			}
			else
			{
				node *temp;
				cout<<front->data<<" popped out";
				getch();
				temp=front;
				front=NULL;
				rear=NULL;
				delete temp;
			}
		}
		else
		{
			node *temp;
			cout<<front->data<<" popped out";
			temp=front;
			front=front->next;
			delete temp;
			getch();
		}

	}

	~queue()
	{
		node *temp;
		temp=front;
		while(temp!=NULL)
		{
			front=front->next;
			delete temp;
			temp=front;
		}
	}
};

void main()
{
clrscr();
queue q;
int choice,num;

do
{
	clrscr();
	cout<<"1. Enqueue";
	cout<<"\n2. Dequeue";
	cout<<"\n3. Exit";
	cout<<"\n\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:	cout<<"Enter a number:";
			cin>>num;
			q.enqueue(num);
			break;
		case 2:	q.dequeue();
			break;
		case 3:	exit(0);
		default: cout<<"Wrong choice entered";
			getch();
	}
}while(1);
}