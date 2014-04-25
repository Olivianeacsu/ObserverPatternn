/*
 * Observer.h
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

namespace std {

class Observer {
public:
	Observer();
	virtual ~Observer();

	virtual void update(double temperature, double humidity, double pressure) = 0;
};

} /* namespace std */

#endif /* OBSERVER_H_ */
