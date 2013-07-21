#include <iostream>
#define MAX 10

using namespace std;

class Queue{
	private:
		int arr[MAX];
		int front, end;
		
	public:
		//Constructor 
		Queue(){
			end = 0;
			front = 0;
		};
		
		void push(int a){
			// if(end>0, length < MAX, length++){
			// 	arr[length] = arr;
			// 	length++;
			// 	cout << length << endl;
			// }
			// return a;
			while(end != MAX){
				end++;	
			};
			
			// if(length<MAX){
			// 	//arr[(top+n) % arr[T] ];
			// 	if(last>0)(last--); else last=(MAX-1);
			// 	arr[last]=e;
			// 	length=length+1;
			// 	cout << "first: " << first << ", last: " << last << ", length:" << length << "\n";
			// }else{
			// 	cout << "Queue is full! " << endl;
			// };
		}
		
		int pop() {
		
			// if(length>0){
			// 	int res;
			// }else{
			// 	cout << "Queue is empty" << endl;
			// };
		}
		
		bool isempty(){
			return(end == 0);
		}
		
		bool isfull(){
			return (end==MAX);
		}
};

int main() {
	Queue a;
	a.push(3);
	//cout<<"3 is pushed\n";
	a.push(10);
	//cout<<"10 is pushed\n";
	a.push(1);
	
	//cout<<"1 is pushed\n";
	cout<<a.pop()<<" is Popped.. \n";
	cout<<a.pop()<<" is Popped.. \n";
	cout<<a.pop()<<" is Popped.. \n";
	return 0;
}