#include "ElevatorSetBottom.h"
#include "Robot.h"
ElevatorSetBottom::ElevatorSetBottom()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator);
}

// Called just before this Command runs the first time
void ElevatorSetBottom::Initialize()
{
	Robot::elevator->Up();
	Robot::elevator->InitializeCounterBottom();
}

// Called repeatedly when this Command is scheduled to run
void ElevatorSetBottom::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorSetBottom::IsFinished()
{
	return Robot::elevator->IsBottomSwitchSet();
}

// Called once after isFinished returns true
void ElevatorSetBottom::End()
{
	Robot::elevator->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorSetBottom::Interrupted()
{

}
