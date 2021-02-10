#include<iostream>
using namespace std;


void star8(char x){
    int k = 1;

    for(int i=0;i<=5;i++){

        for(int j =0; j<4;j++){
            if(i<=3){
                if(j>=0 and j<=i)
                    cout<<x;
                else 
                 cout<<" ";
            }
        
            else {
               
                 if(j<=k){
                     
                 
                  cout<<x;
                 }else
                 {
                    
                     cout<<" ";
                 }
                 


            }
           

        }
        if(i==4)
            k--;
         
        cout<<endl;
    }




}


int main(){

    char x;
    cout<<"Enter the character you want to use in start pattern\n";
    cin>>x;

    star8(x);


}

