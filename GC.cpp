// rosalind
// C++

// Computing GC Content

#include <iostream>
#include <string> // getline(), substr(), clear()
#include <algorithm>
#include <iomanip> // setprecision

using namespace std;

int main(){
    
    string line;
    string header;
    string maxHeader;
    string seq;
    double maxGC = 0.0;
    
    while (getline(cin, line)){ // getline(input, string): get the input string as "line" (not as token) --> assign it to string variable.
        
        if (line[0] == '>'){
            
            if (!header.empty()){
                
                
                auto num_G = count(seq.begin(), seq.end(), 'G');
                auto num_C = count(seq.begin(), seq.end(), 'C');
                
                double GC_cont = 100.0 * ((num_G + num_C) / (double)(seq.size()));
                
                if (GC_cont > maxGC || maxHeader.empty()){
                    maxGC = GC_cont;
                    maxHeader = header;
                }
            }
                
            header = line.substr(1); // substr(pos, count) // get the 1st index ~ last index (ex: <12345 --> 12345)
            seq.clear();
            
        }
        else {
            seq += line;
        }
    }
    
    if (!header.empty()){ // deal with last FASTA record which ends with EOF
        
        auto num_G = count(seq.begin(), seq.end(), 'G');
        auto num_C = count(seq.begin(), seq.end(), 'C');
        
        double GC_cont = 100.0 * ((num_G + num_C) / (double)(seq.size()));
        
        if (GC_cont > maxGC || maxHeader.empty()){
            maxGC = GC_cont;
            maxHeader = header;
        }
    }
    
    cout << maxHeader << '\n';
    cout << fixed << setprecision(6) << maxGC << '\n';
}
