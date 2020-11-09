#include<iostream>

using namespace std;

void fib(int);

int main(){

    cout<<"----------------------------------------------------------------\n";
    cout<<"Enter how many fibonnaci series you want\n";
    cout<<"-----------------------------------------------------------------\n";


    int num ;
    cin>>num;

    fib(num);
}

void fib(int num){

    long long  int sum = 0; long long   int  prev_value = 1 ; long long int  next_value = 1 ;

    for(int i = 0; i<num;i++){

        if(i==0 or i <=2){
            if(i == 0)
                cout<<0<<" ";
            else
                cout<<1<<" ";
            
        }  

        else{
        sum = next_value + prev_value;
        cout<<sum<<" ";
        prev_value = next_value;
        next_value = sum ;
        }





}

}