#include <iostream>
#define T 10
using namespace std;

class Stack{
	private:
		int arr[T];
		int top;
	public:
		//Constructor 
		Stack(){
			top = -1;
		}
		
		void push(int a){
			top++;
			arr[top] = a;
		}
		int pop() {
			int data = arr[top];
			top --;
			return data;
		}
		
		bool isempty(){
			return(top == -1);
		}
		
		bool isfull(){
			return (top==T-1);
		}
};

int main(int argc, char *argv[]) {
	Stack a;
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