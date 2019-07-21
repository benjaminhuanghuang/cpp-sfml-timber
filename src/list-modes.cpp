#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespace"
using namespace sf;

#include <iostream>

std::ostream& operator<<(std::ostream& out, sf::VideoMode vm) {
    return out << "{" << vm.width << ", " << vm.height << "}";
}

int main(int, char const**)
{
    std::cout << "Desktop: " << sf::VideoMode::getDesktopMode() << std::endl;
    return 0;
}
 