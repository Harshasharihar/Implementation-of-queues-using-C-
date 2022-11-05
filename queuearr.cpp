#include<iostream>
using namespace std;
#define max 5
#define null 0

class Que
{
	private : int arr[max];
		int front,rear;
		
		
	public : 
			Que();
			void addtoQ(int num);
			int delQ();
			~Que();
};

Que::Que()
{
	cout<<"Inside com=nstructor\n";
	front = -1	;
	rear = -1;
}

void Que::addtoQ(int num)
{
	if(rear == max-1)
	{
		cout<<"The Queue is full\n";
		return;
	}
	rear++;
	arr[rear] = num;
	
	if(front == -1)
	front = 0;
	
}

int Que::delQ()
{
	if(front == -1)
	{
		cout<<"The Que is empty\n";
		return null;
	}
	int x = arr[front];
	arr[front] = 0;
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front++;
	}
	cout<<"The element came out of the Queue is "<<x<<endl;
	return x;
}

Que::~Que()
{
	cout<<"Inside Destructor function..\n";
}

int main()
{
	int num = 0,choice = 0;
	Que q;
	while(1)
	{
		cout<<"Enter the choice\n";
		cout<<"1 to add to Queue\n";
		cout<<"2 to delete element from the Queue\n";
		cout<<"3 to Exit \n";
		cin>>choice;
		
		switch(choice)
		{
			case 1 : cout<<"Enter the number\n";
			cin>>num;
			q.addtoQ(num);
			break;
			
			case 2 : q.delQ();
			break;
			
			case 3 : cout<<"Exiting...\n";
			exit(0);
			
			default :cout<<"Invalid input...Try again..!\n";
			break;
		}
	}
}
