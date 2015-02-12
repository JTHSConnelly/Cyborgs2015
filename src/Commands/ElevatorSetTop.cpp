#include "ElevatorSetTop.h"
#include "Robot.h"
ElevatorSetTop::ElevatorSetTop()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator);
}

// Called just before this Command runs the first time
void ElevatorSetTop::Initialize()
{
	Robot::elevator->Up();
	Robot::elevator->InitializeCounterTop();
}

// Called repeatedly when this Command is scheduled to run
void ElevatorSetTop::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorSetTop::IsFinished()
{
	return Robot::elevator->IsTopSwitchSet();
}

// Called once after isFinished returns true
void ElevatorSetTop::End()
{
	Robot::elevator->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorSetTop::Interrupted()
{

}
