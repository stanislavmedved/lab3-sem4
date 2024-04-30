#ifndef TRIANGULAR_PYRAMID
#define TRIANGULAR_PYRAMID
#include "Shape3D.h"
#include "Triangle.h"
#include <string>
class TriangularPyramid : Shape3D {
private:
  float height;
  Triangle base;
  void calculateVolume() override;
public:
  TriangularPyramid();
  
  void scale(float scaleFactor) override;
  void showInfo() override;
  std::string getName() override;
};
#endif