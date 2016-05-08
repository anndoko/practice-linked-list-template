#include <iostream>
using namespace std;

//---------- struct ----------//
template <typename T>
struct Node{
    T data; //data item
    Node* next; //pointer to the next node
};

//---------- class LinkList ----------//
template <class T>
class LinkedList{ //a list of nodes

private:
    Node<T> *first; //pointer to the first node
    
public:
    LinkedList(){ //no-argument constructor
        first = NULL; //tempty list
    }
    void AddItem(T d); //add data item(a new node)
    void Display(); //print all the nodes
};

//---------- void AddItem(T d)----------//
//add data item
template <class T>
void LinkedList<T>::AddItem(T d){
    Node<T> *newNode = new Node<T>;
    newNode->data = d;
    newNode->next = first;
    first = newNode;
}

//---------- void Display()----------//
template <class T>
void LinkedList<T>::Display(){
    Node<T>* current = first; //set ptr to the first node
    while(current != NULL){
        cout << current->data << endl; //print
        current = current-> next; // move to the next node
    }
}
//---------- MAIN ----------//
int main(){
    LinkedList<int> list_int; //make a new linked list
    list_int.AddItem(22);
    list_int.AddItem(24);
    list_int.AddItem(26);
    list_int.Display();
    
    LinkedList<char> list_char; //make a new linked list
    list_char.AddItem('r');
    list_char.AddItem('a');
    list_char.AddItem('h');
    list_char.AddItem('c');
    list_char.Display();
    
    LinkedList<string> list_string; //make a new linked list
    list_string.AddItem("END");
    list_string.AddItem("It works!");
    list_string.AddItem("Let's test.");
    list_string.Display();
    
    
    return 0;
}