#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>=2){
        cout<<n%3<<" ";
        n--;
    }
    cout<<endl;
    return 0;
}