/*
 * xBoxParser.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: JJB07
 */

#include "xBoxParser.h"

std::string ParseXboxMsg(std::string msg)
{

	std::stringstream(msg);

	std::address;
	while(ss.peek() != '-')
	{

		address.push_back(ss.get());

	}

	ss.get();

	std::string numString;
	while(ss.peek() != ';')
	{
		numString.push_back(ss.get());

	}


	std::stringstream ss2(numString);
	std:vector<std::string> numbers(3);
	for (int i = 0; i < 3; i++) {
		while(ss2.peek() != '_')
		{
			numbers[i].push_back(ss2.get())
		}
		ss2.get();
	}

	float r, x, y;
	r = strtof((numbers[0]).c_str(),0);
	x = strtof((numbers[1]).c_str(),0);
	y = strtof((numbers[2]).c_str(),0);


}
