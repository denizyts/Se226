#include <iostream>

using namespace std;


class Node{

public:
    int data;
    Node *prev;
    Node(int x , Node *n){data=x ; prev=n;}


};



class Stack{

public:



    Node *top;
    int size = 0;
    Stack(){
     top = nullptr;
    }

    int push(int a){

    if(top == nullptr){

       Node *x = new Node(a , nullptr);
       top = x;
       size++;

    }

    else{

       Node *x = new Node(a , top);
       top = x;
       size++;

    }


    }

    int pop(){

        if(size == 0){cout<<"empty stack nothing to pop."<<endl; return 0;}

        int result = top->data;
        top = top->prev;
        size--;
        return result;

    }

    int topMethod(){

     if(top == nullptr){
	 cout<<"stack is empty"<<endl;
     return 0;}

     else{return top->data;}

    }


    int getSize(){
     return size;
    }

    void printStack(){

     Node *n = top;
     if(size == 0){cout<<"stack is empty"<<endl;}

     else{

        while(n != nullptr){

         cout<<n->data<<endl;
         n = n->prev;

        }
        cout<<"-------------------"<<endl;

     }


    }




};



int main()
{

 Stack myStack;

 myStack.push(5);
 myStack.push(7);
 myStack.push(8);
 myStack.push(9);
 myStack.push(10);
 myStack.push(11);

 myStack.printStack();

 myStack.pop();
 myStack.pop();
 myStack.pop();
 myStack.pop();


 myStack.printStack();


}
