// rosalind
// C++

// Transcribing DNA into RNA

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string seq;
    cin >> seq;
    
    for (char& base : seq){
        
        if (base == 'T'){
            base = 'U';
        }
        
        // "range-based for loop" -> for (char base : seq) iterates over each character in seq. (ex: base = seq[0] --> base = seq[1] --> ...)
        // This iteration does not require index.
        
        // char& base: refers to the actual character in seq (not copy). --> reference to original (&)
        // so changing base --> changing seq directly
        
        // on the other hand, "char base" copies each character from seq. so, changing "base" does not actually change seq[i]
        
    }
    
    cout << seq << endl;
}
