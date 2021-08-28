#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int s,e,w,f;
    cin>>s>>e>>w;
    while(s<=e){
            f=(s-32)*5.0/9;
            cout<<s<<" "<<f<<endl;
            s=s+w;
        
         }
         return 0;
    
    
      
  
}

