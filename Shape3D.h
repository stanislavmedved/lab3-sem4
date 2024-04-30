#ifndef SHAPE3D
#define SHAPE3D
#include "Shape.h"
class Shape3D : Shape {
private:
  float volume;
  void virtual calculateVolume();
public:
  float getVolume();
  bool operator>(const Shape3D& other) const;
  bool operator<(const Shape3D& other) const;
  bool operator==(const Shape3D& other) const;
};
#endif