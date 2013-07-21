#include <iostream>
using namespace std;

#define MAXQUEUE 3        // MAXIMUM STACK CONTENT

class queue
{
  private:
   int arr[MAXQUEUE];  // define an array of length MAXQUEUE that has the name queue
   int first;          // this is the index of the first element of the queue
   int last;           // index of the last element of the queue
   int length;         // length of the queue

  public:
   queue()         // Constructor
     {
        first=MAXQUEUE-1;   // we start the queue at the end of the array
        last=0;             // if there is no element in the queue, last has to be before first
        length=0;
     }

   void push (int e) {        // adds an element at the end of the queue
       if (length==MAXQUEUE)
          {//error handling
           cout << "The queue is full! \n";
           return;
          }
       else { if (last>0)(last--); else last=(MAXQUEUE-1);  // here we use the array as a circle and glue the front and end together
            arr[last]=e;                        // the new element is appended at the end
            length=length+1;                    // the length of the queue increases
      cout << "first:" << first << ", last:" << last << ", length:" << length << "\n";
    }
  }

   int pop() {                // gives the first element of the queue and removes it from the queue
     int res;                 // variable for the result

     if (length==0)           // from an empty queue we cannot get an element
          {//error handling
           cout << "The queue is empty! \n";
           return 1;
          }
      }

  int main(int argc, char const *argv[])
  {
    queue a;
    a.push(10);
    a.push(3);

    a.pop();
    cout<<a.pop()<<" is Popped.. \n";

  }
