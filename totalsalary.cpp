#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int basic;
    char A,B,C,ch;
    cin>>basic>>ch;
    double hra=0.20*basic;
    double da=0.50*basic;
    double pf=0.11*basic;
    int allow;
    
	if(ch==65)
	{
		allow=1700;
	}
	else if(ch==66)
	{
		allow=1500;
	}
	else
	{
		allow=1300;
	}
    double totalsalary=(basic+hra+da+allow-pf);
    int k=round(totalsalary);
    cout<<k;
    return 0;
    
    

}
