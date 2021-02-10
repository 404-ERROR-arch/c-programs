#include<iostream>
using namespace std;


void star2(char x){

    for(int i=0;i<5;i++){

        for(int j =0; j<5;j++){
            if(j>=4-i){
                cout<<x;
            }else{
                cout<<" ";
            }
           

        }
        cout<<"\n";
        cout<<endl;
    }




}


int main(){

    char x;
    cout<<"Enter the character you want to use in start pattern\n";
    cin>>x;

    star2(x);


}

