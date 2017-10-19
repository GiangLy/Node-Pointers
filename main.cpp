/*
Author: Giang Ly
Student ID: C427R468
Program Number: 3

Description of Problem:
This program is going to define a preparatory class that you will be 
using for linked list.  You are going to write this class and use it 
so that you will be ready to use it for the linked list class.  
The class is going to be the Node class.
*/

#include "Node.hpp"
#include "Node.cpp"

using namespace std;

int main (void)
{  
	//Declare 5 Node pointers (5 books)
	Node *n1;
	n1 = new Node("The Great Gatsby","F.Scott Fitzgerald","01/01/1925");
	Node *n2 = new Node;
	Node *n3;
	n3 = new Node("The Catcher in the Rye","J.D.Salinger","01/01/1951");
	Node *n4;
	n4 = new Node("The Lion, the Witch and the Wardrobe","C. S. Lewis",
	"01/01/1984");
	Node *n5 = new Node;
	
	//set pointer of first book to second.
	n1 -> set_link(n2);
	//set pointer of second book to third.
	n2 -> set_link(n3);
	//set pointer of third book to fourth.
	n3 -> set_link(n4);
	//set pointer of fourth book to fifth.
	n4 -> set_link(n5);
	
	//Print data for each node
	n1 -> process_data();
	n2 -> process_data();
	n3 -> process_data();
	n4 -> process_data();
	n5 -> process_data();
	return 0;
}
