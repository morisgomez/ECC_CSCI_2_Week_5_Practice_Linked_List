/*
 Program Name: main.cpp
 Programmer: Moris Gomez
 Date: Saturday 03/13/2024
 Version Control: 1.0
 About: Week 5, CSCI 2, Intro to Linked List Practice
 Description:
   Create a simple Singly Linked List for practice using online examples.
*/

#include <iostream>
#include <string>
using namespace std;

//STEP 1) create class for Node objects:

    //a node is not a built in data type. developer has to create it via class.
    //the node class has 1) a var for its data 2) a var to point to another node.
class Node
{
public: //the variables are made public bc we need to access directly from main.
    int data;
    //each Node (technically an object) created will have a data storing an integer.
    Node* next; //literally points to address of a variable with data of class Node.
    //each Node object will have a pointer called 'next' that points to the address of the another node.
    
};//end Node class.

int main()
{
    //pointer refresher:
    //pointers int * ptr point to an address of a variable in memory.
    int num = 3; //3
    int* test = &num; //stores address of num: 0x7ff7bfeff1f8
    cout << num << endl; //prints value of num.
    cout << test << endl; //prints address of num.
    cout << *test << endl; //prints the value at address of num.
    cout << "------------" << endl;
  

    
//STEP 2) create pointers to Nodes:
    //create head Node pointer:
    Node *head; //no address yet.
    //makes a pointer 'head' that will point to a Node object that has not been created yet.
    
    //create 2nd Node pointer:
    Node *second; //no address yet.
    //makes a pointer 'second' that will point to a Node object that has not been created yet.
    
    //create tail Node pointer:
    Node *tail; //no address yet.
    //makes a pointer 'tail' that will point to a Node object that has not been created yet.
    
    
    
//STEP 3) create actual Nodes:
/*
//pointing to Nodes via traditional class process:
Node headNode; //create headNode object from data type Node.
head = &headNode; //assign address of headNode to pointer head.
//head points to address of object headNode.
//
*/

//pointing to Nodes via 'new' keyword:
    //assigning 'head' pointer to new Node:
    head = new Node(); //create a Node object & use 'head' to point to its address.
    //same as head = &headNode; but new Node technically does not have a name, just a pointer to it.
    //Node creation and pointer assignment on same line.
    
    //assigning 'second' pointer to new Node:
    second = new Node();
    
    //assigning 'tail' pointer to new Node:
    tail = new Node();

    
    
//STEP 4) Link all Nodes:
    //for 'head' Node:
    head->data = 4; //data assigned 4.
    head->next = second; //next only takes in an address so assigned address of second Node.
    //note: using -> instead of . to access member variables directly bc working w/ pointers.
    //above code similar to: *head.data = 4; and *head.next = second;
    //assign int 4 to data member of a Node object located at head address.
    //assign a pointer address to next member of a Node object located at head address.
    
    //for 'second' Node:
    second->data = 5; //assigning 4 to Node object located at 'second'
    second->next = tail; //assigning 'tail's' address to 'next' of 'second'.
    
    //for 'tail' Node:
    tail->data = 6;
    tail->next = NULL; //'next' value for tail Node is NULL bc it is the last Node on Linked List.
    
    
//STEP 5: Print Linked List:
    //for 'head' Node:
    cout << "the first Node's 'data' member variable is: " << head->data << endl;
    cout << "the first Node points to the address of the second Node: " << head->next << endl;
    cout << "------------" << endl;
    
    //for 'second' Node:
    cout << "the second Node's 'data' member variable is: " << second->data << endl;
    cout << "the second Node points to the address of the third Node: " << second->next << endl;
    cout << "------------" << endl;
    
    //for 'tail' Node:
    cout << "the third Node's 'data' member variable is: " << tail->data << endl;
    cout << "the third Node points to the address of NULL: " << tail->next << endl;
    cout << "------------" << endl;
    
    //note: there is no address that points to the 'head' Node bc this is a Singly Linked List.
    
    return 0;
}

