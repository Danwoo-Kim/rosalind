// rosalind
// C++

// Calculating Expected Offspring

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    
    ifstream inputFile("input/" + filename);
    
    if (!inputFile.is_open()){
        cout << "Cannot open the file." << endl;
        return 1;
    }
    
    vector<int> numVec;
    vector<float> prob = {1, 1, 1, 0.75, 0.5, 0};
    int num;
    float res = 0;
    
    while (numVec.size() < 6 && inputFile >> num){
        numVec.push_back(2*num);
    }
    
    for (int i = 0; i < 6; i++){
        res += numVec[i] * prob[i];
    }
    
    cout << res << endl;
    
}



