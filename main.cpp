#include <iostream>
#include <map>
#include <queue>
#include <ctime>
#include <list>
using namespace std;

void inf(){

};
int main() {
    queue<int,list<int>> a;
    map<int,int> b;

    unsigned int start_time =  clock();
    for(int i=0;i<100000;i++){
        int temp=rand();
        a.push(temp);
    }

    unsigned int end_time = clock();
    cout<<end_time-start_time<<endl;


    start_time =  clock();
    for(int i=0;i<100000;i++){
        int temp1=rand();
        b[i]=temp1;
    }
    end_time = clock();
    cout<<end_time-start_time<<endl;

    
    return 0;
}
