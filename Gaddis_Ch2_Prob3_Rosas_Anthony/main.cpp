/* 
 * File:   main.cpp
 * Author: Rosas_Anthony
 * Purpose:Compute Total Sales TAx
 *
 * Created on January 8, 2015, 11:14 AM
 */
//system libraries 
#include <iostream>
//User Libraries

//Global constants
const char CONVPCT=100;//Percent conversion

//Function Prototypes 

using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    int Pur=95; //Purchase
    char Sta=4; // State Sales Tax
    char Cou=2; // County Sales Tax
    int TolTax1=Pur*Sta/CONVPCT;//State Tax On Purchase 
    int TolTax2=Pur*Cou/CONVPCT;// County Tax On Purchase
    int TolTax=TolTax1+TolTax2;//State and County Tax added
    cout<<"The total sales tax on the purchase is ";
    cout<< TolTax <<endl;
    //Exit Stage Right
    return 0;
}

