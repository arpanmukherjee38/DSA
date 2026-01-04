#include<iostream>
using namespace std;


int recursionfun(int n){
    if(n==0){
        return 1;
    } 
    return n*=recursionfun(n-1);
}

int fibonnacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return n=fibonnacci(n - 1) + fibonnacci(n - 2);
}
int main(){
    int n = 4;
    cout<<fibonnacci(n)<<endl;
    return 0;
}