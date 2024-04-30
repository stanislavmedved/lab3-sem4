#ifndef TRIANGLE
#define TRIANGLE
#include "Shape2D.h"
#include <string>
class Triangle : Shape2D {
private:
  float base;
  float height;
  void calculateArea() override;

public:
  Triangle();
  void scale(float scaleFactor) override;
  void showInfo() override;
  std::string getName() override;
};
#endif