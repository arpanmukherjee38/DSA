#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data){
        val = data;
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

int height(Node * root){
    if(root == NULL){
        return 0;
    }

    int leftHt =height(root->left);
    int rightHt=height(root->right);
    return max(leftHt, rightHt) + 1;
}

int count(Node* cout){
    if(cout == NULL){
        return 0;
    }

    int left_count = count(cout->left);
    int right_count = count(cout->right);
    return left_count + right_count + 1;
}
int sum_of_node(Node* root){
    if(root == NULL){
        return 0;
    }

    int left_sum = sum_of_node(root->left);
    int right_sum = sum_of_node(root->right);
    return left_sum + right_sum+ root->val;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root=buildTree(preorder);
    cout << "The height of the tree is: " << height(root) << endl;
    cout << "The count of the node in the tree is: " << count(root) << endl;
    cout << "The sum of the node in the tree is: " << sum_of_node(root) << endl;
    return 0;
}