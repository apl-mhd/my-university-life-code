# include "iGraphics.h"
 
int width = 0;

void incrementY(){
 
	if(width<200){
	width +=2;
	
	}
   
}
 
//leftX.xyAxis[1] = 100;
 
void iDraw()
{
 
    iClear();
    
	iSetColor(2505,0,0);
   iRectangle(100, 285, 200, 30); //first left block
	iSetColor(255,12,13);
	iFilledRectangle(100,286,width,29);

}
 
void iMouseMove(int mx, int my)
{
 
 
    printf(" %d %d\n", mx, my);
}
 	void iText(GLdouble x, GLdouble y, char *str, void*	font=GLUT_BITMAP_8_BY_13){
	
	
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
 
        
 
        //exit(0);
    }
 
    if (key == GLUT_KEY_RIGHT)
    {
       
 
        //exit(0);
    }
 
}
int main()
{
//  firstX = 0, firstY = 0, firstMidY = 75,secondY=150;
 
 
    iSetTimer(70, incrementY);
    iInitialize(400, 600, "demooo");
    return 0;
}