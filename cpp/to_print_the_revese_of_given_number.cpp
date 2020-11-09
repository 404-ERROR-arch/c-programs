#include<iostream>

using namespace std;

int  reverse_digits(int);

int reverse_digits(int c){

    int temp = c , rem = 0, sum = 0;

    while(temp){
        rem = temp%10;
        sum = (sum*10) + rem;
        temp = temp/10;
    }

    return sum;
    
}


int main(){

    cout<<"Enter the number";
    int c ;cin>>c;

    cout<<reverse_digits(c);

 



}