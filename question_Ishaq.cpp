
// - main() constructs Shape, Rectangle, and Triangle and calls their print() methods
#include <iostream>

// Base type representing a generic shape, holding the number of sides
class Shape {
private:
    int numSides;
public:
    // Default to 1 side unless otherwise specified
    Shape(): numSides(1) {}
    // Allow construction with an explicit side count
    Shape(int n): numSides(n) {}
    // Virtual so derived classes can override print behavior
    virtual void print() const { std::cout << numSides << "\n"; }
};

// Rectangle is-a Shape with length and width
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Default rectangle: 4 sides, zero dimensions
    Rectangle(): Shape(4), length(0), width(0) {}
    // Initialize with provided dimensions
    Rectangle(double l, double w): Shape(4), length(l), width(w) {}
    // Area formula: length * width
    double area() const { return length * width; }
    void print() const override {
        // Print base data (number of sides), then rectangle-specific members
        Shape::print();
        std::cout << length << "\n" << width << "\n";
    }
};

// Triangle is-a Shape with base and height
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    // Default triangle: 3 sides, zero dimensions
    Triangle(): Shape(3), base(0), height(0) {}
    // Initialize with provided dimensions
    Triangle(double b, double h): Shape(3), base(b), height(h) {}
    // Area formula: 0.5 * base * height
    double area() const { return 0.5 * base * height; }
    void print() const override {
        // Print base data (number of sides), then triangle-specific members
        Shape::print();
        std::cout << base << "\n" << height << "\n";
    }
};

int main() {
    // Construct a generic Shape and print its number of sides
    Shape s;
    s.print();

    // Construct a Rectangle and print number of sides, length, and width
    Rectangle r;
    r.print();

    // Construct a Triangle and print number of sides, base, and height
    Triangle t;
    t.print();

    // Program complete
    return 0;
}
