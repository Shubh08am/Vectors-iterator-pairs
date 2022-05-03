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
// behaves like a 2d array in which row and column length varies i.e they are dynamic
vector<vector<int>>v ;  
// every element of v is a vector

//  v[0] is a vector ; v[1] is a vector so on.

for(int i = 0 ;  i<N ;i++){
    // taking vector size input inside vector
    int n;
    cin>>n;
    vector<int>temp;

for(int j = 0 ; j<n ; j++){
int x; cin>>x;
// v[i].push_back(x);   -> INVALID AS ITH ELEMENT DOESN'T EXIST NOW AND V HAS NO ELEMENT NOW. HENCE, V[i] DOESN'T EXIST.

temp.push_back(x) ;  // takes a row as an input
}
// now inserting a row in larger vector of vector i.e v..
v.push_back(temp) ; // as v stores a vector therefore temp is push back.


}
// printing it

for(int i= 0 ; i<v.size() ; i++)  {
printvector(v[i]); // print every vector

}

cout<<v[0][1]; // 0th vector 1st value i.e 2
// cout<<v[0][3]; // 0th vector 3rd value i.e it doesn't exist therefore garbage value is given
return 0;
}
