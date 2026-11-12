// rosalind
// C++

// Calculating Protein Mass

#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

unordered_map <char, double> massMap = {
    {'A', 71.03711},
    {'C', 103.00919},
    {'D', 115.02694},
    {'E', 129.04259},
    {'F', 147.06841},
    {'G', 57.02146},
    {'H', 137.05891},
    {'I', 113.08406},
    {'K', 128.09496},
    {'L', 113.08406},
    {'M', 131.04049},
    {'N', 114.04293},
    {'P', 97.05276},
    {'Q', 128.05858},
    {'R', 156.10111},
    {'S', 87.03203},
    {'T', 101.04768},
    {'V', 99.06841},
    {'W', 186.07931},
    {'Y', 163.06333},
};

int main(){
    
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    
    ifstream inputFile("input/" + filename);
    
    if (!inputFile.is_open()){
        cout << "Cannot open the file." << endl;
        return 1;
    }
    
    string ptn;
    double mass = 0;
    inputFile >> ptn;
    
    for (char p : ptn){
        auto it =  massMap.find(p);
        mass += it->second;
    }
    
    cout << fixed << setprecision(5) << mass << endl;
}



