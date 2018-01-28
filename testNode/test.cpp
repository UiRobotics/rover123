/*
 * test.cpp
 *
 *  Created on: Feb 14, 2017
 *      Author: JJB07
 */

//#include <iostream>
#include "inc/IDevice.h"
#include <iostream>
#include "lib/TransToOldFormat/msgParser.h"
#include "header/motor.h"

 int main(){

	std::cout << "working" << std::endl;

	uiRobotics::IDevice* dev;
	char str[] = "6003";
	uiRobotics::CREATE_UI_ROBOTICS_DEVICE(&dev, str);
	motor motor("/dev/ttyACM0", 9600);

	dev->Bind(&motor);
	dev->SetServerPort(7006);

	dev->Start();
	//TCPServerSocket sock(7090);

	//TCPSocket* s = sock.accept();
	TCPSocket revS("0.0.0.0", 7006);
	char buffer[255];
	while(true)
	{

		//s->recv(buffer, 255);

		std::string str;//= msgParser::TransToNewFormat(std::string(buffer));
		std::cin >> str;
		//std::string str(buffer);
		std::cout << str << std::endl;
		std::cout << msgParser::TransToOldFormat(str) << std::endl;

		revS.send(str.c_str(), MSG_MAX_BUFFER_SIZE);
		//char buffer[MSG_MAX_BUFFER_SIZE];
		//std::cin >> buffer;
		revS.recv(buffer, MSG_MAX_BUFFER_SIZE);
		/*while(true)
		{
			this_thread::yield();
		}*/
	}
}
