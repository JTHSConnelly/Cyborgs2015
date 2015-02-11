#include "Elevator.h"
#include "../RobotMap.h"

Elevator::Elevator() :
		Subsystem("Elevator")
{
		elevatorMotor = RobotMap::elevatorMotorControl;
}

void Elevator::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Elevator::Up()
{
	elevatorMotor -> Set(1);
}

void Elevator::Down()
{
	elevatorMotor -> Set(-1);
}

void Elevator::Stop()
{
	elevatorMotor -> Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
