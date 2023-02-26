#include <iostream>
using namespace std;

int main(){
   for(int r = 0;r<3;r++){
       if(r == 0 || r == 2){
          for(int c = 0 ;c<5; c++){
             cout<<"*"<<" ";
             }
          cout<<endl;
        }
        else{
            for(int c=0;c<5;c++){
                if(c==0||c==4){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
        cout<<endl;    
          
      }
   }

    return 0;
}