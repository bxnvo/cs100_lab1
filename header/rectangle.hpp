#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        double width;
        double height;
    public:
        void set_width(double w);
        void set_height(double h);
        double area();
};

#endif /* RECTANGLE_HPP */