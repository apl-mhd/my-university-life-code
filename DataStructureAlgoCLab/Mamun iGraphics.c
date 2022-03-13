# include "iGraphics.h"

int     firstX = 0, firstY = 0, firstMidY = 75, secondY = 150;



void incrementY(){
 
   
 
    if (firstY >= 584){ /*firtst Y*/
        firstY = 0;
       
 
    }
 
 
    else
    {
 
        firstY +=4;
    }
 
    if (firstMidY >= 584){
        firstMidY = 0;
 
    }
 
    else{
        firstMidY += 4;
 
    }
 
 
 
    
 
 
   
  
}
 

 
void iDraw()
{
 
    iClear();
    iSetColor(100, 200, 50);
  
    iSetColor(224, 91, 63); /* start first block*/
 
    iFilledRectangle(50, firstY, 100, 15); //first left block
 
    iFilledRectangle(50, firstMidY, 100, 15);  //mid
 
    iFilledRectangle(250, firstY, 100, 15);  //  first right Block
 
    /******Start second Block******/
 
 
        /*first block end*/
 
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
        if (firstY >= 585)
        {
            firstY = 0;
 
        }
        else
            firstY += 4;
 
        if (firstMidY >= 585)
        {
            firstMidY = 75;
 
        }
        else
            firstMidY += 4;
 
        //circleY += 4;
        printf("first y = %d  midy = %d\n", firstY,firstMidY);
        //exit(0);
    }
 
    if (key == GLUT_KEY_DOWN)
    {
 
        //circleY -= 4;
        //printf("%d\n", circleY-firstMidY);
       
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
//firstX = 0, firstY = 0, firstMidY = 75,secondY=150;
 
 
   //iSetTimer(7, incrementY);
    iInitialize(400, 600, "demooo");
    return 0;
}