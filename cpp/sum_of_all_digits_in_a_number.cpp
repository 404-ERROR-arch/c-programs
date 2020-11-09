#include<iostream>
using namespace std;





int main(){
    
    cout<<"Enter the number";
    
    int x ; cin>>x;

    cout<<sum_of_digits(x);
    

}


int sum_of_digits(int x){
    int temp = x,rem=0,sum=0;

    while(temp){
        rem = temp%10;
        sum = sum+rem;
        temp = temp/10;
    }

    return(sum);


}
int sum_of_digits(int );