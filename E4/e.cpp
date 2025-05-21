#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Car {
protected:
    bool fuelSystemActive = false;
    bool electricalSystemActive = false;

public:
    virtual string start() {
        fuelSystemActive = true;
        electricalSystemActive = true;
        return "Fuel system activated.\nElectrical system activated.\n";
    }

    virtual ~Car() = default;
};

class Pride : public Car {
    string enableRadio() {
        return "Radio enabled.\n";
    }

public:
    string start() override {
        string output = Car::start();
        output += enableRadio();
        return output;
    }
};

class BMW : public Car {
    string initGPS() {
        return "GPS enabled.\n";
    }

    string activateSportMode() {
        return "Sport mode activated.\n";
    }

    string turnOnRadio() {
        return "Radio enabled.\n";
    }

public:
    string start() override {
        string result = Car::start();
        result += initGPS();
        result += activateSportMode();
        result += turnOnRadio();
        return result;
    }
};

int main() {
    Car* prideCar = new Pride();
    Car* bmwCar = new BMW();

    cout << "Pride:\n" << prideCar->start() << endl;
    cout << "BMW:\n" << bmwCar->start() << endl;

    delete prideCar;
    delete bmwCar;

    return 0;
}
