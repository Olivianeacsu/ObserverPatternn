/*
 * Subject.h
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */
#include "Observer.h"
#ifndef SUBJECT_H_
#define SUBJECT_H_

namespace std {

class Subject {
public:
	Subject();
	virtual ~Subject();

	virtual void registerObserver(Observer* obsvr) {

	};
	virtual void removeObserver(Observer* obsvr) {};
	virtual void notifyObservers() {};
};

} /* namespace std */

#endif /* SUBJECT_H_ */
