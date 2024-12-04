#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>=5){
        cout<<n%4<<" ";
        n--;
    }
    return 0;
}