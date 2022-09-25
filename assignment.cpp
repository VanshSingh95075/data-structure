#include<bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int age;
    node *next;
    node *prev;
    node(string s,int x){
        name = s;
        age = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(node *head){
    while(head!=NULL){
        cout<<head->name<<" "<<head->age<<" - ";
        head = head->next;
    }
    cout<<"NULL";

}



int main(){

    node *father = new node("SANJEEV KUMAR SINGH",44);
    node *mother = new node("NEELAM SINGH",40);
    node *sister = new node("PREETI SINGH",21);
    node *myself = new node("VANSH SINGH",19);
    

    node *head = father ;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=sister;
    sister->prev=mother;
    sister->next=myself;
    
    myself->next=NULL;


    printlist(head);
    return 0;
}
