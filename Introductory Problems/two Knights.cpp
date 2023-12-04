#include <iostream>

int main()
{
    int n ;
    std::cin >> n;

    for(long long int i = 1 ; i <= n ; i++)
    {
        std::cout << (i * i)*(i*i - 1)/2 - 4*(i-1)*(i-2);
        std::cout << std::endl;
    }
    return 0;
}