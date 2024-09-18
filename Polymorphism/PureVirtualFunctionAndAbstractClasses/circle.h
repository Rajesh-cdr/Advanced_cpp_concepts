#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"
#include<string_view>

class Circle:public Shape{
    private:
    double m_radius{0.0};
    inline static double PI{3.1415};
    public:
    Circle() = default;
    Circle(double radius,std::string_view description);
    virtual ~Circle() = default;

    virtual double perimeter() override
    {
        return (2 * PI*m_radius);
    }
    virtual double surface()override
    {
        return PI * m_radius *m_radius;
    }
};

#endif// CIRCLE_H