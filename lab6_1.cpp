#include<iostream>
using namespace std;

int main(){
    int N;
    int even = 0, odd = 0;
    while(N != 0 ){
     cout << "Enter an integer: ";
     cin >> N;
       if(N%2==0){
          even = even + 1;                
    }else{
          odd = odd + 1;
          }
    }      
    cout << "#Even numbers = "<< even-1 <<endl ;
    cout << "#Odd numbers = "<< odd  ;
    return 0;
    
    }
    
    