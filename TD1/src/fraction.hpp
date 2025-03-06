#pragma once

#include <iostream>

struct Fraction {
    unsigned int numerator;
    unsigned int denominator;

    void display();

    operator float() const;
};

float to_float(Fraction f1);

Fraction add(Fraction const& f1, Fraction const& f2);
Fraction sub(Fraction const& f1, Fraction const& f2);
Fraction mul(Fraction const& f1, Fraction const& f2);
Fraction div(Fraction const& f1, Fraction const& f2);

Fraction operator+=(Fraction& f1, Fraction const& f2);
Fraction operator-=(Fraction& f1, Fraction const& f2);
Fraction operator*=(Fraction& f1, Fraction const& f2);
Fraction operator/=(Fraction& f1, Fraction const& f2);

Fraction operator+(Fraction& f1, Fraction const& f2);
Fraction operator-(Fraction& f1, Fraction const& f2);
Fraction operator*(Fraction& f1, Fraction const& f2);
Fraction operator/(Fraction& f1, Fraction const& f2);
bool operator==(Fraction const& f1, Fraction const& f2);
bool operator!=(Fraction const& f1, Fraction const& f2);

std::ostream& operator<<(std::ostream& os, Fraction const& f1);


