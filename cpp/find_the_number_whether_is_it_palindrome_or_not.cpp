#include<iostream>
#include "palindrome.h"

using namespace std;

int main(){

    int x;
    cin>>x;

    int n = reverse_digits(x);

    if( n == x ){
        cout<<"number is palindrome";
    }else{
        cout<<"number is not palindrome";
    }

}