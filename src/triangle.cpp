#include "../header/triangle.hpp"

void Triangle::set_base(double b) {
    this->base = b;
}

void Triangle::set_height(double h) {
    this->height = h;
}

double Triangle::area() {
    return (0.5) * this->base * this->height;
}
