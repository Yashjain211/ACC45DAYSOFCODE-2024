#include <bits/stdc++.h>
using namespace std;
void solve(){
     int x, y, z, w;
     cin>>w>>x>>y>>z;
     int d = y+x;
     int e = x+z;
     int f = z+y;
     int g = x+y+z;
     if(w==x ||w==y || w==z|| w==d|| w==e || w==f || w==g){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
}     
     int main() 
     {
     int test;
     cin>>test;
     while(test--)solve();
     
     return 0;
     }    
     
    

	 
	
	 


