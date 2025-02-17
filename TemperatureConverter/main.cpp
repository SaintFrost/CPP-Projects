#include <iostream>
#include <cctype>

using namespace std;

double CelciusToFahrenheit();
double CelciusToKelvin();
double FahrenheitToCelcius();
double FahrenheitToKelvin();
double KelvinToCelcius();
double KelvinToFahrenheit();

void ResultTemperature(double convertedValue);

char tempUnit, convertedUnit;
double userTempValue;


int main() {
    cout << "Please choose the temperature unit (C, F, K): ";
    cin >> tempUnit;
    tempUnit = toupper(tempUnit);

    cout << "Please enter the temperature value: ";
    cin >> userTempValue;

    cout << "Please enter the temperature unit you want to get (C, F, K): ";
    cin >> convertedUnit;
    convertedUnit = toupper(convertedUnit);

    if (tempUnit == 'C') {
        if (convertedUnit == 'F') {
            double result = CelciusToFahrenheit();
            ResultTemperature(result);
        }
        else if (convertedUnit == 'K') {
            double result = CelciusToKelvin();
            ResultTemperature(result);
        }
        else {
            cout << "Error!";

            return 1;
        }
    }
    else if (tempUnit == 'F') {
        if (convertedUnit == 'C') {
            double result = FahrenheitToCelcius();
            ResultTemperature(result);
        }
        else if (convertedUnit == 'K') {
            double result = FahrenheitToKelvin();
            ResultTemperature(result);
        }
        else {
            cout << "Error!";

            return 1;
        }
    }
    else if (tempUnit == 'K') {
        if (tempUnit == 'C') {
            double result = KelvinToCelcius();
            ResultTemperature(result);
        }
        else if (tempUnit == 'F') {
            double result = KelvinToFahrenheit();
            ResultTemperature(result);
        }
        else {
            cout << "Error!";

            return 1;
        }
    }

    return 0;
}

void ResultTemperature(double convertedValue ) {
    cout << "The Result: " << convertedValue << " " << convertedUnit;
}

double CelciusToFahrenheit() {
    return ((userTempValue * 9 / 5) + 32);
}

double CelciusToKelvin() {
    return (userTempValue + 273.15);
}

double FahrenheitToCelcius() {
    return ((userTempValue - 32) * 5 / 9);
}

double FahrenheitToKelvin() {
    return (((userTempValue - 32) * 5 / 9) + 273.15);
}

double KelvinToCelcius() {
    return (userTempValue - 273.15);
}

double KelvinToFahrenheit() {
    return (((userTempValue - 273.15) * 9 / 5) + 32);
}