#include <iostream>

class R {
private:
  double x;
  double y;
public:
  R(double x, double y)
    : x(x), y(y) { }

  virtual void met() =0;
};

class S : public R {
public:
  S() : R(0, 0) {}

  virtual void met() override {
    std::cout << "Zalygin V.K." << std::endl;  
  }
};

class Q : public R {
public:
  Q() : R(0, 0) {}  

  virtual void met() override {
    std::cout << "IU6-23B" << std::endl;
  }
};

void foo(R * bar) {
  bar->met();
}

int main() {
  S * s = new S;
  Q * q = new Q;
  foo(s);
  foo(q);
}