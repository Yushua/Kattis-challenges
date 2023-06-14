#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N;
    std::cin >> N;
    if ((N % 2) == 0)
        std::cout << "second" << std::endl;
    else
        std::cout << "first" << std::endl;
}
