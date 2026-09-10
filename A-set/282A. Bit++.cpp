
#include <iostream>
#include <string>

int main(){
    int n;
    int value = 0;
    std::string str;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i){
        std::cin >> str;
        value = value + ((str[0] == '-' ||  str[2] == '-') ? (-1):1);
    }
    
    std::cout << value;
    return 0;
}