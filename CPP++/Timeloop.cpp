#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int loop, i = 1;
    std::cin >> loop;
    while (i <= loop){
        std::cout << i << " Abracadabra" << std::endl;
        i++;
    }
    return 0;
}
