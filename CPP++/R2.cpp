#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, c;
    std::cin >> a >> b;
    b *= 2;
    c = b - a;
    std::cout << c << std::endl;
}
