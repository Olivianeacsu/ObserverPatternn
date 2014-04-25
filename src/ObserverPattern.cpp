//============================================================================
// Name        : ObserverPattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"

using namespace std;

int main() {
	cout << "!!!Observer Pattern!!!" << endl;

		WeatherData* weatherData = new WeatherData();

		CurrentConditionsDisplay* displayObj = new CurrentConditionsDisplay(weatherData);

		weatherData->setMeasurements(30.4, 56.9, 100);
}
