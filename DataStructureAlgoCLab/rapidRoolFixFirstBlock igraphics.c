# include "iGraphics.h"

int circleY = 590,  circleX = 190;
int 	firstX = 0, firstY = 0, firstMidY = 75, secondY = 150;
//int firstX = 0, firstY = 0, firstMidY = 75;

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

	
}

void incrementY(){

	if (firstY >= 585){ /*firtst Y*/
		firstY = 0;
		firstMidY = 75;
	}
	else
	{

		firstY += 4;
		firstMidY += 4;
	}
	//if (firstMidY >= 585)
		//firstMidY = 50;
	//else
		//firstMidY += 4; /*End First Y*/


	if (secondY >= 585){ /*second Y*/
		secondY = 100;
	}
	else

		secondY += 4;
	




	
	if (circleY < 0){/*circle incrementing decrementing section and initialize*/

		circleY = 590;

	}
	else{
		if ((circleY - firstMidY) <= 25 && circleX <260 && circleX>150){
		
			circleY += 4;

		}
		else{
			circleY -= 4;
		}
	} /*circle end*/

	
}

//leftX.xyAxis[1] = 100;

void iDraw()
{

	iClear();
	iSetColor(100, 200, 50);
	iFilledCircle(circleX, circleY, 10);

	iSetColor(224, 91, 63); /* start first block*/

	iFilledRectangle(50, firstY, 100, 15); //first left block

	iFilledRectangle(150, firstMidY, 100, 15);  //mid

	iFilledRectangle(250, firstY, 100, 15);  //  first right Block

	/******Start second Block******/

	iSetColor(74, 255, 106);/*red*/

	iFilledRectangle(100, secondY, 100, 15); //left



	iFilledRectangle(300, secondY, 100, 15);  //right  end first Block


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
		/*
		if ((circleY - firstMidY) <= 25 && circleX <250 && circleX>150){
			circleY = 590;

		}
		else
			circleY -= 4;
		printf("%d\n", circleX);
		//exit(0);
		*/
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
//	firstX = 0, firstY = 0, firstMidY = 75,secondY=150;


	//iSetTimer(10, incrementY);
	iInitialize(400, 600, "demooo");
	return 0;
}