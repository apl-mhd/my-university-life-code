# include "iGraphics.h"

int circleY = 590,  circleX = 190;
int 	firstX = 0, firstY = 0, firstMidY = 75, secondY = 150;
int thirdY = 250, thirdMidY = 350, thirdX;
//int firstX = 0, firstY = 0, firstMidY = 75;


void assignXY(){  /* assign xy cordinate in a structer varuab*/

	
}

void incrementY(){

	if (firstY >= 585){ /*firtst Y*/
		firstY = 0;
		
	}
	else
	{

		firstY += 4;
	}


	if (firstMidY >= 585){ /*firtst Y*/
		
		firstMidY = 0;
		
	}
	else
	{

		firstMidY += 4;		//**end first step
	}

	if (secondY >= 585){ /*second Y*/
		
		secondY = 0;
	}
	else
	{
		secondY += 4;
	}                   /*End second step*/


	if (thirdY >= 585){ /*start third Y*/
		
		thirdY = 0;
	}
	else
	{

		thirdY += 4;
	}

	
	if (thirdMidY >= 585){ /*start third Y*/
		
		thirdMidY = 0;
	}
	else
	{

		thirdMidY += 4;
	}

	


	
	if (circleY < 0){/*circle incrementing decrementing section and initialize*/

		circleY = 590;

	}
	else{
		
		if ((circleY - firstMidY) <= 25 && (circleY - firstMidY) > 16 &&  circleX <260 && circleX>150){ /*first mid for circle*/
		
			circleY += 4;

		}
		
		else	if ((circleY - firstY) <= 25 && (circleY - firstY) > 16 && circleX<160 && circleX >50 ){ /*first Y left block for circle*/
		
			circleY += 4;

		}

		else	if ((circleY - firstY) <= 25 && (circleY - firstY) > 16 && circleX<350 && circleX >245 ){ /*first Y right block for circle*/
		
			circleY += 4;

		}


		else	if ((circleY - secondY) <= 25 && (circleY - secondY) > 16 && circleX<200 && circleX >100 ){ /*second  left block for circle*/
		
			circleY += 4;

		}

		else	if ((circleY - secondY) <= 25 && (circleY - secondY) > 16 && circleX<400 && circleX >300 ){ /*second  right block for circle*/
		
			circleY += 4;

		}

		else	if ((circleY - thirdY) <= 25 && (circleY - thirdY) > 16 && circleX<150 && circleX >50 ){ /*third  left block */
		
			circleY += 4;

		}

		else	if ((circleY - thirdY) <= 25 && (circleY - thirdY) > 16 && circleX<350 && circleX >250 ){ /*third  left block */
		
			circleY += 4;

		}


		else	if ((circleY - thirdMidY) <= 25 && (circleY - thirdY) > 16 && circleX<255 && circleX >150 ){ /*third  left block */
		
			circleY += 4;

		}

		//else	if ((circleY - secondY) <= 28 ){ /*second Y for circle*/
		
		//	circleY += 4;

	//	} 

		//else	if ((circleY - thirdY) <= 25 ){ /*third Y for circle*/
		
		//	circleY += 4;

		//}


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



	iFilledRectangle(300, secondY, 100, 15);  // second right Block


	/**********Start third block******/


	iSetColor(49, 140, 19); /* start third block*/

	iFilledRectangle(50, thirdY, 100, 15); //third left block

	iFilledRectangle(150, thirdMidY, 100, 15);  //mid

	iFilledRectangle(250, thirdY, 100, 15);  //  third right Block


	/*************end third block***********************************/


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

		circleX -= 30;

		//exit(0);
	}

	if (key == GLUT_KEY_RIGHT)
	{
		circleX += 30;

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