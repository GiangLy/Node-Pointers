#include "Node.cpp"
#include <iostream>
#include <string>

using namespace std;

//Mutator Function
void Node :: set_link(Node *lptr)
{
	link = lptr;
}

//Compares title, if title is the same then return true else return
//false.
bool Node :: compare_data(std::string bktitle, std::string bktitle2)
{
	if (bktitle.compare(bktitle2) == 0)
	{
		return true;
	}
		return false;
}

//Accessor function to get pointer of current node.
Node* Node :: get_link()
{
	return link;
}

//Accessor Function to get title of current node.
string Node :: get_title()
{
	return booktitle;
}

//Accessor Function to get author of current node. 
string Node :: get_author()
{
	return bookauthor;
}

//Accessor Function to get date of current node.
string Node :: get_date()
{
	return date;
}

//Prints out data of node.
void Node::process_data()
{
	cout << booktitle << " " << bookauthor << " " 
	<< date << endl;
}
	
