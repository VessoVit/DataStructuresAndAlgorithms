#include <iostream>
#define MAX 10

using namespace std;

class Queue{
	private:
		int arr[MAX];
		int front, end, length;
		
	public:
		//Constructor 
		Queue(){
			end = -1;
			front = 0;
			length = 0;		
		};
		
		void push(int a){
			if(length<MAX){
				//
				//arr[(top+n) % arr[T] ];
			
			}else{
				cout << "Queue is full! " << endl;
			};
		}
		
		int pop() {
			if(length>0){
				//
			}else{
				cout << "Queue is empty" << endl;
			};
		}
		
		bool isempty(){
			return(length == 0);
		}
		
		bool isfull(){
			return (length==MAX);
		}
};

int main(int argc, char *argv[]) {
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