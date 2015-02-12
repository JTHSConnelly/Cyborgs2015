#include "Elevator.h"
#include "../RobotMap.h"

Elevator::Elevator() :
		Subsystem("Elevator")
{
		elevatorMotor = RobotMap::elevatorMotorControl;
		topSwitch = new DigitalInput(1);
		bottomSwitch = new DigitalInput(2);
		counterTop = new Counter(topSwitch);
		counterBottom = new Counter(bottomSwitch);
		
}

void Elevator::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Elevator::IsTopSwitchSet()
{
	return counterTop.Get() > 0;
}

void Elevator::IsBottomSwitchSet()
{
	return counterTop.Get() > 0;
}

void Elevator::InitializeTop()
{
	counterTop.Reset();
}

void Elevator::InitialzeBottom()
{
	counterBottom.Reset();
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
