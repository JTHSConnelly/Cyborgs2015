#include "Elevator.h"
#include "../RobotMap.h"

Elevator::Elevator() :
		Subsystem("Elevator")
{
		elevatorMotor = RobotMap::elevatorMotorControl;
		counterBottom = RobotMap::ElevatorCounterBottom;
		counterTop = RobotMap::ElevatorCounterTop;
}

void Elevator::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

bool Elevator::IsTopSwitchSet()
{
	return counterTop->Get()>0;
}

bool Elevator::IsBottomSwitchSet()
{
	return counterBottom->Get()>0;
}

void Elevator::InitializeCounterTop()
{
	counterTop->Reset();
}

void Elevator::InitializeCounterBottom()
{
	counterBottom->Reset();
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
