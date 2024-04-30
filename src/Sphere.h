#ifndef SPHERE
#define SPHERE
#include "Shape3D.h"
class Sphere: Shape3D{
private:
  float radius;
  void calculateVolume() override;

public:
  Sphere(float rad);
  //void scale(float scaleFactor) override;
  //void showInfo() override;
  //std::string getName() override;
};
#endif