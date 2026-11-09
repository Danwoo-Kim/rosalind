// rosalind
// C++

// Finding a Motif in DNA

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string DNA;
    string motif;
    getline(cin, DNA);
    getline(cin, motif);
    
    size_t start = 0;
    
    while (true){
        size_t pos =  DNA.find(motif, start);
        if (pos == string::npos){
            break;
        }
        
        cout << pos + 1 << ' ';
        start = pos + 1;
    }
}



