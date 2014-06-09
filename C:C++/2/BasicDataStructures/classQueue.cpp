#include <iostream>
#define MAX 10

using namespace std;

class Queue{
	private:
		int arr[MAX];
		int front, back;
		
	public:
		//Constructor 
		Queue();
		void push(int a); //enqueue
		int pop(); //dequeue
		int size();
		bool isEmpty();
		bool isFull();
};

Queue::Queue(){
	front = 0;
	back = 0;
}

void Queue::push(int a){
	arr[back] = a;
	back = (back+1)%MAX;
}

int Queue::pop(){
	int temp;
	temp = arr[front];
	front = (front+1)%MAX;
	return temp;
}

bool Queue::isEmpty(){
	if(abs(front == back)){
		return true;
	} else {
		return false;
	}
}

bool Queue::isFull(){
 	if(front==(back+1)%MAX){
 		return true;
 	} else {
 		return false;
 	}
 }

int Queue::size(){
	return (front - back);
}
int main() {
	Queue a;
	a.push(3);
	cout<<"3 is pushed\n";
	a.push(10);
	cout<<"10 is pushed\n";
	a.push(1);
	cout<<"1 is pushed\n";
	cout<<a.pop()<<" is Popped.. \n";
	cout<<a.pop()<<" is Popped.. \n";
	cout<<a.pop()<<" is Popped.. \n";
	return 0;
}