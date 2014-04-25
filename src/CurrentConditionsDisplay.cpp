/*
 * CurrentConditionsDisplay.cpp
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */

#include "CurrentConditionsDisplay.h"

#include <iostream>
namespace std {

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* sbj) {
	this->humidity = 0.0;
	this->temperature = 0.0;
	this->pressure = 0.0;
	this->subject = sbj;
	this->subject->registerObserver(this);

}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
	// TODO Auto-generated destructor stub
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure){
	this->humidity = humidity;
	this->pressure = pressure;
	this->temperature = temperature;
	display();
}

void CurrentConditionsDisplay::display(){
	cout << "Current temperature: " << temperature << " pressure: " << pressure << " humidity: " << humidity;
}

} /* namespace std */
