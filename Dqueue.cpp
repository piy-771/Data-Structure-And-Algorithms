#include <iostream>
#include <queue>
using namespace std;
int main(){
deque<int>q;
q.push_front(100);
q.push_back(200);
q.push_back(300);
q.push_front(400);
while(!q.empty()){
    cout<<q.front()<<"\t";
    q.pop_front();
}
}
