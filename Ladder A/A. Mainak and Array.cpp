#include <cstdlib>
#include <iostream>
#include<algorithm>
using namespace std;
void solution(){
    int n ;
    cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];

            int ans = 0;
            for(int i=0;i<n;i++){
                ans = max(ans,arr[n-1]-arr[i]);
                ans = max(ans,arr[i]-arr[0]);

                ans = max(ans,arr[i]-arr[(i+1)%n]);
            }
            cout<<ans<<endl;
        }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    solution();
	}
}
