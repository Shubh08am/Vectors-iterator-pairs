#include <bits/stdc++.h>
using namespace std;

/// Writing a function for printing vector 

void printvector(vector<int> v)
{  

    // also printing size of vector
    //v.size() t.c is also o(1)

    cout << "Size is:"<<v.size()<<endl;


for(int i =0 ; i<v.size( ) ; i++)
{
    cout<<v[i]<< " ";

}
cout<<endl;
}

int main(){

vector<int> v;
int n;
cin>>n;

//inserting values in a vector using push back function , it add value at last

for(int i=0 ; i<n ; i++)
{
    int x;
    cin>>x;
    v.push_back(x);  // T.C O(1)

}
printvector(v);



//creating a vector of type string 

/*
void printvector(vector<string> v)
{  

    // also printing size of vector
    //v.size() t.c is also o(1)

    cout << "Size is:"<<v.size()<<endl;


for(int i =0 ; i<v.size( ) ; i++)
{
    cout<<v[i]<< " ";

}
cout<<endl;
}

int main(){

vector<string> v;
int n;
cin>>n;

//inserting values in a vector using push back function , it add value at last

for(int i=0 ; i<n ; i++)
{
    string x;
    cin>>x;
    v.push_back(x);  // T.C O(1)

}
printvector(v); 
*/
/*
output is -->

5
abc
def
gfh
ijk
lmn
Size is:5
abc def gfh ijk lmn 
*/ 

return 0;
}