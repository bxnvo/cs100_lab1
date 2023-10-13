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
    bool invalid;
    Triangle tri;
    double base;
    Rectangle rect;
    double width;
    


    do {

        invalid = false;

    cout << "Enter t to select a triangle or r for a rectangle: ";

    cin >> shape;

    if (shape == 't')
    {
        cout << "Enter the base: ";
        cin.ignore();
        input.clear();
        ss.clear();
        ss.str("");
        getline(cin, input);
        ss.str(input);
        ss >> base;
        if (!ss.eof() || base < 0)
        {
            cout << "Invalid output" << endl;
            invalid = true;
            continue;
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
            invalid = true;
            continue;
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

        cout << "Enter the width: ";
        cin.ignore();
        input.clear();
        ss.clear();
        ss.str("");
        getline(cin, input);
        ss.str(input);
        ss >> width;
        if (!ss.eof() || width < 0)
        {
            cout << "Invalid output" << endl;
            invalid = true;
            continue;
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
            invalid = true;
            continue;
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
        invalid = true;
    }

    } while (invalid);

    return 0;
}