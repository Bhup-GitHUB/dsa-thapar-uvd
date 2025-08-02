#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    void getCelsius() {
        cout << "Enter the temperature in Celsius: ";
        cin >> celsius;
    }

    float toFahrenheit() {
        return (celsius * 9 / 5) + 32;
             //prints the celsius temperature in fahrenheit
    }

    void displayFahrenheit() {
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << "°F" << endl;
    }
};

int main() {
    Temperature t;
    t.getCelsius();
    t.displayFahrenheit();
    return 0;
}
