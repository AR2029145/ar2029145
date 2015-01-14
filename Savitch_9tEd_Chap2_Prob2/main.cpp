/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2015, 10:36 AM
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
const float CNVLBGM=453.6;//grams per pounds
//function prototypes
//execution begins here
int main(int argc, char** argv) {
//Declare Variables
    const float CONC=1e-3f;//sweetener concertration 
    float wtCoke=3.5e2f;   //weight of coke in rams
    float kMouse=5.0f;     //Quantity of sweetener that kills a ,ouse
    float wtMouse=3.5e1f;  //weight of mouse in grams
    float kPer, wtDsPer;
    int nCans;
    //input the desire wt of person
    cout<<"Input your desired weight in pounds"<<endl;
    cout<<"Note: grams are a mass not weight"<<endl;
    cout<<"All people using the metric system are nuts"<<endl;
    cout<<"format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//convert to grams
    //Calculation
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limit of what you drink
    cout<<"number of cans of diet coke ";
    cout<<"that will kill you = "<<nCans<<endl;
    //exit stage right

return 0;
}
