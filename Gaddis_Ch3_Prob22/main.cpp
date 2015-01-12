/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Porpose: Use cmath functions sin, cos, and
 *
 * Created on January 12, 2015, 10:53 AM
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
const float PIDIV4=atan(1);
const float CNVDGRD=PIDIV4/45;

//function prototypes


//execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    
    //Declare a file Object
    ofstream output;
    //Open the file
    output.open("SinCosTan.dat");
    //Declare the angle variable as an intet as degrees
    //in degrees, and the radian angle as a 
    int angDeg=rand()%361-180;//Angel [-180 , 180]
    float angRad=angDeg*CNVDGRD;
    //Output the angle to the screen
    output<<"Angle in degrees => "<<angDeg<<endl;
    output<<"Angle in radians => "<<angRad<<endl;
    //Output the sin, cos , tan
    output<<"sin"("<<angDeg<<") = "<<setw(8)sin(angRad)"<<endl;
    output<<"cos"("<<angDeg<<") ="<<setw(8)cos(angRad)"<<endl;
    output<<"tan"("<<angDeg<<") ="<<setw(8)tan(angRad)"<<endl;
    
    
            
 
            
    //output the results to file
           
    //Close the stream 
    output.close();

    return 0;
}

