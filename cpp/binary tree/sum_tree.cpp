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
static int idx = -1;
Node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
int sumTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int left_Sum = sumTree(root->left);
    int right_sum = sumTree(root->right);
    root->data += left_Sum + right_sum;
    return root->data;
}
void printTree(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        printTree(root->left);
        printTree(root->right);
    }
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    printTree(root);
    cout << endl;
    sumTree(root);
    printTree(root);
    return 0;
}
