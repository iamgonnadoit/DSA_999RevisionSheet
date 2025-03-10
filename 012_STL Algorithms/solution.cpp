#include<bits/stdc++.h>
using namespace std;

void explainSort(){

      int arr[5] = {6,7,1,2,0};

      // sorting middle 3 elements only
      sort(arr+1, arr+4);

      for(auto i : arr){
          cout << i << " ";
      } 
      cout << endl;
    
    vector<int> v = {5,7,1,0,1};
    
    // sorting entire vector
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

void explainAccumulate() {
    
    int arr[5] = {6,2,1,7,0};
    cout << accumulate(arr, arr + 5, 0) << endl; // 0 is the initial sum
}

void explainCount() {
    int arr[5] = {6,2,1,1,0};
    int num = 1;
    cout << count(arr, arr + 5, num) << endl; // 1 appears twice
}

void explainFind(){
    int arr[5] = {6, 2, 1, 1, 0};
    int n;
    cin >> n;
    auto it = find(arr, arr+5, n);
    
    if (it == arr + 5){
        cout << "not found" << endl;
    }
    else {
        cout << "found";
    }
}

void explainNextPermutation() { // prints in ascending order
    string str = "abcd";
    do {
        cout << str << endl;
    }while(next_permutation(str.begin(), str.begin() + 3));
    
    //prev_permutation() -> prints in reverse order till abcd
}

void explainMaxMin(){
    int arr[] = {7, 6, 5, 10, 9};
    auto max = max_element(arr, arr+5);
    auto min = min_element(arr, arr+5);
    
    cout << *(max) << " " << *(min) << endl;
}

void explainReverse(){
    int arr[] = {7, 6, 5, 10, 9};
    reverse(arr,arr+5);
    
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    explainSort();
    explainAccumulate();
    explainCount();
    explainFind();
    explainNextPermutation();
    explainMaxMin();
    explainReverse();

}