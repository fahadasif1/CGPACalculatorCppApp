//
//  main.cpp
//  CGPACalculator
//
//  Created by Fahad Asif Chaudhry on 14/06/2023.
//

#include <iostream>
// using directive
using namespace std;



void welcome() {
    cout << "\tWelcome to CGPA Calculator!\n";
    cout << "To calculate your CGPA enter the subject name followed by a space then your marks.\n";}

void inputData(){
    cout << "Enter the total number of subjects your calculating cgpa for?\n";
    int a=0;
    cin >> a;
    int b=0;
    while (b<a){
        //countinue herre
    }
    cout << "Input your subject and marks\n";
    string s;
    cin >> s;
    
    
}

int marksToGradePointTable(int x){
   
    if (x>=91&&x<=100) {
      return 10;
    } else if (x>=81&&x<=90) {
        return 9;
    } else if (x>=71&&x<=80) {
        return 8;
    } else if (x>=61&&x<=70) {
        return 7;
    } else if (x>=51&&x<=60) {
        return 6;
    } else if (x>=41&&x<=50) {
        return 5;
    } else if (x>=33&&x<=40) {
        return 4;
    } else{
        return 0;
    }
}

void cgpaCalculator(){
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    welcome();
    return 0;
}

