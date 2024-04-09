#pragma once

#include "Shape.hpp"

class Polygon : public Shape
{
public:
    Polygon();
    Polygon(int valX, int valY, int valSides);
    int getSides();

private:
    int sides;
};