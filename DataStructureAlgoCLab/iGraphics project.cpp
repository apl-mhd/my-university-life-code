# include "iGraphics.h"

int circleY = 590,  circleX = 190;
int 	firstX = 0, firstY = 0, firstMidY = 75, secondY = 150;
int thirdY = 250, thirdMidY = 350, thirdX;
int fourthY = 450, fourthMidY = 400, fourthX;

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
		secondY = 150;
		thirdMidY = 350;
		thirdY = 250;

		fourthY = 450;
		fourthMidY = 400;
	}
	else
	{

		firstY += 4;
		firstMidY += 4;
		secondY += 4;

		thirdMidY += 4;
		thirdY += 4;

		fourthY += 4;
		fourthMidY += 4;
	}
	//if (firstMidY >= 585)
		//firstMidY = 50;
	//else
		//firstMidY += 4; /*End First Y*/

	/***
	if (secondY >= 585){ //second Y
		secondY = 100;
	}
	else

		secondY += 4;
	
	****/



	
	if (circleY < 0){/*circle incrementing decrementing section and initialize*/

		circleY = 590;

	}
	else{
		if ((circleY - firstMidY) <= 25 && (circleY - firstMidY) > 20 &&  circleX <260 && circleX>150){
		
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

	iFilledRectangle(100, secondY, 100, 15); // second left block



	iFilledRectangle(300, secondY, 100, 15);  //End second Block


	/**********Start third block******/


	iSetColor(49, 140, 19); /* start third block*/

	iFilledRectangle(50, thirdY, 100, 15); //third left block

	iFilledRectangle(130, thirdMidY, 100, 15);  //mid

	iFilledRectangle(250, thirdY, 100, 15);  //  third right Block


	/*************end third block***********************************/

	/*startfourth block*/
		iSetColor(25, 139, 27); 

		iFilledRectangle(50, fourthY, 100, 15);

		iFilledRectangle(275, fourthMidY, 100, 15);

	/*end fourth block*/



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
		
		circleY += 4;
		printf("%d\n", circleY - firstMidY);
		//exit(0);
	}

	if (key == GLUT_KEY_DOWN)
	{

		circleY -= 4;
		printf("%d\n", circleY-firstMidY);
		
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

		circleX -= 15;

		//exit(0);
	}

	if (key == GLUT_KEY_RIGHT)
	{
		circleX += 15;

		//exit(0);
	}

}
int main()
{
//	firstX = 0, firstY = 0, firstMidY = 75,secondY=150;


	iSetTimer(10, incrementY);
	iInitialize(400, 600, "demooo");
	return 0;
}