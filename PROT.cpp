// rosalind
// C++

// Translating RNA into Protein

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    
    string RNA;
    unordered_map<string, char> codonTable;
    string result = "";
    
    getline(cin, RNA);
    
    codonTable.insert({"UUU", 'F'});
    codonTable.insert({"UUC", 'F'});
    codonTable.insert({"UUA", 'L'});
    codonTable.insert({"UUG", 'L'});
    codonTable.insert({"UCU", 'S'});
    codonTable.insert({"UCC", 'S'});
    codonTable.insert({"UCA", 'S'});
    codonTable.insert({"UCG", 'S'});
    codonTable.insert({"UAU", 'Y'});
    codonTable.insert({"UAC", 'Y'});
    codonTable.insert({"UAA", ' '});
    codonTable.insert({"UAG", ' '});
    codonTable.insert({"UGU", 'C'});
    codonTable.insert({"UGC", 'C'});
    codonTable.insert({"UGA", ' '});
    codonTable.insert({"UGG", 'W'});
    codonTable.insert({"CUU", 'L'});
    codonTable.insert({"CUC", 'L'});
    codonTable.insert({"CUA", 'L'});
    codonTable.insert({"CUG", 'L'});
    codonTable.insert({"CCU", 'P'});
    codonTable.insert({"CCC", 'P'});
    codonTable.insert({"CCA", 'P'});
    codonTable.insert({"CCG", 'P'});
    codonTable.insert({"CAU", 'H'});
    codonTable.insert({"CAC", 'H'});
    codonTable.insert({"CAA", 'Q'});
    codonTable.insert({"CAG", 'Q'});
    codonTable.insert({"CGU", 'R'});
    codonTable.insert({"CGC", 'R'});
    codonTable.insert({"CGA", 'R'});
    codonTable.insert({"CGG", 'R'});
    codonTable.insert({"AUU", 'I'});
    codonTable.insert({"AUC", 'I'});
    codonTable.insert({"AUA", 'I'});
    codonTable.insert({"AUG", 'M'});
    codonTable.insert({"ACU", 'T'});
    codonTable.insert({"ACC", 'T'});
    codonTable.insert({"ACA", 'T'});
    codonTable.insert({"ACG", 'T'});
    codonTable.insert({"AAU", 'N'});
    codonTable.insert({"AAC", 'N'});
    codonTable.insert({"AAA", 'K'});
    codonTable.insert({"AAG", 'K'});
    codonTable.insert({"AGU", 'S'});
    codonTable.insert({"AGC", 'S'});
    codonTable.insert({"AGA", 'R'});
    codonTable.insert({"AGG", 'R'});
    codonTable.insert({"GUU", 'V'});
    codonTable.insert({"GUC", 'V'});
    codonTable.insert({"GUA", 'V'});
    codonTable.insert({"GUG", 'V'});
    codonTable.insert({"GCU", 'A'});
    codonTable.insert({"GCC", 'A'});
    codonTable.insert({"GCA", 'A'});
    codonTable.insert({"GCG", 'A'});
    codonTable.insert({"GAU", 'D'});
    codonTable.insert({"GAC", 'D'});
    codonTable.insert({"GAA", 'E'});
    codonTable.insert({"GAG", 'E'});
    codonTable.insert({"GGU", 'G'});
    codonTable.insert({"GGC", 'G'});
    codonTable.insert({"GGA", 'G'});
    codonTable.insert({"GGG", 'G'});
    
    for (int i = 0; i < (RNA.size())/3; i++){
        string sub = RNA.substr(3*i, 3);
        
        if (sub == "UAA" || sub == "UAG" || sub == "UGA"){
            break;
        }
        
        auto it = codonTable.find(sub);
        result += it->second;
    }
    
    cout << result << '\n';

}



