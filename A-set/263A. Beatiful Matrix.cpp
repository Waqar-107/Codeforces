
#include <iostream>
#include <cmath>
#include <cstdint>

const int i_center = 3;
const int j_center = 3;
const int n = 5;

int main() {
    int i = 1;
    int j = 1;
    int curr = 0;
    
    while (i <= n){
        j = 1;
        while (j <= n){
            std::cin >> curr;
            if(curr == 1){
                std::cout << (abs(i_center-i)+abs(j_center-j));
                return 0;
            }
            ++j;
        }
        ++i;
    }
}
