#include "iGraphics.h"


double x=50.0; 
double y=50.0;

double xa[]={65, 292, 5};
double ya[]={27, 371, 10};

void animateBall()
{

	//if(x>543){
		//x = 50.0;
		//y = 50.0;
	//}
//x=x+5;

}

void iDraw()
{

iClear();

iSetColor(0,255,0);

iFilledRectangle(100,60,400,240);

iLine(65, 292, 278, 371);
iLine(544, 292, 278, 371);
iSetColor(246,43,15);

iFilledRectangle(150, 150, 50, 50);
iSetColor(246,43,15);
iFilledRectangle(400, 150, 50, 50);
iSetColor(43,15,246);
iFilledRectangle(270, 70, 70, 150);






//iFilledCircle(x,y,20);
}

//place your drawing codes here

void iMouseMove(int mx, int my)
{
	printf("mouse cliked at: %d %d\n",mx,my);
//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
		

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
	
	
	//iSetTimer(30,animateBall);

	

iInitialize(600, 400,"Hello iGraphics"); 
return 0;
}