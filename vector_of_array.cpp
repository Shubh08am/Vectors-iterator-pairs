#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int>& v) 
{  

    cout << "Size is:"<<v.size()<<endl;

for(int i =0 ; i<v.size( ) ; i++)
{
    cout<<v[i]<<" ";
}  
cout<<endl;
}
int main(){

int N; 
cin>>N;

vector<int>v[N];  // N vectors declared
// 10 vectors created whose size is 0 , v[0] is a vector ; v[1] is a vector so on.

for(int i = 0 ;  i<N ;i++){
    // taking vector size input inside vector
    int n;
    cin>>n;
for(int j = 0 ; j<n ; j++){
int x; cin>>x;
v[i].push_back(x);

// v[i] is the ith vector , v is the vector of array
}
}
// printing it

for(int i= 0 ; i<N ; i++)  {
printvector(v[i]); // print every vector

}
return 0;
}