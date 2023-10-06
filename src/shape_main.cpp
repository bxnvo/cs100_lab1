#include <iostream>
#include <string>
#include <sstream>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    char shape;
    string input;
    double area;
    double height;
    stringstream ss;

    cout << "Enter t to select a triangle or r for a rectangle: ";

    cin >> shape;

    if (shape == 't')
    {
        Triangle tri;
        double base;
        cout << "Enter the base: ";
        cin.ignore();
        getline(cin, input);
        ss.str(input);
        ss >> base;
        if (!ss.eof() || base < 0)
        {
            cout << "Invalid output" << endl;
            return 0;
        }
        else
        {
            tri.set_base(base);
        }
        cout << "Enter the height: ";
        input.clear();
        ss.clear();
        ss.str("");
        getline(cin, input);
        ss.str(input);
        ss >> height;
        if (!ss.eof() || height < 0)
        {
            cout << "Invalid output" << endl;
            return 0;
        }
        else
        {
            tri.set_height(height);
        }

        area = tri.area();

        cout << endl << "The area of the given triangle is: " << area << endl;
    }

    else if (shape == 'r')
    {
        Rectangle rect;
        double width;

        cout << "Enter the width: ";
        cin.ignore();
        getline(cin, input);
        ss.str(input);
        ss >> width;
        if (!ss.eof() || width < 0)
        {
            cout << "Invalid output" << endl;
            return 0;
        }
        else
        {
            rect.set_width(width);
        }
        cout << "Enter the height: ";
        input.clear();
        ss.clear();
        ss.str("");
        getline(cin, input);
        ss.str(input);
        ss >> height;
        if (!ss.eof() || height < 0)
        {
            cout << "Invalid output" << endl;
            return 0;
        }
        else
        {
            rect.set_height(height);
        }

        area = rect.area();

        cout << endl << "The area of the given rectangle is: " << area << endl;
    }

    else
    {
        cout << "Invalid output" << endl;
    }

    return 0;
}