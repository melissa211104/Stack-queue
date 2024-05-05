#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int angka[N];
    
    for(int i = 0; i < N; i++){
        cin >> angka[i];
    }
    
    for(int i = 1; i < N; i += 2){
        cout << angka[i] << " ";
    }
    return 0;
}