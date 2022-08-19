#include <iostream>
#include <cmath>

using namespace std;
void sol(){
    int n,k;
    cin>>n>>k;
	if(k%2)
       {
            cout<<"YES"<<endl;
 
            for(int i=1; i<n; i+=2)
                cout<<i<<" "<<i+1<<endl;
       }
       else
       {
            if(k%4==0) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
 
                int flag=0;
                for(int i=1; i<n; i+=2)
                {
                    if(flag)
                        cout<<i<<" "<<i+1<<endl;
                    else
                        cout<<i+1<<" "<<i<<endl;
 
                    flag=1-flag;
                }
            }
       }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    sol();
	}
	return 0;
}

