#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N, i = 0;
    std::cin >> N;
    float a, b, output;
    while (i < N){
        std::cin >> a >> b;
        output += a * b;
        i++;
    }
    std::cout << output << std::endl;
}
