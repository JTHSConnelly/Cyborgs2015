#ifndef ElevatorSetTop_H
#define ElevatorSetTop_H

#include "Commands/Command.h"
#include "WPILib.h"

class ElevatorSetTop: public Command
{
public:
	ElevatorSetTop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
