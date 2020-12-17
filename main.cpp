#include <iostream>
using namespace std;

int main() 
{ 
    int n;
    cin >> n; 
    cout << firstDigit(n) << " " 
        << lastDigit(n) << endl; 
    return 0; 
} 

int firstDigit(int n) 
{ 
    while (n >= 10)  
        n /= 10; 
    
    return n; 
}

int lastDigit(int n) 
{ 
    return (n % 10); 
} 