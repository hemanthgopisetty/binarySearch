#include<bits/stdc++.h>

using namespace std;

int main()
{
    int key=5;
    vector<int>a{1,2,3,4,5,6,7,8,9};
    cout<<boolalpha<<binary_search(a.begin(),a.end(),key);
    return 0;
}
/*
Return value
    ->true if an element equivalent to value is found, false otherwise.

*/