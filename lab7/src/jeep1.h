class Jeep1 {
private:
  char *model;
  int fuel_volume;
  int consumption;

public:
  void init(char *model, int fuel_volume, int consumption);
  void print();
  int get_power_reserve();
};