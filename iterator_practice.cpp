#include<iostream>
#include <iterator>
#include<vector>

using namespace std;
int main(){

    /*
vector<int> v = {2,3,4,54,5};

vector<int>::iterator it ;

for(it = v.begin() ; it<v.end();it++){
    cout<<*it <<" ";
}

*/

/*
vector<char> v = {'a' ,'b' , 'c' , 'd' , 'e' };

vector<char>::iterator it = v.begin() +1 ; // +1 takes it to b then +3 to e



advance(it,3);

cout<<*it;
*/

vector<int> v = {1,2,3,4,5,6};
vector<int>::iterator it = v.begin();
vector<int>::iterator it1 = v.end();

auto itr = next(it,3);
auto ittr = prev(it1,3);
cout<<*itr<<" "<<*ittr;

return 0;
}