//
// Created by kordi on 21.06.2024.
//

#ifndef UNTITLED8_POLY_H
#define UNTITLED8_POLY_H
#pragma once
#include <string>
#include <cmath>
#include <iostream>

class Figure {
public:
    // Czysta wirtualna metoda area()
    virtual double area() const = 0;

    // Czysta wirtualna metoda show()
    virtual void show() const = 0;

    // Wirtualny destruktor
    virtual ~Figure() = default;
};

class Square : public Figure{
private:
    double side;
public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }

    void show() const override {
        std::cout << "Square with side lenght: " << side << " and area: " << area()<< std::endl;
    }
};

class Rectangle : public Figure {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void show() const override {
        std::cout << "Rectangle with width: " << width << ", height: " << height << " and area: " << area()
                  << std::endl;
    }
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void show() const override {
        std::cout << "Circle with radius: " << radius << " and area: " << area() << std::endl;
    }
};
#endif //UNTITLED8_POLY_H
