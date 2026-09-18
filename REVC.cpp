// rosalind
// C++

// Complementing a Strand of DNA

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    
    string seq;
    cin >> seq;
    
    for (char& base : seq){
        
        if (base == 'T'){
            base = 'A';
        }
        else if (base == 'A'){
            base = 'T';
        }
        else if (base == 'G'){
            base = 'C';
        }
        else if (base == 'C'){
            base = 'G';
        }
        
    }
    
    reverse(seq.begin(), seq.end());
    cout << seq << endl;
}
