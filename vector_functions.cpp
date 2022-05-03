#include <bits/stdc++.h>
using namespace std;

/// Writing a function for printing vector

//passing vector by refrence so that actual vector is passed and not a vector copy is created and our o(n) t.c is saved...

//void printvector(vector<int> v) 
 
 // now passing by refrence 
void printvector(vector<int>& v) 
{  

    // also printing size of vector
    //v.size() t.c is also o(1)

    cout << "Size is:"<<v.size()<<endl;


for(int i =0 ; i<v.size( ) ; i++)
{
    cout<<v[i]<< " ";

}  

// for proving pass by refrence is good using this below line 2 will not be added in vector v as its copy is passed and not actual vector

v.push_back(2);

cout<<endl;
}

int main(){



// declaring vector with initial size 1
 
 /*vector<int> v; 
 v.push_back(7);
 output is 7 , as only 7 is added.*/

// declaring vector with some size 

/*vector<int> v(5);
 output is 5 times 0 as vector of size 5 is created in which all elements are by default 0  , 0 0 0 0 0 */

 // declaring vector with some size and values..
/*
 vector<int>v(10,3);
 output is 10 times 3 , as a vector of size 10 is created in which all elements are 3 .  3 3 3 3 3 3 3 3 3 3 */ 


 // using push_back  and pop_back -> Both takes o(1) Time
  
  ///vector<int> v(10); 
 /*
 v.push_back(7);
  output is 10 times 0 and one time 7 as it is push back */  
  /*
v.push_back(7);
  v.pop_back();
  output is 10 times 0 and one time 7 which was  push back is popped */  

  // Copying vector ----> T.C -> o(n)  

  /*
  vector<int> v;
v.push_back(7);
v.push_back(6);


vector<int> v2 = v;
v2.push_back(5);
//operations done on v2 is not reflected in v

printvector(v);
printvector(v);
/*
output is when pass by value as copy is passed and 2 is not added in vector v--->
Size is:2
7 6
Size is:2
7 6
Size is:3
7 6 5 
*/ 

/*
output is when pass by refrence as actual vector v is passed and 2 is added in vector v--->
Size is:2
7 6
Size is:3
7 6 2
Size is:3
7 6 5 
*/ 





// printvector(v2);  


// if creating copy as well by refrence 

  vector<int> v;
v.push_back(7);
v.push_back(6);


vector<int> &v2 = v;
v2.push_back(5);
//operations done on v2 is not reflected in v

printvector(v);
printvector(v);
printvector(v2);


/*
output is when pass by refrence as actual vector v is passed to v2  and 2 is added in vector v2 as well --->
Size is:3
7 6 5
Size is:4
7 6 5 2
Size is:5
7 6 5 2 2 

*/ 


/*
output -->

Size is:2
7 6
Size is:3
7 6 5
*/

return 0;
}