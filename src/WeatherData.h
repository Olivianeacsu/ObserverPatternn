/*
 * WeatherData.h
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */



#ifndef WEATHERDATA_H_
#define WEATHERDATA_H_

#include <vector>
#include "Observer.h"
#include "Subject.h"

namespace std {

class WeatherData: public Subject {
public:
	WeatherData();
	virtual ~WeatherData();

	virtual void registerOberver(Observer* obsvr);

	virtual void removeObserver(Observer* obsvr);
	virtual void notifyObservers();

	virtual double getTemperature();
	virtual double getHumidity();
	virtual double getPressure();

	virtual void setMeasurements(double temperature, double humidity,
			double pressure);

private:
	vector<Observer*> observers;
	double temperature;
	double humidity;
	double pressure;

};

} /* namespace std */

#endif /* WEATHERDATA_H_ */
