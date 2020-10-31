// CPP program to demonstrate the 
// cosh() function 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    double x = 4.1, result; 
  
    result = cosh(x); 
    cout << "cosh(4.1) = " << result << endl; 
  
    // x in Degrees 
    double xDegrees = 90; 
    x = xDegrees * 3.14159 / 180; 
  
    result = cosh(x); 
    cout << "cosh(90 degrees) = " << result << endl; 
  
    return 0; 
} 
