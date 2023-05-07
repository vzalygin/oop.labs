#include "jeep1.h"
#include "jeep2.h"
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  Jeep1 j1;
  j1.init("ford focus", 30, 10);
  j1.print();
  cout << "power reverse is " << j1.get_power_reserve() << endl;

  Jeep2 j2("mazda cx5", 55, 15);
  j2.print();
  cout << "power reserve is " << j2.get_power_reserve() << endl;

  return 0;
}