#include <bits/stdc++.h>
using namespace std;

// underlying data structure in vector is array, for list and deque is linkedlist.

void explainList(){
    // everything is same as vector only new fuctions are 
    
    list<int> ls = {6, 7};
    ls.push_front(5);
    ls.push_back(8);
    
    for(auto itr : ls){
        cout << itr << " ";
    }
    cout << endl;
}

void explaindeque(){
    
    deque<char> d = {'b','c'};
    d.push_front('a');
    
    for(auto itr : d){
        cout << itr << " ";
    }
    cout << endl;
}

void explainStack() {
    // LIFO : Last In First Out
    stack<int> st;
    st.push(11);
    st.push(22);
    st.push(33);
    
    cout << st.size() << endl;
    
    // printing stack
    while(st.empty() == false){
        cout << st.top() << endl;
        st.pop();
    }
}

void explainQueue() {
    // FIFO : First In First Out
    queue<int> q;
    q.push(7);
    q.push(11);
    q.push(13);
    q.push(17);
    q.push(19);
    
    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }
    cout<< endl;
}

void explainPriorityQueue(){
    // stores the largest element at the top
    priority_queue<int> pq;
    // if wanna store smallest at top write
    // priority_queue<int, vector<int>, greater<int>> pq;
    
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);
    
    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main() {
    
    explainList();
    explaindeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    
}