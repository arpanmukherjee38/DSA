// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// class Queue{
//     Node *head;
//     Node *tail;
// public:
//     Queue(){
//         head = tail = NULL;
//     }
//     void push(int val){
//         Node *newNode = new Node(val);
//         if(is_empty()){
//             head = tail = newNode;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     void pop(){
//         if(is_empty()){
//             cout << "The queue is empty."<< endl;
//         }

//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
//     int front(){
//         if(is_empty()){
//             cout << "Queue is full"<<endl;
//             return -1;
//         }
//         return head->data;
//     }
//     bool is_empty(){
//         return head == NULL;
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while(!q.is_empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }




// Using STL library:
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}