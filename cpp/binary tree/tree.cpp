#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idex = -1;
Node* buildTree(vector<int>preorder){
    idex++;
    if(preorder[idex]==-1){
        return NULL;
    }
    Node *root = new Node(preorder[idex]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void printTree(Node* root){
    if(root!=NULL){
        cout << root->data << endl;
        printTree(root->left);
        printTree(root->right);
    }
}
void levelorderTraversal(Node* root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node *qurr = q.front();
        q.pop();

        if(qurr==NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << qurr->data << " ";
        if(qurr->left!=NULL){
            q.push(qurr->left);
        }
        if(qurr->right!=NULL){
            q.push(qurr->right);
        }
    }
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;
    // printTree(root);
    levelorderTraversal(root);
    return 0;
}