#ifndef COMPLEX
#define COMPLEX

class Complex{
private:
  float real = 0;
  float imaginary = 0;
public:

  // constructor with arguments
  Complex(float real, float imaginary);

  // default constructor
  Complex();

  // + operator
  Complex operator+(const Complex& other);

  // - operator
  Complex operator-(const Complex& other);

  // multiplying from right
  Complex operator*(float other);

  // AbsoluteValue of complex numbers
  float AbsoluteValue();

  // multiplying from left
  friend Complex operator*(float other, Complex num);

};



#endif
