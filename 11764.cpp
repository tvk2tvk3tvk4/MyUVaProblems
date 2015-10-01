#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc,cas=1;
	cin>>tc;
	int a[1000];
	memset(a,0,sizeof(int)*1000);
	
	while(tc--){
		int N, hig=0,low=0;
		cin>>N;
		for (int i = 0; i <N; ++i)
		{
			cin>>a[i];
		}
		for(int i=1;i<N;i++){
			if(a[i-1]<a[i]) hig++;
			if(a[i-1]>a[i])
				low++;

		}
		printf("Case %d: %d %d\n",cas++,hig,low );
	}
}