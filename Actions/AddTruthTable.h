#ifndef _Add_TRUTH_TABLE_H
#define _Add_TRUTH_TABLE_H
#include "Action.h"
#include"../Components/SWITCH.h"
class AddTruthTable : public Action
{
	int InputArray[10][1024];
	int OutputArray[10][1024];
	/*int** InputArray;
	int** OutputArray;*/
	Component* led[20];
	Component* switches[20];
public:
	AddTruthTable(ApplicationManager* pApp);
	virtual ~AddTruthTable(void);

	//Reads parameters required for action to execute
	virtual void ReadActionParameters();
	//Execute action (code depends on action type)
	virtual void Execute();
	void DisplayTruthTable(int, int, int);

	virtual void Undo();
	virtual void Redo();
};
#endif