//
//  forward.cpp
//  doubly linklist
//
//  Created by Bisma on 18/08/2022.
//

#include "forward.hpp"
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *previous;
    
};
class Linklist{
public:
    Node *head;
    Node *tail;
    Linklist(){
        head= NULL;
        tail= NULL;
    }
    void addforwardnode(int position){
        Node *ptr= new Node;
        ptr->data= position;
        ptr->previous= NULL;
        ptr->next= NULL;
        if (head==NULL){
            head= ptr;
            tail= ptr;
            ptr= NULL;
        }
        else{
            tail->next= ptr;
            tail= ptr;
            ptr=NULL;
            
        }
    }
        void printdata(){
            for (Node *i=head; i!=tail; ){
                cout<<i->data<<endl;
                i= i->next;
            }
            cout<< tail->data<<endl;

        }
};

int main(){
    Linklist l;
    l.addforwardnode(2);
    l.addforwardnode(7);
    l.addforwardnode(9);
    l.printdata();
    
    return 0;
}
