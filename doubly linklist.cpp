//
//  doubly linklist.cpp
//  doubly linklist
//
//  Created by Bisma on 18/08/2022.
//

#include "doubly linklist.hpp"
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
    void addbackwardnode(int position){
        Node *ptr= new Node;
        ptr->data= position;
        ptr->previous= NULL;
        ptr->next= head;
        if (tail==NULL){
            head= ptr;
            tail= ptr;
            ptr= NULL;
        }
        else{
            head= ptr;
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
    l.addbackwardnode(2);
    l.addbackwardnode(7);
    l.addbackwardnode(9);
    l.printdata();
    
    return 0;
}
