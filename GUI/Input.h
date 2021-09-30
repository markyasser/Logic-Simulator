#pragma once

#include "..\CMUgraphicsLib\CMUgraphics.h"
#include "UI_Info.h"

class Output;
class Input		//The application manager should have a pointer to this class
{
private:
	window *pWind;	//Pointer to the Graphics Window
	Point *LastClickedPoint;
	int* Index;

public:

	Input(window*);
	void GetPointClicked(int &, int &);	//Get coordinate where user clicks
	string GetSrting(Output*);		//Returns a string entered by the user
	string GetSrting(Output* pOut, string priv);
	Point GetLastClicked();
	ActionType GetUserAction() const; //Reads the user click and maps it to an action
	ActionType GetMode() const;

	~Input();
};
