#include <iostream>
using namespace std;

class Stove {
private:
    int temperature = 0;

public:
    Stove(int setTemperature) {
        setTemperatureValue(setTemperature);
    }

    void setTemperatureValue(int temperature) {
        if (temperature < 0) {
            this->temperature = 0;
        } else if (temperature >= 10) {
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }
    }

    int getTemperature() const {
        return temperature;
    }
};

int main() {
    Stove stove(0);
    stove.setTemperatureValue(100000);
    cout << "The temperature setting is: " << stove.getTemperature() << endl;
    return 0;
}
