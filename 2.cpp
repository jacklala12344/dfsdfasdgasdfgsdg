#include <iostream>
#include <cmath>
#define PI 3.14159


void takeInput(float &radius)
{
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
}


float calculateCircumference(float radius)
{
    return (2 * PI * radius);
}


float calculateArea(float radius)
{
    return (PI * pow(radius, 2));
}

int main()
{
    float radius, circumference, area;
    takeInput(radius);
    circumference = calculateCircumference(radius);
    area = calculateArea(radius);

    std::cout << "Circumference of the circle = " << circumference << std::endl;
    std::cout << "Area of the circle = " << area << std::endl;

    return 0;
}
