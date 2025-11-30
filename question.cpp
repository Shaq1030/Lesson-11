#include <iostream>

class Shape {
private:
    int numSides;
public:
    Shape(): numSides(1) {}
    Shape(int n): numSides(n) {}
    void print() const { std::cout << numSides << "\n"; }
};

int main() {
    std::cout << std::endl;

    Shape s;
    s.print();

    std::cout << std::endl;
    return 0;
}