#include <iostream>

using namespace std;




void AgePrint (int num)
{
        if(num >0 && num<=10) {
      cout<<"1 point";
      }
   else if(num <21 && num>=11) {
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
      //easter egg//
      else if (num =119 && num <= 120){
        cout<<"pich po dobre ne izlizai";
      }

   else {
      cout<<"number is not between 10 & 100"<<endl;
   }
}

int main()
{

   int age;

   cout<<"Enter number between 10 & 100: "<<endl;
   cin>>age;

    AgePrint(age);

    cout<<endl;

    string DA;

    cout<<"Are you going out?"<<endl;
    cin>>DA;
     if(DA == "Yes" || DA == "yes" || DA == "Da" || DA == "da" || DA == "DA" || DA == "YES" || DA == "YEs" || DA == "YeS" || DA == "yeS" || DA == "yES" || DA == "Yeah" || DA == "Ita" || DA == "ita" || DA == "Ja" || DA == "ja" ){
      cout<<"50 point";
      }
   else if (DA == "No" || DA == "no" || DA == "NO" || DA == "nO" || DA == "Ne" || DA == "ne" || DA == "nE" || DA == "Nein" || DA == "nein" || DA == "nihil" || DA == "Nihil"){
      cout<<"-50 points";
   }
   else
    cout<<"You should answer with Yes or No don't fuck with me bro xD"<<endl;

}
