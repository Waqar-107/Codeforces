
#include <iostream>
#include <string>
using std::string;
 
int main()
{
    string str;
    int len;
    std::cin >> len >> str;
    int count = 0;
    len = len - 1;
    for(int i = 0; i < len; ++i)
        if(str[i] == str[i+1])
            count += 1;
    
    std::cout << count;
    return 0;
}