#include <iostream>
#include <cmath>

using namespace std;
void sol(){
    int n,q;
	cin>>n>>q;
	int arr[n+1];
	int max=0;
	int maxidx=0;
	for(int i=1;i<n+1;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max=arr[i];
			maxidx=i;
		}
	}
	while(q-->0){
		int p,r;
		cin>>p>>r;
		if(r<=p-2){
			cout<<0<<endl;
		}
		else if(max>arr[p] and maxidx<p){
			cout<<0<<endl;
		}
		else if(arr[p]==max){
			if( p==1){
				cout<<r<<endl;
			}
			else{
					int temp=r;
					cout<<temp-(p-2)<<endl;
			}
		}
		else{
			int ans=1;
			int ngidx=-1;
			for(int i=p;i<n+1;i++){
				if(arr[i]>arr[p]){
					ngidx=i;
					break;
				}
			}
			ans+=ngidx-p;
			cout<<ans<<endl;
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
