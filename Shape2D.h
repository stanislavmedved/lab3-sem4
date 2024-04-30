#ifndef SHAPE2D
#define SHAPE2D
#include "Shape.h"
class Shape2D : Shape {
private:
  float area;

  void virtual calculateArea();

public:
  float getArea();
  bool operator>(const Shape2D &other) const;
  bool operator<(const Shape2D &other) const;
  bool operator==(const Shape2D &other) const;
};
#endif