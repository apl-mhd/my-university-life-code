# include "iGraphics.h"

int circleY = 590, midY = 75, circleX=190;

struct xyCordinate{

	int leftX;
	int leftY;

	int midX;
	int midY;

	int rightX;
	int rightY;


};
struct xyCordinate xyAxis[5];


void assignXY(){  /* assign xy cordinate in a structer varuab*/

	xyAxis[0].leftX = 50;
	xyAxis[0].leftY = 0;
}

//leftX.xyAxis[1] = 100;

void iDraw()
{
	
	iClear();
	iSetColor(100,200,50);
	iFilledCircle(circleX, circleY, 10);
	
	iSetColor(224, 91, 63); /* start first block*/

	iFilledRectangle(50, 0, 100, 15); //first left block

	iFilledRectangle(150, midY, 100, 15);  //mid
	
	iFilledRectangle(250, 0, 100, 15);  //right  end first Block

	/******Start second Block******/

	iFilledRectangle(50, 0, 100, 15); //left

	iFilledRectangle(150, midY, 100, 15);  //mid

	iFilledRectangle(250, 0, 100, 15);  //right  end first Block


}

void iMouseMove(int mx, int my)
{


	printf(" %d %d\n", mx, my);
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		
	}
	
}


void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_UP)
	{
		
		
		//exit(0);
	}

	if (key == GLUT_KEY_DOWN)
	{
		if ((circleY - midY) <= 25 && circleX <250 && circleX>150){
			circleY = 590;

		}
		else
		circleY -=4 ;
		printf("%d\n", circleX);
		//exit(0);
	}


	if (key == GLUT_KEY_LEFT)
	{
		
		circleX -= 4;
		
		//exit(0);
	}

	if (key == GLUT_KEY_RIGHT)
	{
		circleX += 4;
	
		//exit(0);
	}

}
int main()
{
	
	iInitialize(400, 600, "demooo");
	return 0;
}