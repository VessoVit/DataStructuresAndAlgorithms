//Asterix Starts Nested Loops
#include <iostream>

using namespace std;
int main() {
	
	//initialise variables and assigne values
	int size = 10;
	int line = 10;
	int stars =10;
	
	// Starts (a)
	
	//for each line
	for (int line = 1; line <= 10; line++){
		//number of start per line
		for (int stars = 1; stars <= line; stars++) 
			cout<<"*";
		cout << endl;
	}
	
	cout << endl;
	// Starts (b)
	for(int line=1; line <= 10; line++)
	{
		for(int s=0; s < stars; s++)
		cout << "*";
		stars--; // or stars+=1;
	cout << endl;
	}
	
cout << endl;
	// Starts (c)
	for (int line = 0; line < 10; line++ ) {
		for (int stars = 1; stars <= size; stars++){
			if ( stars <= line) cout << " ";
			else cout <<"*";
		}
		cout << endl;
	}

	printf("\n");
	// Starts (d)
	for (int line = 10; line > 0; line--) {
		for (int stars = 1; stars <=size; stars++) {
			if( stars <= line ) cout << " ";
			else cout <<"*";	
		}
		cout << endl;
	}
	//end main
}

