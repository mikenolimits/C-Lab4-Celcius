#include <iostream>
using namespace std;

int main(){

    double amount; 

    double t;
    double w;
    string unit;
    string option;

    cout<<"what would you like to translate?\n";
    cin>>option;

    if(option == "temp")
    cout<<"what is the current temperature in celcius your room?";

    cin>>t;

    cout<<"The Fahrenheit Temperature is: "<<(t * 1.8)+ 32<<"degrees\n";

    if(option == "metric")

    cout<<"what would you like to convert?\n";

    cin>>unit;

    cout<<"Great! How many ?" <<amount<<"s do you have?";

    cin>>amount;

    if(unit == "miles")

    cout<<"You have : "<<amount/.621371<<"kilometers";

    return 0;

}
