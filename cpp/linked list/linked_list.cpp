#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *ptr;
    Node(int val){
        data = val;
        ptr = NULL;
    }
};

class List{
    Node *head;
    Node *tail;

public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->ptr = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->ptr = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout << "Linked list is full\n";
            return ;
        }
        Node *temp = head;
        head = head->ptr;
        temp->ptr = NULL;
        cout<< temp->data<<endl;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node *temp = head;
        while(temp->ptr!=tail){
            temp = temp->ptr;
        }
        temp->ptr = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos){
        if(pos< 0){
            cout << "This is invalid\n";
            return;
        }
        if(pos == 0){
            push_front(val);
        }
        Node *temp = head;
        for (int i = 0; i < pos-1;i++){
            if(temp->ptr==NULL){
                cout << "Invalid\n";
                return;
            }
            temp = temp->ptr;
        }
        Node *newNode = new Node(val);
        newNode->ptr = temp->ptr;
        temp->ptr = newNode;
    }
    void search(int val){
        Node *temp = head;
        int count = 0;
        while(temp != NULL){
            if(temp->data == val){
                cout << count << endl;
                return;
            }
            temp = temp->ptr;
            count++;
        }
    }
    void printll(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->ptr;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(6, 2);
    ll.search(4);
    ll.printll();
    return 0;
}