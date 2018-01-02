/*

You are given an array of n integer numbers a1, a2,..,an.Calculate the number of pair of indices (i,j) 
such that 1 ≤ i < j ≤ n and ai xor aj=0

Input format
- First line: 
n denoting the number of array elements
- Second line: 
n space separated integers 
a1, a2, .. ,an.

Output format
Output the required number of pairs.

Constraints 
1 ≤ n ≤ 10^6
1 ≤ ai ≤ 10^9 

*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int length;
    cin>>length;
    int arr[length];
    for(long i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    
    unordered_map<int,int>map;
    long pairs=0;
    for(int i=0;i<length;i++)
    {
        if(map.find(arr[i]) != map.end()){
            pairs+=map[arr[i]];
        }
        map[arr[i]]++;
    }
    
    cout<<pairs;
}