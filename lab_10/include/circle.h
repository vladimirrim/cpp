#pragma once

#include "figure.h"

class Circle : public Figure {
public:
    Circle(int id, int x, int y, int radius, const char *label);

    ~Circle();

    void print() const;

    bool is_inside(int x, int y) const;

    void zoom(int factor);

private:
    int radius;
    char *label;
};
