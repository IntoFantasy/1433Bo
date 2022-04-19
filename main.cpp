#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n;
priority_queue<int,vector<int>,greater<>> road;
vector<int> a;

int main() {
    std::cin>>n;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    road.push(a.front());
    long long answer=0;
   for(int i=1;i<n;++i){
       if(a[i]>road.top()){
           answer += a[i]-road.top();
           road.pop();
           road.push(a[i]);
           road.push(a[i]);
       }
       else road.push(a[i]);
   }

   cout<<answer;
    return 0;
}
