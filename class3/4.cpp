class Vehicle{
  int speed;
public:
  int payToll();
};

class Car : public Vehicle{ //Car is a Vechicle, IS_A kind of
  string color;
};

class Bus: public Vehicle{
  int numPassengers;
};
