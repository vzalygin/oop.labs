class Jeep2 {
private:
  char *model;
  int fuel_volume;
  int consumption;

public:
  Jeep2(char *model, int fuel_volume, int consumption);
  void print();
  int get_power_reserve();
};