/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Created on January 8, 2015, 10:30 AM
 * Purpose: Hmwk, Solution to Energy Drink
 */
//System Libraries
#include <Iostream>
using namespace std;

//User Libaries

//Global constants
const char CONVPCT=100;//Percent Conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare variables
    short custSrv=12467;//Customer Servey
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customers numbers requested 
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //Output the results
    cout<<"Customers surveyed tat are Energy Drinkers=";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers=";
    cout<<custC<<endl;
    
   
    //Exit stage right
    
    return 0;
}