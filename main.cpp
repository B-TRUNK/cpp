/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: mac
 *
 * Created on December 5, 2022, 8:57 AM
 */

//#include <cstdlib>
//
//using namespace std;
//
///*
// * 
// */
//int main(int argc, char** argv) {
//
//    return 0;
//}

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace std::chrono;

int main() {
    
//    std::cout << "Hello My World! \n";
//    std::cout << "Hello \aJetBit!!";
    
    // program toget the multiplication result of two numbers
    //short x = 0 ,y = 0;
//    std::cout << "Enter Values of X & Y! \n";
//    cin >> x >> y ;
//    std::cout << "X x Y = " << (x * y);
    
    
    //Program to get the average of 3 integers
//    int x = 0 ,y = 0 ,z =0 ,j = 0;
//    std::cout << "Enter Value of 3 Numbers!" << endl;
//    cin >> x >> y >> z;
//    j = (x + y + z) / 3;
//    std::cout << "Average = " << int(j) << endl; 
    
    
    //program to check whether if the number is Odd Or Even!
//    int x = 0;
//    cout << "Enter Value of a Number to Check!" << endl ;
//    cin >> x;
//    if ( x % 2 == 0) {
//        cout << x << " is an Even Number! " << endl;
//    } else if(x % 2 > 0) {
//        cout << x << " is an Odd Number! " << endl;
//    }
            
    //while loop
//    int x = 0;
//    while (x < 6) {
//        cout << "x = " << x << endl;
//        x++;
//    }
    
//    // do while loop
//    int x = 0;
//    do {
//    
//        cout << "x = " << x << endl;
//        x++;
//        
//    } while ( x < 7);
    
    // for loop
//    int x = 0;
//    
//    for (x ;x <= 10 ; x++) {
//           cout << "x = " << x << endl;
//    }
    
    // loops shapes
//    int rows = 0;
//
//    cout << "Enter number of rows: ";
//    cin >> rows;
//
//    for(int i = 1; i <= rows; ++i) {
//        for(int j = 1; j <= i; ++j) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
    
       // star half pyramid
//    int i = 0;
//    int star = 0;
//    string _star = "";
//    
//    for (i ; i <= 10 ;i++) {
//        
//        _star.append(" *");
//        cout << _star << endl;
//        
//        
//    }
    
    //numeric half pyramid
//    int i = 0;
//    string _num = "";
//    string _numAsString = "";
//    string _star = "";
//    
//    for (i ; i <= 10 ;i++) {
//        
//        _numAsString = to_string(i); 
//        _num.append(_numAsString + " ");
//        cout << _num << endl;
//        
//        
//    }
    
    //reverse mirrored pyramid
//    int i = 0;
//    string _num = "";
//    string _rnum = "";
//    string _numAsString = "";
//    string _rnumAsString = "";
//    
//    for (i ; i <= 10 ;i++) {
//        
//        _numAsString = to_string(i); 
//        _num.append(_numAsString + " ");
//        cout << _num << endl;
//        
//        
//        if (i == 10) {
//        
//            for (int j = 10 ; j >= 0 ;j--) {
//                
//                _rnumAsString = to_string(j); 
//                _rnum.append(_rnumAsString + " ");
//                cout << _rnum << endl;
//            
//            }    
//        }
//    }
    
    
    // below routine is to calculate the for loop processing time
//    int x ,y ;
//    x = time(0);
//    for (int i = 0 ;i <= 100000 ;i++) {
//    
//        cout << time(0) << endl;
//        y  = time(0);
//    }
//    cout << "This for loop running time :"<< (y - x) << endl;
//    
      //time fab
//    time_t now = time(0);
//    tm* localtm = localtime(&now);
//    cout << "The local date and time is: " << asctime(localtm) << endl;
    
    
    return 0;
}

