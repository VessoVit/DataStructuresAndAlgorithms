//Dynamical Stack 


#include <iostream>
using namespace std;

class stackElements{
	public:
		int value;
		stackElements *previous;

		stackElements(int e, stackElements *ptr)
		{
			value = e;
			previous = ptr;
		}
};

class DynStack
{		

private:
	stackElements *top;


public:
	DynStack()
	{
		top = NULL;
	}

	~DynStack();
	/* data */
	void push(int content){
		stackElements *next_elem = new stackElements(content, top);
		top = next_elem;
	}

	int pop(){
		if(top !=NULL){
			stackElements *temp = top;
			int result = top->value;
			top = top->previous;
			delete temp;

			return result;
		} else {
			cout << "Stack is empty ! " << endl;
			return -1;
		}
	}
};

int main() {
	DynStack *my_Stack = new DynStack();

	my_Stack->push(1);
	my_Stack->push(2);
	my_Stack->push(3);
	my_Stack->push(4);
	my_Stack->push(5);

	for (int i = 1; i<=5; i++){
		cout << "pop element: " << my_Stack->pop() << endl;
	};

}