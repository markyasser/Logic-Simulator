#include "OR2.h"

OR2::OR2(const GraphicsInfo& r_GfxInfo, int r_FanOut) :Gate(2, r_FanOut)
{
	m_GfxInfo.x1 = r_GfxInfo.x1;
	m_GfxInfo.y1 = r_GfxInfo.y1;
	m_GfxInfo.x2 = r_GfxInfo.x2;
	m_GfxInfo.y2 = r_GfxInfo.y2;
}


void OR2::Operate()
{
	//caclulate the output status as the ANDing of the two input pins
	int first = m_InputPins[0].getStatus();
	int second = m_InputPins[1].getStatus();
	if (first == 0 && second == 0)
		m_OutputPin.setStatus(LOW);

	else m_OutputPin.setStatus(HIGH);
	//Add you code here
}


// Function Draw
// Draws 3-input OR gate
void OR2::Draw(Output* pOut)
{
	//Call output class and pass gate drawing info to it.
	if (m_GfxInfo.y1 > UI.ToolBarHeight && m_GfxInfo.y2 < UI.height - UI.StatusBarHeight)
	{
		pOut->DrawOR2(m_GfxInfo,select);
	}

}

//returns status of outputpin
int OR2::GetOutPinStatus()
{
	return m_OutputPin.getStatus();
}


//returns status of Inputpin #n
int OR2::GetInputPinStatus(int n)
{
	return m_InputPins[n - 1].getStatus();	//n starts from 1 but array index starts from 0.
}

//Set status of an input pin ot HIGH or LOW
void OR2::setInputPinStatus(int n, STATUS s)
{
	m_InputPins[n - 1].setStatus(s);
}

string OR2::GetComponentType()
{
	return "OR2";
}
