#include "../header/rectangle.hpp"

void Rectangle::set_width(double w) {
    this->width = w;
}

void Rectangle::set_height(double h) {
    this->height = h;
}

double Rectangle::area() {
    return this->width * this->height;
}