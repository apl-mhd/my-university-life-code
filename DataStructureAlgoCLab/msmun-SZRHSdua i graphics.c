# include "iGraphics.h"

int firstY=0, midY=75;
double xa[]={10, 15, 20};
double ya[]={10, 20, 10};
void yaxis(){

	if(firstY >=585)
		firstY = 0;
	else
		firstY +=4;

	if(midY >=585)
		midY = 0;
	else
		midY +=4;
}



void iDraw() 
{
	iClear();
	iSetColor(1000, 15000,3000);

	iFilledRectangle(50,firstY,100,15);
	iSetColor(255, 00,000);
	iFilledRectangle(50, midY,100,15);
	iSetColor(255, 00,000);
	iFilledPolygon(xa, ya, 6);
}

void iMouseMove(int mx, int my) {
	
}

void iMouse(int button, int state, int mx, int my) {
	if(button==GLUT_RIGHT_BUTTON && state==GLUT_UP) {
		
	} else if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN) {
		
	} else if(button==GLUT_LEFT_BUTTON && state==GLUT_UP) {
	
	}
}

void iKeyboard(unsigned char key) {
	if(key=='q') {
		//animate=(animate+1)%2;
		
	}
}

void iSpecialKeyboard(unsigned char key) {
	if(key==GLUT_KEY_PAGE_UP) {
		
	} else if(key==GLUT_KEY_PAGE_DOWN) {
		
	}
	if(key==GLUT_KEY_UP){
	
	}
	if(key==GLUT_KEY_RIGHT){
	
	}
	if(key==GLUT_KEY_LEFT){
	
	}

}



int main() {
	
	iSetTimer(.000001, yaxis);
	iInitialize(400, 600, "Bouncing Ball");
	return 0;
}