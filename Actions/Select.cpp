#include "Select.h"
#include "..\ApplicationManager.h"


Select::Select(ApplicationManager* pApp) : Action(pApp)
{

}

void Select::Execute()
{
	Input* pIn = pManager->GetInput(); //Get a Pointer to the Input Interfaces

	//get the coordinates of the last clicked point
	Point ClickedPoint = pIn->GetLastClicked();
	
	//call the select function
	pManager->SelectComponent(ClickedPoint);

}
void Select::Undo()
{
}

void Select::Redo()
{
}

Select ::~Select(void)
{
}

void Select::ReadActionParameters()
{
}
