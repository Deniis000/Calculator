#include <iostream>
#include <bits/stdc++.h>
#include <ctime>

int main() {
        std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
        std::srand (std::time (0));
        for (int i = 0; i < 10; i++)
        std::cout << std::rand ()%6 + 70 << std::endl;
        return 0;
}

