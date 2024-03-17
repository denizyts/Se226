#include <iostream>
#include<new>

using namespace std;


class Node {

public:
    int data;
    Node *next;
    Node(int x , Node *n){data=x; next=n;}

};


class Queue {


public:

    Node *front;
    Node *back;

    Queue(){front = nullptr; back=nullptr;}

    void enqueue(int x){

     if(isEmpty() == true){
     Node *a = new Node(x , nullptr);
     back = a;
     front = a;
     }
     else{
     Node *a = new Node(x , back);
     back = a;
     }


    }

    void deque(){


    Node *temp; temp = back;

    cout<<endl;

    while(temp != nullptr){
            cout<<temp->data<<endl;
        if(temp->next == front){
            front = temp;
        temp->next=nullptr;
        }
        temp = temp->next;
    }
    }

    int top(){
    if(isEmpty()){return NULL;}
    return front->data;
    }

    bool isEmpty(){
    if(front == nullptr){return true;}
    else return false;
    }


    int size(){

    Node *temp; temp = back;
    int size = 0;

    if(back == nullptr)return 0;

    while(temp->next != nullptr){
            size++;
        if(temp->next == front){
            size++;
            break;
        }
        temp = temp->next;
    }
    return size;
    }

    void printQueue(){

    Node *temp; temp = back;

    while(temp != nullptr){
            cout<<temp->data;
            cout<<"->";
            temp = temp->next;
        }
        cout<<endl;
        return;
    }


    };



int main()
{
   // cout << "Hello world!" << endl;

    Node *a; a = new Node(7 , nullptr);

    Queue myQueue;
    myQueue.enqueue(5);
    myQueue.enqueue(6);
    myQueue.enqueue(7);
    myQueue.enqueue(8);
    myQueue.enqueue(9);
    myQueue.enqueue(10);
    myQueue.enqueue(11);
    myQueue.printQueue();
    cout<<myQueue.size();
    myQueue.deque();
    myQueue.printQueue();
    cout<<myQueue.size();




}




