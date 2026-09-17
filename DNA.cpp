// rosalind
// C++

// Counting DNA Nucleotides

#include <iostream>
#include <string>

using namespace std;

int main(){

    string seq;
    cin >> seq;
    
    int countA = 0;
    int countT = 0;
    int countG = 0;
    int countC = 0;
    
    for (int i = 0; i < seq.size(); i++){
        if (seq[i] == 'A'){
            countA++;
        }
        else if (seq[i] == 'T'){
            countT++;
        }
        else if (seq[i] == 'G'){
            countG++;
        }
        else if (seq[i] == 'C'){
            countC++;
        }
    }
    
    cout << countA << ' ' << countC << ' ' << countG << ' ' << countT <<endl;
    
}
