#ifndef ElevatorSetBottom_H
#define ElevatorSetBottom_H

#include "Commands/Command.h"
#include "WPILib.h"

class ElevatorSetBottom: public Command
{
public:
	ElevatorSetBottom();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
