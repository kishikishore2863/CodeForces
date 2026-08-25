//
// Created by Kishi Kishore N on 14/07/26.
//
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"access front element "<<q.front()<<endl;
    q.pop();
    cout<<"access front element "<<q.front()<<endl;


    while (!q.empty()) {
        q.pop();
    }

    //priority queue
    cout<<"priority queue"<<endl;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    cout<<pq.top()<<endl;









    return 0;
}