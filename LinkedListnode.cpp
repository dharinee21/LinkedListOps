#include <iostream.h>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
};

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

}