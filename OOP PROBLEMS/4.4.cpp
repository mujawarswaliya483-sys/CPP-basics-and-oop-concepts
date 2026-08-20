#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle
{
private:
    int registrationNo;
    string brand;

public:
    // Parameterless Constructor
    Vehicle()
    {
        registrationNo = 0;
        brand = "Unknown";
    }

    // Parameterized Constructor
    Vehicle(int registrationNo, string brand)
    {
        this->registrationNo = registrationNo;
        this->brand = brand;
    }

    // Setters
    void setRegistrationNo(int registrationNo)
    {
        this->registrationNo = registrationNo;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    // Getters
    int getRegistrationNo()
    {
        return registrationNo;
    }

    string getBrand()
    {
        return brand;
    }
};


// Derived Class - Car
class Car : public Vehicle
{
private:
    int numberOfSeats;

public:
    // Parameterless Constructor
    Car() : Vehicle()
    {
        numberOfSeats = 0;
    }

    // Parameterized Constructor
    Car(int registrationNo, string brand, int numberOfSeats)
        : Vehicle(registrationNo, brand)
    {
        this->numberOfSeats = numberOfSeats;
    }

    // Setter
    void setNumberOfSeats(int numberOfSeats)
    {
        this->numberOfSeats = numberOfSeats;
    }

    // Getter
    int getNumberOfSeats()
    {
        return numberOfSeats;
    }

    // Member Function
    void displayCar()
    {
        cout << "Registration No: " << getRegistrationNo() << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Number of Seats: " << getNumberOfSeats() << endl;
    }
};


// Derived Class - Bike
class Bike : public Vehicle
{
private:
    int engineCC;

public:
    // Parameterless Constructor
    Bike() : Vehicle()
    {
        engineCC = 0;
    }

    // Parameterized Constructor
    Bike(int registrationNo, string brand, int engineCC)
        : Vehicle(registrationNo, brand)
    {
        this->engineCC = engineCC;
    }

    // Setter
    void setEngineCC(int engineCC)
    {
        this->engineCC = engineCC;
    }

    // Getter
    int getEngineCC()
    {
        return engineCC;
    }

    // Member Function
    void displayBike()
    {
        cout << "Registration No: " << getRegistrationNo() << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Engine CC: " << getEngineCC() << endl;
    }
};


int main()
{
    // Variables for parameterized objects
    int regNo;
    string brand;
    int seats;
    int engine;

    // -------------------------------------------------
    // 1. Vehicle Objects
    // -------------------------------------------------

    // Parameterless Vehicle object
    Vehicle v1;

    // Using setters
    v1.setRegistrationNo(1000);
    v1.setBrand("Maruti");

    // Parameterized Vehicle object
    cin >> regNo;
    cin >> brand;

    Vehicle v2(regNo, brand);


    // -------------------------------------------------
    // 2. Car Objects
    // -------------------------------------------------

    // Parameterless Car object
    Car c1;

    // Using setters
    c1.setRegistrationNo(1003);
    c1.setBrand("Toyota");
    c1.setNumberOfSeats(5);

    // Parameterized Car object
    cin >> regNo;
    cin >> brand;
    cin >> seats;

    Car c2(regNo, brand, seats);


    // -------------------------------------------------
    // 3. Bike Objects
    // -------------------------------------------------

    // Parameterless Bike object
    Bike b1;

    // Using setters
    b1.setRegistrationNo(2000);
    b1.setBrand("Yamaha");
    b1.setEngineCC(150);

    // Parameterized Bike object
    cin >> regNo;
    cin >> brand;
    cin >> engine;

    Bike b2(regNo, brand, engine);


    // -------------------------------------------------
    // Display all objects using getters
    // -------------------------------------------------

    cout << "\nVehicle 1:" << endl;
    cout << "Registration No: " << v1.getRegistrationNo() << endl;
    cout << "Brand: " << v1.getBrand() << endl;

    cout << "\nVehicle 2:" << endl;
    cout << "Registration No: " << v2.getRegistrationNo() << endl;
    cout << "Brand: " << v2.getBrand() << endl;

    cout << "\nCar 1:" << endl;
    c1.displayCar();

    cout << "\nCar 2:" << endl;
    c2.displayCar();

    cout << "\nBike 1:" << endl;
    b1.displayBike();

    cout << "\nBike 2:" << endl;
    b2.displayBike();

    return 0;
}