/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 *
 * Created on January 12, 2015, 10:06 AM
 * Purpose Illustrate file i/o and random 
 * numbers
 */
//system Libraries
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions

using namespace std;
//user Libraries
//global constants
//function prototypes


//execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file Object
    ofstream output;
    //Open the file
    output.open("RollTheDice.dat");
    //Declare 5 Dice
    unsigned short die1,die2,die3,die4,die5;
    //Set the values for each Dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
            
    //out put the results to screen
            cout<< "Yahtzee first roll => ";
            cout<<die1<<" "<<die2<<" "<<die3<<" ";
            cout<<die4<<" "<<die5<<endl;
    //output the results to file
            output<< "Yahtzee first roll => ";
            output<<die1<<" "<<die2<<" "<<die3<<" ";
            output<<die4<<" "<<die5<<endl;
    //Close the stream 
    output.close();

    return 0;
}

