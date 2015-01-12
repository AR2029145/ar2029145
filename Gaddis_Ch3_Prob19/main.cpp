/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose: car payment 
 * Created on January 12, 2015, 11:37 AM
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
    float intRate=0.0319f/12;//CapOne.com
    float msrplus=4e4f;   //loan amount
    char nPaymnt=60;      //Numbers of monthly payments
    //Calculate the monthly payment
    float temp=pow((1+intRate) ,nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //output the inputs
    cout<<"Interest per year = "<<intRate*100<<endl;
    cout<<"number Of payments= "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;        
    //output our payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"my car will cost$"<<mPay<<endl;
    
           
    //Close the stream 
    

    return 0;
}

