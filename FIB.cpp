// rosalind
// C++

// Rabbits and Recurrence Relations

#include <iostream>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;
    
    long long last_last = 1; // F1
    long long last = 1; // F2
    
    while (n > 2){
        long long now = k*(last_last) + last; // F_n = F_n-1 + k*F_n-2
        last_last = last; // update F_n-2
        last = now; // update F_n-1
        
        n--;
    }
    
    cout << last << endl;
}
