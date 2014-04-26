/*
 * WeatherData.cpp
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */

#include "WeatherData.h"

namespace std {

WeatherData::WeatherData() {
	this->humidity = 0.0;
	this->temperature = 0.0;
	this->pressure = 0.0;

}

WeatherData::~WeatherData() {
	// TODO Cleanup properly the vector! who is responsible of deleting the objects in this vector?
}

void WeatherData::registerObserver(Observer* obsvr) {
	observers.push_back(obsvr);
}

void WeatherData::removeObserver(Observer* obsvr) {

	vector<Observer*>::iterator iter;

	for (iter = observers.begin(); iter != observers.end(); iter++) {

		if (*iter == obsvr) {
			iter = observers.erase(iter);
			;
		}
	}
}
void WeatherData::notifyObservers() {
	vector<Observer*>::iterator iter;

	for (iter = observers.begin(); iter != observers.end(); iter++) {

		(*iter)->update(temperature, humidity, pressure);
	}

}

void WeatherData::setMeasurements(double temperature, double humidity, double pressure){
	this->humidity = humidity;
		this->pressure = pressure;
		this->temperature = temperature;
		notifyObservers();
}

double WeatherData::getTemperature() {
	return temperature;
}

double WeatherData::getHumidity() {
	return humidity;
}

double WeatherData::getPressure() {
	return pressure;
}

} /* namespace std */
