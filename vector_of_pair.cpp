#include <bits/stdc++.h>
using namespace std;

/// Writing a function for printing vector

//passing vector by refrence so that actual vector is passed and not a vector copy is created and our o(n) t.c is saved...

//void printvector(vector<int> v) 
 
 // now passing by refrence 
void printvector(vector<pair<int,int>>& v) 
{  

    // also printing size of vector
    //v.size() t.c is also o(1)

    cout << "Size is:"<<v.size()<<endl;


for(int i =0 ; i<v.size( ) ; i++)
{
    cout<<v[i].first<< " " << v[i].second<<endl;
    // imagine v[i] as a pair and its first element is given by .first


}  

// for proving pass by refrence is good using this below line 2 will not be added in vector v as its copy is passed and not actual vector

cout<<endl;
}

int main(){

// vector of pairs
/*
vector<pair<int,int>>v = {{1,2}, {2,3}, {4,5}} ;// declaring and initializing 
// every vector elements will be a  pair like v[0] is a pair so on.
printvector(v);
*/

// now taking input from user.
vector<pair<int,int>>v;
int n; cin>>n;
for(int i = 0 ;  i<n ;i++){
    int x,y; 
    cin>>x>>y;
    // now inserting values in vectors  -> either use make_pair or { }
  //  v.push_back({x,y}) ;
     v.push_back(make_pair(x,y)) ;
}
printvector(v);
return 0;
}