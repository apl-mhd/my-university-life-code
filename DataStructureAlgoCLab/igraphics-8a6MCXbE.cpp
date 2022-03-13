#include "iGraphics.h"
void iDraw()
{

iSetColor(0,255,0);
iFilledRectangle(200,150,400,240);
//iSetColor(255,0,0);
//iFilledCircle(400,270,80);
iCircle(400,270,100);

//place your drawing codes here
}
void iMouseMove(int mx, int my)
{
//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
//place your codes here
}
void iKeyboard(unsigned char key)
{
//place your codes here
}
void iSpecialKeyboard(unsigned char key)
{
//place your codes for other keys here
}
int main()
{
//place your own initialization codes here. 
iInitialize(600, 400, "");
return 0;
}