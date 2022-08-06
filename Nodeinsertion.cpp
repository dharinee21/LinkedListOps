#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
};

//Adding node at the front
void push(Node ** head_ref, int x){
    Node * newhead = new Node();
    newhead->data = x;
    newhead->next = (*head_ref);
    (*head_ref) = newhead;
}

void append(Node ** head_ref, int x){
    Node * temp = new Node();
    temp->next = NULL;
    temp->data = x;
    Node * last = (*head_ref);
    
    if (*head_ref == NULL){
        *head_ref = temp;
        return;
    }
    
    while(last->next!=NULL){
        last = last->next;
        }
    last->next = temp;
    return;
    
}
//Adding node after a given node

void addafterNode(Node * prev_node, int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = prev_node->next;
    prev_node->next = temp; 
}

void printList(Node * head){
    while(head!= NULL){
        cout<<head->data <<'\n';
        head= head->next;
    }
}

int main(){
    int dataArr[3];
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    for(int i=0; i<3; i++){
        cin>>dataArr[i];
    }

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = dataArr[0];
    head-> next = second;

    second->data = dataArr[1];
    second->next = third;

    third->data = dataArr[2];
    third->next = NULL;
    
    push(&head, 1);
    append(&head, 5);
    
    cout<<"The linkedlist is:"<< '\n';
    printList(head);
    
    return 0;

}