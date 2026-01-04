#include<iostream>
using namespace std;

int linersearch(int arr[][3], int rows,int key, int cols){
    pair<int,int>p;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                p={i,j};
                cout<<p.first<<endl;
                cout<<p.second<<endl;
            }
        }
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    int key=9;
    linersearch(arr,rows,key,cols);
    return 0;
}