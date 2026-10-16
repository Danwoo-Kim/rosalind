// rosalind
// C++

// Counting Point Mutations

#include <iostream>
#include <string> // getline()

using namespace std;

int main(){
    
    string line1;
    string line2;
    
    int mutation = 0;
    
    getline(cin, line1); // getline(cin, string) : 1) read one line from cin, and store that line into the "string variable" / 2) return the cin (which is input stream)
    // so by just writing getline(cin, line1), the first line of input is stored in line1. similarly, the second line of input is stored in line 2.
    getline(cin, line2);
    
    for (int i = 0; i < line1.size(); i++){
        
        if (line1[i] != line2[i]){
            mutation += 1;
        }
    }
    
    cout << mutation << '\n';
}
