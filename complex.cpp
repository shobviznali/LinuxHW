#include <iostream>
#include "complex.hpp"
#include <cmath>

// implementation of default constructor
Complex::Complex() = default;

// implementation of constructor with arguments
Complex::Complex(float real, float imaginary): real(real), imaginary(imaginary){}

// implementation of + operator
Complex Complex::operator+(const Complex& other)
{
  Complex sum;
  sum.real = real + other.real;
  sum.imaginary = imaginary + other.imaginary;

  return sum;
} 

// implementation of - operator
Complex Complex::operator-(const Complex& other)
{
  Complex dif;
  dif.real = real - other.real;
  dif.imaginary = imaginary - other.real;

  return dif;
}

// implementation of * from right
Complex Complex::operator*(float other)
{
  Complex mul;
  mul.real = real * other;
  mul.imaginary = imaginary * other;

  return mul;
}

// implementation of function AbsoluteVal
float Complex::AbsoluteValue()
{
  return sqrt(real + imaginary);
}

// implementation of * from left
Complex operator*(float other, Complex num)
{
  Complex mul;
  mul.real = other * num.real;
  mul.imaginary = other * num.imaginary;

  return mul;
}