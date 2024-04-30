#ifndef CIRCLE
#define CIRCLE
#include "Shape2D.h"
#include <string>
class Circle : Shape2D {
private:
  float radius;
  void calculateArea() override;

public:
  Circle();
  void scale(float scaleFactor) override;
  void showInfo() override;
  std::string getName() override;
};
#endif