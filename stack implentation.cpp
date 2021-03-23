#include <iostream>

struct node{
int data;
node* next;
node* previous;
};
class stack {

private:
    node* head= new node;
public:
    stack(){
    head=NULL;
    }
    void push(int);
    void pop();
    };
    void stack::push(int d){
    node* ptr=new node;
    if(head==NULL){
        ptr->data= d;
        ptr->previous=head;
        ptr->next=head;
        head=ptr;
        std::cout<<"Node created"<< std::endl;

    }
    else{
        ptr->data=d;
        ptr->previous=head;
        ptr->next=head;
        head->next=ptr;
        head=ptr;
        std::cout<<"node created"<<std::endl;
    }
    }
    void stack::pop(){
    node* ptr=new node;
    ptr=head;
    if(ptr !=NULL){
        std:: cout<<ptr->data<< std::endl;
        head= ptr->previous;
        delete ptr;
    }
    else{
        std::cout<< "Can't pop the value,stack is empty"<< std::endl;
    }
    }
int main(){
stack s1;
s1.push(1);
s1.push(2);
s1.push(3);
s1.pop();
s1.pop();
s1.pop();
return 0;
}
