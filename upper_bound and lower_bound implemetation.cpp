#include<bits/stdc++.h>

using namespace std;

int upperr_bound(vector<int>&v,int x){
	
	int L=0,R=int(v.size()-1),ans=int(v.size());

	while(L<=R){
		int mid = (L+R)>>1;
		if(v[mid] > x)
		{	
			R  =mid -1;

		}
		else
		{
			ans=mid;
			L=mid+1;
		}
	}
	return ans;
}

int lowerr_bound(vector<int>&v, int x){
	
	int L=0,R=int(v.size()-1),ans=int(v.size());

	while(L<=R){
		
		int mid = (L+R)>>1;
		if(v[mid] >= x)
		{
      
     			ans=mid;
			R=mid-1;

		}
		else
		{

			L =mid +1;
		}
	}
	return ans;
}


int main(){

    vector<int> v ={3,3,5,5,7,7,7,7,7};

    auto u= upperr_bound(v,7);
    auto l= lowerr_bound(v,7);
	  cout<<u<<l<<endl;

    int ans = u-l;
	  cout<<ans<<endl;
	return 0;

}
