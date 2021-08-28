#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int base,exponent,power=1,i=1;
    cin>>base>>exponent;
    while(i<=exponent){
        power = power*base;
        i++;
        
    }
    cout<<power<<endl;
    return 0;
}

