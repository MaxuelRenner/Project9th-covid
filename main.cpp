#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter an integer number between 10 & 100: "<<endl;
   cin>>num;


    if(num < 0 && num >= 10) {
      cout<<"1 point";
      }
   else if(num <21 && num>=15) {
      cout<<"15 points";
   }
   else if(num <41 && num>=21) {
      cout<<"35 points ";
   }
   else if(num <61 && num>=41) {
      cout<<"50 points";
   }
   else if(num <100 && num>=61) {
      cout<<"70 points";
      }
   else {
      cout<<"number is not between 10 & 100";
   }

}
