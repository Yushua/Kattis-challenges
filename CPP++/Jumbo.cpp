#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N, i = 0, x = 0, y;
    std::cin >> N;
    std::cin >> y;
    x += y;
    while (i < N){
        std::cin >> y;
        x += y;
        x--;
        i++;
    }
    std::cout << x << std::endl;
}
