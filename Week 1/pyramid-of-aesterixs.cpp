//non recursive implementation of the asterix pyramid

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int k = 10;
	    for (int i = 0; i < 10; i++)
	    {
	        for(int x = 0; x <= i; x++)
	        {
	            cout << " ";
	        }
	        for(int x = 0; x < k; x++)
	        {
	            cout <<"*";
	        }
	        for(int x = 0; x < k; x++)
	        {
	            cout <<" ";
	        }
	        for(int x = 0; x <= i; x++)
	        {
	            cout << "*";
	        }
	        k--;
	        cout << endl;
	    }
}
