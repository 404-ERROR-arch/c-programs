#include<iostream>
using namespace std;


void star9(char x){
    
    int  k = 1;

    for(int i=0;i<5;i++){

        for(int j =0; j<9;j++){

            if(j>=4-i and j<=4+i and k==1 and j^1){
                cout<<x;
             
            
            }else if(j>=4-i and j<=4+i and k==0 and !(j^1))
                cout<<x;
           
            else 
             cout<<" ";
           

        }
        cout<<"\n";
        if(i^1)
            k =1;
        else
        {
            k =0;
        }
        
        cout<<endl;
    }




}


int main(){

    char x;
    cout<<"Enter the character you want to use in start pattern\n";
    cin>>x;

    star9(x);


}

