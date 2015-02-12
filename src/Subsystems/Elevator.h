#ifndef Elevator_H
#define Elevator_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Elevator: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* elevatorMotor;
	Counter* counterTop;
	Counter* counterBottom;
	DigitalInput* topSwitch;
	DigitalInput* bottomSwitch;
public:
	Elevator();
	void Up();
	void Down();
	void Stop();
	void InitDefaultCommand();
};

#endif
