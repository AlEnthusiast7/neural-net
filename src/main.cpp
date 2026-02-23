#include <iostream>
#include "Matrix.h"

int main()
{
  Matrix test(3, 4);
  Matrix test2(4,3);

  test.randomize();
  test2.randomize();

  Matrix result = Matrix::dot(test, test2);
  result.print();

  return 0;
}
