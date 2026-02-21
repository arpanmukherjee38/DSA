#include<iostream>
#include<vector>
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

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val< root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


Node *buildBST(vector<int>arr){
    Node *root = NULL;
    for(int val:arr){
        root = insert(root, val);
    }
    return root;
}

bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(key < root->data){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    }
}

Node* getInOrderSuccessor(Node* root){ // left most node in right subtree.
    while(root != NULL && root->left !=NULL){
        root = root->left;
    }
    return root;
}

    Node *delNode(Node *root, int key)
{
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left = delNode(root->left, key);
    }else if(key > root->data){
        root->right = delNode(root->right, key);
    }else{
        if(root->left==NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }else{
            Node *IS = getInOrderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node *root = buildBST(arr);
    inorder(root);
    cout << endl;
    // cout << search(root, 8) << endl;
    delNode(root, 6);
    inorder(root);
    return 0;
}