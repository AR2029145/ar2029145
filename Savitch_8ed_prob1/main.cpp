/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose:Metric
 *
 * Created on January 13, 2015, 10:51 AM
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
const float CMTNONS=3.527392e4f;//conversion from metric tons to oz
//function prototypes
//execution begins here
int main(int argc, char** argv) {
    //Declare variables 
    float wtPackOz;//Weight of cereal contents in ounces 
    float wtPackTn;//Weight of cereal contents in tons
    float nPackTn;//Number of cereal boxes in a 
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weigts of cereal box is "<<wtPackTn<<"(metric ton)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or would you like to create a new calculation?"<<endl;
    cout<<"Type Y for yes or Type N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y')
    {
     
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weigts of cereal box is "<<wtPackTn<<"(metric ton)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
    }

 
return 0;
}

