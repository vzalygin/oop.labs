#include <iostream>
#include "jeep1.h"

using namespace std;

void Jeep1::init(char *model, int fuel_volume, int consumption) {
  this->model = model;
  this->fuel_volume = fuel_volume;
  this->consumption = consumption;
}

void Jeep1::print() {
  cout << "Jeep; model: " << model << "; fuel_volume: " << fuel_volume
       << "; consumption: " << consumption << ";" << endl;
}

int Jeep1::get_power_reserve() { return (fuel_volume * 100) / consumption; }