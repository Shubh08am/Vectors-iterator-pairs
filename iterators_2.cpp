#include <bits/stdc++.h>
using namespace std;
int main(){


// Range based loops on vector is runned 
/*
vector<int> v  ={2,3,4,5};
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";

}

cout<<endl;

// for each loop

for(int value:v)
{
    cout<<value<<" ";
// first 2 goes in value than 3 and so on and than they are printed.
// here, in value a copy is created 
}

// prooof to show copy is created
for(int value:v)
{
   value++ ;
   //cout<<value<<endl; // if writing cout here than all value willl be incremented by 1.

}
// now printing again
for(int value:v)
{
    cout<<value<<" ";
// same output as a copy is created so value++ doesn't create a difference.
}
cout<<endl;

// if we want actual values we can use reference 
for(int &value:v)
{
    value++;}
   for(int value:v)
{ 
    cout<<value<<" ";
// all value willl be incremented by 1.
}

cout << endl;

*/ 


// Iterators on pair using range based loops

vector<pair<int,int>>v_p = {{1,2},{2,3}};

for(pair<int,int> &value : v_p)
{
    
}
return 0;
}