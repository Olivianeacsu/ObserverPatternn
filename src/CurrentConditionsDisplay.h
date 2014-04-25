/*
 * CurrentConditionsDisplay.h
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */

#ifndef CURRENTCONDITIONSDISPLAY_H_
#define CURRENTCONDITIONSDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

namespace std {

class CurrentConditionsDisplay: public Observer, public DisplayElement {
private:
	double temperature;
	double humidity;
	double pressure;
	Subject* subject;
public:
	CurrentConditionsDisplay(Subject* sbj);
	virtual ~CurrentConditionsDisplay();

	virtual void update(double temperature, double humidity, double pressure);
	virtual void display();

};

} /* namespace std */

#endif /* CURRENTCONDITIONSDISPLAY_H_ */
