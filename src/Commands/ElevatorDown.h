#ifndef ElevatorDown_H
#define ElevatorDown_H

#include "Commands/Command.h"
#include "WPILib.h"

class ElevatorDown: public Command
{
public:
	ElevatorDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
