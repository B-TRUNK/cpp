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
#include <array>
using namespace std;
using namespace std::chrono;


// below prototypes & functions are for recursion
/*
void recursion (int x); //function prototype
int  multiplier (int n);
int  summation (int x ,int y);
void shapes (int x);


void recursion(int x) {

    if (x < 1)
        return;
    else
        cout << x << endl;
    recursion(x - 1);

}

int multiplier(int n) {
    
    if (n == 1)
        return 1;
    
    else
        
        return n * multiplier(n - 1);
    
}

int summation (int x ,int y) {

    if (x == y)
        return x;
    
    else
        return y + summation(x ,(y - 1));

}
// End of recursion prototypes & functions
*/


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
    
    //recursive
    //recursion is to call a function inside itself
    //recursion is most likely a loop whithout a loop!
    
    
    //begin of recursion implementation
    /*
     int x = 4 ,y = 6;
    
    recursion(x);
    cout << multiplier(x) << endl;
    cout << summation(x ,y) << endl;
     */
    //end of recursion implementation
    
    
    
    //one dimensional array!
    
    int arr[] = {200 ,1001 ,320 ,90 ,300 ,500 ,89 ,999 ,2 ,376 ,-1};
    
    //1 - finding the sum of array elements
    int arrSum = 0;
    
    for (int i = 0; i < 5 ;i++) {
    
        arrSum += arr[i];
    
    }
    
    cout << "Array Sum = " << arrSum << endl;
    
    //2 - finding the max int number inside an array
    int max        = 0;
    int inc        = 0;
    
    
    for (inc ;inc < 9 ;inc++) {
        
        if (arr[inc] > max) {
            max = arr[inc];
        }
        
            
    }
    cout << max << endl;
    
    //3 - finding the min number iside an array
    int min        = arr[0];
    int inc        = 0;
    
    
    for (inc ;inc < 11 ;inc++) {
        
        if (arr[inc] < min) {
            min = arr[inc];
        } else {
            min = arr[0];
        }
        
            
    }
    cout << min << endl;
    
    // 4 - serching for the index of an value inside an array
    
    int searchIndex        = 0;
    int inc                = 0;
    int val = 89;
    
    
    for (inc ;inc < 11 ;inc++) {
        
        if (arr[inc] == val) {
            searchIndex = inc;
        } 
    }
    cout << searchIndex << endl;
    

    
    return 0;
}
