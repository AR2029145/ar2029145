/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose:
 *
 * Created on January 13, 2015, 11:35 AM
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
//Declare variables
    float number,guess,r;
    //input a number
    cout<<"Input a number to estimate its square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //first pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //output the first pass
    cout<<"First pass calculate -> "<<guess<<endl;
    //2nd
    r=number/guess;
    guess=(guess+r)/2;
    //output the second pass
    cout<<"Second pass calculate -> "<<guess<<endl;
    //3rd
    r=number/guess;
    guess=(guess+r)/2;
    //output the third pass
    cout<<"Third pass calculate -> "<<guess<<endl;
    //4th
    r=number/guess;
    guess=(guess+r)/2;
    //output the forth pass
    cout<<"Forth pass calculate -> "<<guess<<endl;
    
   
  //Exit stage right
  
return 0;
}


