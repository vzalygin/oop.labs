#include "jeep2.h"
#include <iostream>

using namespace std;

Jeep2::Jeep2(char *model, int fuel_volume, int consumption)
    : model(model), fuel_volume(fuel_volume), consumption(consumption) {}

void Jeep2::print() {
  cout << "Jeep; model: " << model << "; fuel_volume: " << fuel_volume
       << "; consumption: " << consumption << ";" << endl;
}

int Jeep2::get_power_reserve() { return (fuel_volume * 100) / consumption; }