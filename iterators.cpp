#include <bits/stdc++.h>
using namespace std;
int main(){

vector<int> v  ={2,3,4,5};
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";

}

cout<<endl;

/* 1st*/
/*

// iterator syntax --> first container than ::scope resolution operator follwed by iterator and iterator name 
vector<int>::iterator it = v.begin() ;//, points to first element

// output first value by using * 
cout<< (*it) <<endl;   //2
cout<< *(it+1) <<endl; //3
*/

/*2nd*/
// ACCESSING A CONTAINER USING VECTOR 
/*

vector<int>:: iterator it =v.begin();
for(it = v.begin() ; it!=v.end();++it) // it = it +1 and it++ are different , ++it points i.e goes to next iterator of that container
{
    cout<<(*it)<<endl;
}

// it+1 -> next location
//*it->  next iterator

*/ 

//3rd 
/* PAIR AND ITERATOR*/
vector<pair<int,int>>vp = {{1,2} ,{2,3} ,{3,4}};

// iteartor declaration
vector<pair<int,int>>::iterator it ; //=vp.begin() -> not neccesary to write if writing loop to acccess container

for(it=vp.begin();it!=vp.end();++it)
{ /// *it is value 
    cout << (*it).first <<" " <<(*it).second<<endl;

cout<< (it->first) << " "<< (it->second) << endl;

}


return 0;
}

