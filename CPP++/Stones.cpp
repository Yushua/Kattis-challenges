#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N;
	std::cin>>N;
    if (N%2 == 1)
        std::cout << "Alice" << std::endl;
    else
        std::cout << "Bob" << std::endl;
    return 0;
}
