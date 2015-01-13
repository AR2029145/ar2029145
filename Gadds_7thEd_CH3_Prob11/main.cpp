/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose: bitcoin conversion
 *
 * Created on January 13, 2015, 10:16 AM
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
//Declare variables and initialize
    float bcToDlr=232.8;    //Jan 13th, 2015 10:20am
    float erToDlr=0.849381; //same date
    float ynToDlr=118.03;   //same date
    float bitcoin,dollars,euros,yen;
    //input the number of bitcoin then covert
    cout<<"input the number of bitcoin "<<endl;
    cout<<"you wish to purchase."<<endl;
    cin>>bitcoin;
    //covert to all currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
//output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" = "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" = "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
return 0;
}
