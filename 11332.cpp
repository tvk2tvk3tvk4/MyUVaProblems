#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long


int main(){
	int tc,N;
	cin>>N;
	while(N!=0){
		ULL sum=0,i ,t;
		
		t=N;
		i=N;
		sum=0;
		while(i>=10){
			sum=0;
			while(i!=0){
			sum+=i%10;
			i/=10;
			}
			i=sum;
		}
		cout<<i<<endl;

		cin>>N;
	}
}