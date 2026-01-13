#include<iostream>
using namespace std;

int main(){
    int n=8;

    for(int i=0;i<n;i++){ // Outer
        char ch = 'A';
        for(int j=0; j<n; j++){ //Inner starts -> line starts.
            cout << ch;
            ch = ch +1; //65 + 1 ->
        }cout<<endl;
    }
    return 0;
}