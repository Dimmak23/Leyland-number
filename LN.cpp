#include <iostream>
#include <cmath>

int main(){
    
    long long input;
    
    std::cout << "\nEnter quest number: ";
    std::cin >> input;
    
    int s;
    bool k = true;
    long long chk;
    
    s = log(input)/log(2);
    
    for(int i=2;i<=s;i++) {
        for(int j=2;j<=s;j++) {
            chk = pow(i,j)+pow(j,i);
            if (chk == input) {
                std::cout << "\nThis is Leyland number, also [a,b] pair for it: a="<<i<<"; b="<<j<<".\n";
                k = false;
            }
            if (!k) break;
        }
    }
    if (k) std::cout<<"\nNot a Leyland number!\n";
    
    return 0;
}