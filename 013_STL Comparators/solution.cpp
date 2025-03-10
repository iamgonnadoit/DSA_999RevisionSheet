#include<bits/stdc++.h>
using namespace std;

bool internalComparator(pair<int,int> el1, pair<int,int> el2){
  if(el1.second > el2.second) return true;
  if(el2.second < el2.second) return false;
  if(el1.first < el2.first) return true;
  return false;
}

void explainComparator(){

  pair<int, int> arr[] = {{1,6}, {1,5}, {2,6}, {2,9}, {3,9}};
  sort(arr, arr+5, internalComparator);
  for(auto i : arr){
    cout << "{"<<i.first << "," <<i.second<<"} ";
  }
}

int main(){
  explainComparator();
}