#include <iostream>
using namespace std;

int main(){
 for(int r = 0;r<6;r++){
   for(int c = 0;c<6-r-1;c++){
            cout<<" ";
      }
      for(int s = 0;s<r+1;s++){

      cout<<"*"<<" ";
   }
   cout<<endl;
 }

 return 0;
}