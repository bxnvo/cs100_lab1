#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle {
    private:
        double base;
        double height;
    public:
        void set_base(double b);
        void set_height(double h);
        double area();
};

#endif /* TRIANGLE.HPP */