#include <bits/stdc++.h>
using namespace std;


int main(){
	int tc;
	int f,x,y,z;
	cin>>tc;
	while(tc--){
		int sum=0;
		cin>>f;
		while(f--){
			cin>>x>>y>>z,
			sum+=x*z;
		}
		cout<<sum<<endl;


	}
}



