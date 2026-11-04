// rosalind
// C++

// Mendel's First Law

#include <iostream>
using namespace std;

double cal_prob(double k, double m, double n){
    double total = k+m+n;
    
    double complement_prob = (m*(m-1)/((total)*(total-1)))*(1.0/4.0) + ((m*n)/((total)*(total-1))) + (n*(n-1)/((total)*(total-1)));
    
    return (1 - complement_prob);
}

int main(){
    double k, m, n;
    
    cin >> k >> m >> n;
    
    cout << cal_prob(k, m, n) << '\n';
    
}

