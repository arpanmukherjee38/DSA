// #include<iostream>
// using namespace std;
// int main(){
//     string str1="maam";
//     string str2="maam";
//     if(str1==str2){
//         cout<<"This is a palindrome string"<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void changeA(int &ptr){
    ptr = 20;
}
int main(){
    int a = 10;
    changeA(a);
    cout << a << endl;
    int arr[] = {1, 2, 3, 4};
    cout << arr << endl;
    cout << *arr << endl;
    return 0;
}