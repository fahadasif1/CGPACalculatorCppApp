//
//  main.cpp
//  CGPACalculator
//
//  Created by Fahad Asif Chaudhry on 14/06/2023.
//

#include <iostream>
#include <vector>
#include<numeric>
#include <iomanip>

// using directive
using namespace std;
vector< int > arr;
vector< int > arr2;
// welcome message



void welcome() {
    cout << "\t\t\t\t\t ----------------------------\n";
    cout << "\t\t\t\t\t| Welcome to CGPA Calculator |\n";
    cout << "\t\t\t\t\t ----------------------------\n";
    
    cout << "\tTo calculate your CGPA enter the number of subjects then your marks out of 100 for all subjects.\n";}

// getting the input marks and feeding into vector
void inputData(){
    arr.clear();
    arr2.clear();
    cout << "\nEnter the total number of subjects your calculating cgpa for: ";
    int a=0;
    cin >> a;
    cout << "\n";
    int b=1;
    int z;
    cout << "Enter marks for your first subject: ";
    cin >> z;
    if (z>100){
        ///////
       // continue;
       // break;
        cout<<"\nError!!!! marks can't be more than 100. try again RESTARTING PROGRAM\n";
        inputData();
        
    }else {
        
        arr.push_back(z);
    }
    while (b<a){
        cout << "Enter Your marks for subject " << b+1;
        cout << ": ";
        cin >> z;
        if (z>100){
            ///////
           // continue;
           // break;
            cout<<"\nError!!!! marks can't be more than 100. try again RESTARTING PROGRAM\n";
            break;
            
        }else {
            
            arr.push_back(z);
            b++;
        }
    }
    if (z>100){    inputData();
    }else{}
}

// converting marks to grade points
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
    
    int len = 0;
       for (int element: arr2)
          len++;
    
    cout << "Calculating Your CGPA . . . \n";
    int n = accumulate(arr2.begin(),arr2.end(),0);
    cout << "CGPA = Total Grade Point Obtained / No. of Subjects \n";
    cout << "CGPA = " << n << "/" << len << " = ";
    float z = (float)n/ (float)len;
    cout << fixed << setprecision(1) << z;
    
    
}

int main(int argc, const char * argv[]) {
   
   
    
        
        
        welcome();
        inputData();
        
        cout<< "\n\t\tGrade Point Table \n";
        cout << " -----------------------------\n";
        cout << "|Subject | Marks | Grade Point|\n";
        
        for (int i = 0; i < arr.size(); i++)
        {
            arr2.push_back(marksToGradePointTable(arr[i]));
            
            
            cout << "   "<< i+1 << "\t    "<< arr[i] << "    \t\t " << arr2[i]<< " \t\t \n";        }
        
        cout << " -----------------------------\n";
        cout << "\n";
        
        cgpaCalculator();
        
        cout << "\n\n";
        
        return 0;
    
}

