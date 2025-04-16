#include <iostream>

class Benz {
public:
    bool startEngine() {
        if (startElectronicServices() && startLightSystem()) {
            std::cout << "Engine started successfully." << std::endl;
            return true;
        }
        std::cout << "Failed to start engine." << std::endl;
        return false;
    }

private:
    bool startElectronicServices() {
        std::cout << "Electronic services started." << std::endl;
        return true; // می‌توانید این مقدار را بر اساس شرایط واقعی تغییر دهید
    }

    bool startLightSystem() {
        std::cout << "Light system started." << std::endl;
        return true; // می‌توانید این مقدار را بر اساس شرایط واقعی تغییر دهید
    }
};

int main() {
    Benz car;
    bool engineStatus = car.startEngine();
    return 0;
}
