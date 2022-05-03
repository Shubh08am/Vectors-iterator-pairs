#include <bits/stdc++.h>
using namespace std;
int main(){

pair<int,string> p ;
// inserting values in pair
///////////****1 way *****/////

p = make_pair(2,"abc") ; 
//p.first gives first value of pairs.
//p.second gives second value of pairs.
cout<<p.first<<" "<<p.second<<endl;

///////**** 2nd way*****//////

p = { 2 , "abc"};
cout<<p.first<<" "<<p.second<<endl;


return 0;
}