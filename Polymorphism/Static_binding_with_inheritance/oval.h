#ifndef OVAL_H
#define OVAL_H
#include"shape.h"

class Oval:public Shape{
    private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
    public:
    Oval() = default;
    Oval(double x_radius,double y_radius,std::string_view description);
    ~Oval();
    void draw()
    {
        std::cout<<"Oval Draw called: "<<"x_radius: "<<m_x_radius<<"  y_radius: "<<m_y_radius<<"  m_description: "<<m_description<<std::endl;
    }
    protected:
    double get_x_radius()
    {
        return m_x_radius;
    }
    double get_y_radius()
    {
        return m_y_radius;
    }
};
#endif