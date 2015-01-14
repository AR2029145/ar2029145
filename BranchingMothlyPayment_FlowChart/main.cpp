/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:
 *
 * Created on January 14, 2015, 11:19 AM
 */

//system Libraries
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions
#include <cmath>// math function library
#include<iomanip>//format lib
using namespace std;
//user Libraries
//global constants
//function prototypes
//execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float i;//interest rate per cent per year
    float t;//temp variable
    float l;//loan amount
    float mp;//monthly payment
    float n;
    //input the variables required
    cout<<"what in the interest rate in cents per year"<<endl;
    cin>>i;
    i/=(100*12);//Convert to decimal
    cout<<"what is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly payments (format integer)"<<endl;
    cin>>n;
    //calculate the monthly payment
    if(i<0){
        mp=l/n;
    }else
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
        //display the results
        cout<<fixed<<setprecision(2);
        cout<<"your monthly payment = $"<<mp<<endl;
    //exit stage right

return 0;
}
