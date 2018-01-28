/*
 * SKit.h
 *
 *  Created on: Jan 28, 2018
 *      Author: thor
 */

#ifndef INC_SKIT_H_
#define INC_SKIT_H_

#include "BindableObj.h"

namespace uiRobotics {

class SKit: public BindableObj {
public:
	SKit();

	virtual std::string HandleGetMsg(void* msg);

	virtual ~SKit();
};

} /* namespace uiRobotics */

#endif /* INC_SKIT_H_ */
