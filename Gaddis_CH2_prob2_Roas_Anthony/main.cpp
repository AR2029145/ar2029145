/* 
 * File:   main.cpp
 * Author: Rosas Anthony
 * Purpose:Percentage of Sales
 *
 * Created on January 8, 2015, 10:20 AM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global constants
const char CONVPCT=100;//Percent Conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char ECoPer=58;//East Coast Percent
    int TotSal=8600000;//Total Sales 
    
    int EatCoSal=TotSal*ECoPer/CONVPCT;//East Coast percentage sales 
            cout<< "The predicted sales of the East Coast Division = ";
            cout<< EatCoSal <<endl;

    return 0;
}

