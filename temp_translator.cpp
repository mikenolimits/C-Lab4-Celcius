#include <iostream>
using namespace std;

int main(){
     
    //although its nice to use short variables like t or p,
    //other developers will HATE you for it. Being accurate is super important.
    double amount;
    double t;
    string unit;
    string option;

    cout<<"what would you like to translate?\n";
    cin>>option;

    if(option == "temp"){
       cout<<"what is the current temperature in celcius your room?\n";

       cin>>t;

       cout<<"The Fahrenheit Temperature is: "<< (t * 1.8)+ 32 <<"degrees\n";
    }
    if(option == "metric"){

        cout<<"what would you like to convert?\n";

        cin>>unit;

        cout<<"Great! How many ?" << unit <<"s do you have?\n";

        cin>>amount;

     //This is the really dirty way of iterating through a series of if statements
     //Idealy what you want to do in this situation is use the switch verb
     //The switch verb validates each "case" programmatically if your variable is a certain value, and then reacts.
     //In most programming languages this is way more efficient. 
    if(unit == "miles"){

       cout<<"You have : "<< amount / .621371 <<" kilometers\n";
    }
    if(unit == "pounds"){

       cout<<"You have : " << amount / 2.2046 <<" kilograms\n";
    }
    if(unit == "centimeters"){
	cout<<"You have: " << amount / 0.393701 <<" inches\n";
    }
    else{

	cout<<"We are sorry.. It seems you did not enter a unit we can understand. Did you mean 'miles','pounds', or 'centimeters'?\n";
    }

    //Note you can use brackets :D
   }
    return 0;

}
