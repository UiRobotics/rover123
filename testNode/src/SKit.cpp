/*
 * SKit.cpp
 *
 *  Created on: Jan 28, 2018
 *      Author: thor
 */

#include "SKit.h"

namespace uiRobotics {

SKit::SKit() {
	// TODO Auto-generated constructor stub

}

std::string SKit::HandleGetMsg(void* msgraw)
{

	std::string msg = std::string((char*)msgraw);

	return MSG_CAN_SEND;
}

SKit::~SKit() {
	// TODO Auto-generated destructor stub
}

} /* namespace uiRobotics */
