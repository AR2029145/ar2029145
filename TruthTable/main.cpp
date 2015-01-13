/* 
 * File:   main.cpp
 * Author:Anthony Rosas
 *
 * Created on January 13, 2015, 9:16 AM
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
//Declare 2 boolean Variables
    bool X,Y;
    //output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<endl; 
    //Fill in the second row
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<endl; 
    //fill in the 3rd row
    X=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<endl; 
    //fill in 4th row
    X=false;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"    ";
    cout<<endl;        
            

//Calculate the monthly payment

//output the inputs

//output our payment

//Close the stream
return 0;
}