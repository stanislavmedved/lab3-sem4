#ifndef SHAPE
#define SHAPE
#include <string>

class Shape {
public:
  void virtual scale(float scaleFactor);
  void virtual showInfo();
  std::string virtual getName();
};
#endif