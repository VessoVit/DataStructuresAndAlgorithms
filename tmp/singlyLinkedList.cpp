//
//To-do: choose an implementation

//Often used as a Stack
//LIFO (Last in First Out queue)
//Adding, Removing and examine elements are fast O(1) operations

#include <iostream>
using namespace std;

int Node, startNode, slowNode, fastNode1, fastNode2;

// ### Basic Solution ###
// Traverse the List Until the End 
int boolean hasLoop(Node startNode){
	Node currentNode = startNode;
	while(currentNode = currentNode.next());
	return false;
}

//Linked Lists, in a loop might not have a end 
//Be careful for memory leakages 

// ### Basic Solution 2 ###
// Inefficient solutions - O(n^2) complexity
int boolean hasLoop(Node startNode){
	Node currentNode = startNode.next();
	int i = 0;
	//For each note
	do {
		Node checkNode = startNode;
		int j = 0;
		do {
			//loop through entire list
			if (checkNode == currentNode) return true;
			j++
			//up to the the initial node
		} while (j<i && checkNode == checkNode.next());
		i++
	} while (currentNode = currentNode.next());
	return false;
}

// ### Good Solution 3 ###
//Catch Larger and Larger Loops 
//O(n) complexity

int boolean hasLoop(Node startNode){
	Node currentNode = startNode;
	Node checkNode = null;
	int since = 0;
	int sinceScale = 2;

	do {
		if (checkNode == currentNode) return true;
		if (since >= sinceScale){
			checkNode = currentNode;
			since = 0;
			sinceScale = sinceScale*2;
		}
		since++;
	} while (currentNode = currentNode.next());
	return false;
}

// ### Optimal Solution 4 ###
//Efficient solution O(n) complexity
int boolean hasLoop(Node startNode){
	Node slowNode = Node fastNode1 = Node fastNode2 = startNode;
	while (slowNode && fastNode1 = fastNode2.next() && fastNode2 = fastNode1.next()){
		if (slowNode == fastNode1 || slowNode == fastNode2) return true;
		slowNode = slowNode.next();
	}
	return false;
}

int main(){
	//TODO: implement the best solution
}