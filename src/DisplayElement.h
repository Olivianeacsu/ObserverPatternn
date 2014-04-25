/*
 * DisplayElement.h
 *
 *  Created on: 25 apr 2014
 *      Author: ealabdi
 */

#ifndef DISPLAYELEMENT_H_
#define DISPLAYELEMENT_H_

namespace std {

class DisplayElement {
public:
	DisplayElement();
	virtual ~DisplayElement();

	virtual void display()=0;
};

} /* namespace std */

#endif /* DISPLAYELEMENT_H_ */
