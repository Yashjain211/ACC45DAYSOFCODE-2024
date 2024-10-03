#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin>>t;
	  while(t--){
	      int x, y;
	      cin>>x>>y;
	       int i =500 - (x*2);
	       int j =1000 -((x+y)*4);
	       int p =500-(y*4);
	       int q =1000-((x+y)*2);
	       cout<<max((i+j),(p+q)) <<endl;
	      
	  }
	  return 0;

}
 