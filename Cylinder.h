#ifndef CYLINDER
#define CYLINDER
#include "Circle.h"
#include "Shape3D.h"
#include <string>
class Cylinder : Shape3D {
private:
  float height;
  Circle base;
  void calculateVolume() override;

public:
  void scale(float scaleFactor) override;
  void showInfo() override;
  std::string getName() override;
};
#endif