#include <iostream>
using namespace std;

class Vehicle {
protected:
  int id;
  string reg_no;
  string type;
  string rate;

public:
  Vehicle(int id, string reg_no, string type, int rate) {
    this->id = id;
    this->reg_no = reg_no;
    this->type = type;
    this->rate = rate;
  }
  string getRegistrationNumber() {return this->reg_no;}
  string getRate() {return this->rate;}
};

class Bike : public Vehicle {
public:
  Bike(int id, string reg_no, string type, int rate = 20)
      : Vehicle(id, reg_no, type, rate) {}
};
class Car : public Vehicle {
public:
  Car(int id, string reg_no, string type, int rate = 50)
      : Vehicle(id, reg_no, type, rate) {}
};
class Truck : public Vehicle {
public:
  Truck(int id, string reg_no, string type, int rate = 100)
      : Vehicle(id, reg_no, type, rate) {}
};

class TollSystem {
private:
  Vehicle *vehicle;
  int total;

public:
  TollSystem() {}
  void passVehicle(int id, string reg_no, string type, bool vip) {
    int amount = 0;
    if (type == "bike") {
      vehicle = new Bike(id, reg_no, type);
      amount = 20;
    } else if (type == "car") {
      vehicle = new Car(id, reg_no, type);
      amount = 50;
    } else if (type == "truck") {
      vehicle = new Truck(id, reg_no, type);
      amount = 100;
    }
    if(vip){
        amount = (amount*20) / 100;
        total += amount;
    } else {
        total += amount;
    }
  }
  int getTotalCollections() { return this->total; }
  void getvehicleBill(){
    //Output: Vehicle TN-01-1234 passed. Toll: 50
    cout << "Output: Vehicle " << this->vehicle->getRegistrationNumber() << " passed. ";
    cout << "Toll: " << this->vehicle->getRate() << " \n\n";
  }
};

int main() {
  int n;
  TollSystem t1;
  int c=0;
  do {
    cout << "Enter the following numbers for following operations\n";
    cout << "1. Pass the Toll gate \n";
    cout << "2. Total Collection \n";
    cout << "3. Exit \n";
    cin >> n;
    
    if (n == 1) {
        cout << "\nEnter Vehicle Type (bike/car/truck): ";
        string type; cin >> type;
        cout << "\nEnter Reg Number (TN-01-1234): ";
        string reg_no; cin >> reg_no;
        cout <<  "\nIs VIP? (1 for Yes, 0 for No): ";
        bool vip; cin >> vip;
        t1.passVehicle(c,reg_no,type, vip);
        c++;
        t1.getvehicleBill();
    } else if (n == 2) {
        cout << "Total Collection: " << t1.getTotalCollections() <<"\n"; 
    } else if (n == 3) {
        break;
    } else {
      cout << "Wrong Input";
    }
  } while (true);

  return 0;
}