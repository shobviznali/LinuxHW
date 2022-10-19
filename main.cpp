#include <iostream>
#include "complex.hpp"

// sorting Complex numbers with their absolute value
void InsertionSort(Complex arr[], std::size_t size)
{
  Complex temp;
  float value;
  std::size_t j;

  // starting sorting
  for(std::size_t i = 0; i < size; ++i)
    {
      temp = arr[i];
      value = arr[i].AbsoluteValue();
      j = i;

      // 
      while(j > 0 && arr[j - 1].AbsoluteValue() > value)
        {
          arr[j] = arr[j - 1];
          --j;
        }
      // putiing in the right postiton
      arr[i] = temp;
    }
}

int main() {
  std::cout << "Chem hascrel main-i mej grem" << std::endl;
}