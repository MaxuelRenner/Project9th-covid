#include <iostream>

using namespace std;



void PrintCountries ()
    {

   string arr[10];

    arr[0]= "Switzerland";
    arr[1]= "Spain";
    arr[2]= "Italy";
    arr[3]="Austria";
    arr[4]="Germany";
    arr[5]="Netherlands";
    arr[6]="France";
    arr[7]="Iran";
    arr[8]="US";
    arr[9]="Bulgaria";
        for (int i=0; i < 10; i++){
             cout<<"["<<i<<"]= ";
        cout<<arr[i]<<" "<<endl;
    }

cout<<endl;

}

int sumNumbers(int num)
{
        if(num >0 && num<=10) {

      cout<<"1 point";
      }
   else if(num <21 && num>=11) {
      cout<<"3 points";
   }
   else if(num <41 && num>=21) {
      cout<<"6 points ";
   }
   else if(num <61 && num>=41) {
      cout<<"15 points";
   }
   else if(num <100 && num>=61) {
      cout<<"25 points";
      }
      //easter egg//
      else if (num =119 && num <= 120){
        cout<<"pich po dobre ne izlizai";
      } else {
            cout<<"You must be over 10 to 100"<<endl;
   }
}

int sumCountrys (string names)
{
        if(names =="Switzerland" ||  names == "0") {
      cout<<"4 point";
      }
   else if(names =="Spain" ||  names == "1") {
      cout<<"4 points";
   }
   else if(names =="Italy" ||  names == "2") {
      cout<<"3 points ";
   }
   else if(names =="Austria" ||  names == "3") {
      cout<<"3 points";
   }
   else if(names =="Germany" ||  names == "4") {
      cout<<"2.5 points";
      }
    else if(names =="Netherlands" ||  names == "5") {
      cout<<"2.5 points";
      }
    else if(names =="France" ||  names == "6") {
      cout<<"2 points";
      }
    else if(names =="Iran" ||  names == "7") {
        cout<<"2 points";
        }
     if(names =="US" ||  names == "8") {
        cout<<"1 points";
        }
    else if(names == "Bulgaria" ||  names == "Bul" || names == "bul" ||  names == "9") {
        cout<<"1 points";
        } else {
      cout<<"Please Enter Country name from the listed above"<<endl;
   }
}

int main()
{

   int age;

        cout<<"Enter your age here form 10 to 100: "<<endl;
   cin>>age;
    sumNumbers(age);


cout<<endl;

    string DA;
    int a;
cout<<endl;

        cout<<"Are you going out?"<<endl;
    cin>>DA;

     if(DA == "Yes" || DA == "yes" || DA == "Da" || DA == "da" || DA == "DA" || DA == "YES" || DA == "YEs" || DA == "YeS" || DA == "yeS" || DA == "yES" || DA == "Yeah" || DA == "yeah" || DA == "Ita" || DA == "ita" || DA == "Ja" || DA == "ja" || DA == "Y" || DA == "y"){
            a=5;
      cout<<"5 point"<<endl;
      } else if (DA == "No" || DA == "no" || DA == "NO" || DA == "nO" || DA == "Ne" || DA == "ne" || DA == "nE" || DA == "Nein" || DA == "nein" || DA == "nihil" || DA == "Nihil" || DA == "N" || DA == "n"){
          a=0;
      cout<<"0 points"<<endl;
      } else
        cout<<"You should answer with Yes or No don't fuck with me bro xD"<<endl;


    cout<<endl;

        string arr;

    cout<<"From which country r u?"<<endl;

    cout<<endl;

    PrintCountries();

        string pesho;


            cout<<endl;
        sumCountrys(pesho);
cin>>pesho;
    cout<<endl;

        string NE;
      int b;
    cout<<"Do u have any chronic illnesses?"<<endl;
            cout<<endl;
        cin>>NE;

     if(NE == "Yes" || NE == "yes" || NE == "Da" || NE == "da" || NE == "DA" || NE == "YES" || NE == "Yeah" || NE == "yeah" || NE == " tehnicheski da" || NE == "y" || NE == "Y"){
            b=15;
      cout<<"15 point"<<endl;
      }
   else if (NE == "No" || NE == "no" || NE == "NO" || NE == "NE" || NE == "Ne" || NE == "ne" || NE == "the sickness" || NE == "Nope" || NE == "N" || NE == "n"){
        b=5;
      cout<<"5 points"<<endl;
    }
    else
        cout<<"You have to answer with Yes or No mate!"<<endl;

cout<<endl;




int sum;
sum=0;
sum=a+b+age;
cout<<"Final score is " <<sum<<endl;

cout<<endl;

}
