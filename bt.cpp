#include <iostream>
using namespace std;

int main(){
   for(int r = 0;r<5;r++){
   for(int c = 0;c<5-r-1;c++){
            cout<<" ";
      }
      for(int s = 0;s<r+1;s++){

      cout<<"*"<<" ";
   }
   cout<<endl;
 }
 for(int r = 0;r<4;r++){
   for(int s = 0;s<r+1;s++){
     cout<<" ";
    }
    for(int c=0;c<4-r;c++){
     cout<<"*"<<" ";
    }
    cout<<endl;
 }
 return 0;
}