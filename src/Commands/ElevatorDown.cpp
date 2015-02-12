#include "ElevatorDown.h"
#include "Robot.h"
ElevatorDown::ElevatorDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator);
}

// Called just before this Command runs the first time
void ElevatorDown::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ElevatorDown::Execute()
{
	Robot::elevator->Down();
}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorDown::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ElevatorDown::End()
{
	Robot::elevator->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorDown::Interrupted()
{
	Robot::elevator->Stop();
}
