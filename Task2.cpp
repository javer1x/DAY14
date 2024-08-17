#include <iostream>
using namespace std;
class Temperature {
private:
    double celsius; 
public:
    Temperature(double c) : celsius(c) {}
    explicit operator double() const {
        return celsius * 9.0 / 5.0 + 32;
    }
    void display() const {
        std::cout << "Temperature: " << celsius << "°C" << std::endl;
    }
};
int main() {
    Temperature temp(25.0); 
    temp.display(); 
    double fahrenheit = static_cast<double>(temp);
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" <<endl; 
    return 0;
}