using namespace std;
/*
TEMPLATE QUEUE USING ARRAY

typename: T
if the size reaches the max capacity, the capacity is doubled.
The functions to implement the queue:
-Insertion: void enqueue(int)
-Deletion: T dequeue()
-Size: int getsize()
-To get the front element: T getfront()
-To check if queue is empty: bool isempty()
*/

template <typename T>
class queue
{
	T* data;
	int front;
	int rear;
	int size;
	int capacity;
public:
	queue()
	{
		data=new T[10];
		front=-1;
		rear=0;
		size=0;
		capacity=10;
	}
	void enqueue(T element)
	{
		if(size==capacity)
		{
			T* newdata=new T[2*capacity];
			int j=0;
			for(int i=front;i<size;i++)
			{
				newdata[j]=data[i];
				j++;
			}
			for(int i=0;i<rear;i++)
			{
				newdata[j]=data[i];
				j++;
			}
			delete []data;
			data=newdata;
			capacity=capacity*2;
			front=0;
			rear=j;
		}
		data[rear]=element;
		if(front==-1)
			front=0;
		rear=(rear+1)%capacity;
		size++;
		
	}

	T dequeue()
	{
		if(isempty())
		{
			cout<<"queue empty"<<endl;
			return 0;
		}
		T ans=data[front];
		front=(front+1)%capacity;
		size--;
		if(size==0)
		{
			front=-1;
			rear=0;
		}
		return ans;
	}

	T getfront()
	{
		if(isempty())
		{
			cout<<"queue empty"<<endl;
			return 0;
		}
		return data[front];
	}

	int getsize()
	{
		return size;
	}

	bool isempty()
	{
		return size==0;
	}
};