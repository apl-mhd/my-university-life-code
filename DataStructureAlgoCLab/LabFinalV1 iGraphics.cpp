#include "iGraphics.h"

//Variables for the Bricks
int A_x = 150, A_y = 310;								    //1st layer of Brick
int B1_x = 60, B1_y = 230, B2_x = 230, B2_y = 230;      //2nd layer of Bricks
int C1_x = 100, C1_y = 150, C2_x = 270, C2_y = 150;     //3rd layer of Bricks
int D_x = 150, D_y = 80;                                //4th layer of Brick
int E1_x = 60, E1_y = 15, E2_x = 230, E2_y = 15;        //5th layer of Bricks

int HomePageFlag = -1; //homepage
int score=0; // score variable
char scoreText[100]; // convert int to text




/*****+++++++++Home page UI setion++++++++++++++++*******/
int newGameX=0, helpX=450, elx=10; //newgame
int newGameR=255,newGameg=255,newGameb=255;

int mouseHoverX, mouseHoverY;

int loadingWidth=0;


/*++++++++++++++++++++End Home page UI+++++++++++++++++*/

//Variable for the User Ball
int ball_x = 200, ball_y = 590, radious = 10;

//Variable for Scoring Squares
int S1_x = 100, S1_y = 50;                              //Starts from the lower left of the display
int S2_x = 300, S2_y = 300;                             //Starts from the mid right of the screen
int L = 15;                                             //Length of the Squares

int det1 = 1, det2 = 1;                                 //Drection indicator for the Squares

//Variables for Enemy Ball
int Enemy_x = 210, Enemy_y = 15, Enemy_R = 15;          //Enemy_R = Radious of the Enemy Ball
int X = 1, Y = 1;                                       //Direction indicator variables (DX Ball)
int E_speed = 4;                                        //Speed of the Enemy Ball
int Enemy_Point = 0; //Points earned or scored by Enemy Ball
char enemyText[100];


//Variable for Score
//int score = 0;

void game()
{
	int start = 590;
	int temp = 585;
	int rock;

	//Increment of Bricks
	A_y += 4;
	B1_y += 4;
	B2_y += 4;
	C1_y += 4;
	C2_y += 4;
	D_y += 4;
	E1_y += 4;
	E2_y += 4;

	if (A_y >= temp) {
		A_y = 0;
	}
	if (B1_y >= temp) {
		B1_y = B2_y = 0;
	}
	if (C1_y >= temp) {
		C1_y = C2_y = 0;
	}
	if (D_y >= temp) {
		D_y = 0;
	}
	if (E1_y >= temp) {
		E1_y = E2_y = 0;
	}
	/*

	//If the Ball hits the Bricks
	rock = ball_y - A_y;
	if (rock <= 25 && ball_x >= 150 && ball_x <= 250) {
		det = 1;
	}
	if (ball_y - A_y <= 25 && ball_y - A_y <= 24 && ball_x >= A_x && ball_x <= A_x + 100) {
		det = 1;
	}
	if (det == 1) {
		ball_y += 4;
	}
	if (ball_y >= 600) {
		det = 0;
		ball_y -= 4;
	}*/

	if (ball_y < 0) {
		ball_y = 590;
	}
	else
	{
		//For 1st layer of Brick
		if ((ball_y - A_y) <= 25 && (ball_y - A_y) >= 17 && ball_x >= 150 && ball_x <= 250)
			ball_y += 4;

		//2nd layer of Bricks
		else if ((ball_y - B1_y) <= 25 && (ball_y - B1_y) >= 17 && ball_x >= 60 && ball_x <= 160)
			ball_y += 4;

		else if ((ball_y - B2_y) <= 25 && (ball_y - B2_y) >= 17 && ball_x >= 230 && ball_x <= 330)
			ball_y += 4;

		//3rd layer of Bricks
		else if ((ball_y - C1_y) <= 25 && (ball_y - C1_y) >= 17 && ball_x >= 100 && ball_x <= 200)
			ball_y += 4;

		else if ((ball_y - C2_y) <= 25 && (ball_y - C2_y) >= 17 && ball_x >= 270 && ball_x <= 370)
			ball_y += 4;

		//4th layer of Brick
		else if ((ball_y - D_y) <= 25 && (ball_y - D_y) >= 17 && ball_x >= 150 && ball_x <= 250)
			ball_y += 4;

		//5th layer of Bricks
		else if ((ball_y - E1_y) <= 25 && (ball_y - E1_y) >= 17 && ball_x >= 60 && ball_x <= 160)
			ball_y += 4;

		else if ((ball_y - E2_y) <= 25 && (ball_y - E2_y) >= 17 && ball_x >= 230 && ball_x <= 330)
			ball_y += 4;

		else
		{
			ball_y -= 4;
		}
	}

	//If the ball hits the side walls
	if (ball_x <= 10) {
		ball_x = 10;
	}
	else if (ball_x >= 410) {
		ball_x = 410;
	}
}

void Square1()
{
	int U = 2;
	
	//U = rand() % 8;
	srand(time(NULL));

	S1_y += 1;
	/*
	if (P1_x >= 405) {
		det1 = 0;
	}
	else if (P1_x <= 0) {
		det1 = 1;
	}

	if (det1 == 0) {
		P1_x -= U;
	}
	else
	{
		P1_x += U;
	}*/

	if (S1_y >= 600) {
		S1_x = (rand() % 160) + 50;
		S1_y = 0;
		det1 = 1;
	}
	else
	{
		if (S1_x >= 405) {
			det1 = 0;
		}
		else if (S1_x <= 0) {
			det1 = 1;
		}

		if (det1 == 0) {
			S1_x -= U;
		}
		else
		{
			S1_x += U;
		}
	}
}

void Square2()
{
	int U = 2;

	//U = rand() % 8;
	srand(time(NULL));

	S2_y += 1;

	if (S2_y >= 600) {
		S2_x = (rand() % 170) + 250;
		S2_y = 0;
		det2 = 0;
	}
	else
	{
		if (S2_x >= 405) {
			det2 = 0;
		}
		else if (S2_x <= 0) {
			det2 = 1;
		}

		if (det2 == 0) {
			S2_x -= U;
		}
		else
		{
			S2_x += U;
		}
	}
}

void Enemy_Ball()
{
	/*
	If X = 1, the Enemy Ball will move Right
	If x = 0, the Enemy Ball will move Left
	                 AND
	If Y = 1, the Enemy Ball will move Up
	If Y = 0, the Enemy Ball will move Dowm
	*/
	if (X == 1) {
		Enemy_x += E_speed;
	}
	else
	{
		Enemy_x -= E_speed;
	}

	if (Y == 1) {
		Enemy_y += E_speed;
	}
	else
	{
		Enemy_y -= E_speed;
	}

	//H = 420 - Enemy_R;
	if (Enemy_x >= 420 - Enemy_R) {
		X = 0;
	}
	else if (Enemy_x <= Enemy_R) {
		X = 1;
	}

	if (Enemy_y >= 585) {
		Y = 0;
	}
	else if (Enemy_y <= 15) {
		Y = 1;
	}


}

void Score_Card()
{
	int V, H;
	int M1_x, M1_y;
	int M2_x, M2_y;

	//Set a Mid-point for Scoring Square 1 (S1_x & S1_y)
	M1_x = S1_x + 7;
	M1_y = S1_y + 7;

	//Set a Mid-point for Scoring Square 2 (S2_x & S2_y)
	M2_x = S2_x + 7;
	M2_y = S2_y + 7;

	srand(time(NULL));
	
	//Calculation for clash position between User Ball and Mid-point for Scoring Square 1 (S1_x & S1_y)
	H = ball_x - M1_x;                                    //H is Hrozontal calulation in side wise (Right or Left)
	V = ball_y - M1_y;                                    //V is Vertical calculation in height wise (Up or Down)

	//If the user ball and Scoring Square 1 (S1_x & S1_y) clashes
	if (V >= -radious && V <= radious)
	{
		if (H >= -radious && H <= radious)
		{	
			S1_x = (rand() % 160) + 50;
			S1_y = 0;
			det1 = 1;
			score++;
			//Radious of the Enemy Ball increases
			Enemy_R += 5;
		}
	}

	//Reuse of the same variables for calculation for clash position between User Ball and Mid-point for Scoring Square 2 (S2_x & S2_y)
	H = ball_x - M2_x;
	V = ball_y - M2_y;

	//If the user ball and Scoring Square 2 (S2_x & S2_y) clashes
	if (V >= -radious && V <= radious)
	{
		if (H >= -radious && H <= radious)
		{
			S2_x = (rand() % 170) + 250;
			S2_y = 0;
			det2 = 0;
			score++;
			//Radious of the Enemy Ball increases
			Enemy_R += 5;
		}
	}
}

void End_Game()
{
	int V, H, D;
	
	srand(time(NULL));

	//Sumation for radious of Enemy Ball and User Ball
	D = radious + Enemy_R;

	//Clash distance
	V = ball_y - Enemy_y;                               //Vertcal clash distance
	H = ball_x - Enemy_x;                               //Horizontal clash distance

	//Enemy Ball earns Point IF
	if (V >= -D && V <= D)
	{
		if (H >= -D && H <= D)
		{
			Enemy_Point +=1;
			//Game Over IF
			if (Enemy_Point == 3) {
				//Game Over******** EXIT

				HomePageFlag=2; /*for last page*/
				//score=0;
				//Enemy_Point=0;

			}
		
			else
			{
				srand(time(NULL));
				Enemy_x = (rand() % 380) + 20;
				Enemy_y = 0;
			}
		}
	}
}


void homePageText(){

	if(newGameX <170){
		newGameX +=2;
		elx = newGameX;
	}
	
	if (helpX > 200)
		helpX -=2; 

	if(loadingWidth<197){
	
		loadingWidth +=1;
	}
	



}

void iDraw()
{
	iClear();

	iText(0,590, "Score:");/*Score section */

	_itoa_s(score,scoreText,15);
	iText(60,590,scoreText);

	iText(350,590, "Life:"); /*Life section*/

	_itoa_s(Enemy_Point,enemyText,15);
	iText(390,590,enemyText);



	if(HomePageFlag ==-1){ /*home page*/

		iSetColor(232,44,12);
		iFilledRectangle(0,0,420,600);
		
		
		
		//iText(200, 330, score, GLUT_BITMAP_HELVETICA_18);
		iSetColor(newGameR,newGameg,newGameb); // ellipes color
		
		iFilledEllipse(elx+40,305,60,20); //ellipes for new game text

		iSetColor(255,100,255);
		
		iText(newGameX,300,"New Game",GLUT_BITMAP_HELVETICA_18);

		iSetColor(newGameR,newGameg,newGameb); // ellipes color
		iFilledEllipse(elx+40,260,60,20);

		iSetColor(255,100,255);

		iText(helpX,250,"Exit",GLUT_BITMAP_HELVETICA_18);


		/*start page end*/
	}

	else if(HomePageFlag==20){ /*loading page for 0*/

		
			iSetColor(232,44,12);
			iFilledRectangle(0,0,420,600);

			iSetColor(255,255,255);
			iRectangle(110,290,200,40);
			iSetColor(0,0,0);
			iFilledRectangle(111,292,loadingWidth,38);
	
	}

	else if (HomePageFlag==2){ /*last page 2*/
			
			score=0;
			Enemy_Point=0;

			iSetColor(232,44,12);
			iFilledRectangle(0,0,420,600);

			iSetColor(255,255,255);
			iFilledRectangle(135,400,150,30);
			iSetColor(0,0,0);
			iText(140, 410, "Score",GLUT_BITMAP_HELVETICA_18); //end score
			iText(200, 410, scoreText,GLUT_BITMAP_HELVETICA_18);
			
			
			iSetColor(255,255,255);
			iFilledRectangle(135,300,150,30);
			iSetColor(0,0,0);
			iText(152, 310, "Newgame",GLUT_BITMAP_HELVETICA_18); //end score

			iSetColor(255,255,255);
			iFilledRectangle(135,200,150,30);
			iSetColor(0,0,0);
			iText(195, 210, "Exit",GLUT_BITMAP_HELVETICA_18); //Exit


		
	}
	

	
	else if(HomePageFlag == 10 ) {
	//For Bricks
	iSetColor(0, 255, 0);
	iFilledRectangle(A_x, A_y, 100, 15);
	
	iSetColor(128, 0, 128);
	iFilledRectangle(B1_x, B1_y, 100, 15);
	iFilledRectangle(B2_x, B2_y, 100, 15);

	iSetColor(200, 55, 113);
	iFilledRectangle(C1_x, C1_y, 100, 15);
	iFilledRectangle(C2_x, C2_y, 100, 15);

	iSetColor(152, 122, 103);
	iFilledRectangle(D_x, D_y, 100, 15);

	iSetColor(15, 113, 83);
	iFilledRectangle(E1_x, E1_y, 100, 15);
	iFilledRectangle(E2_x, E2_y, 100, 15);

	//For Ball
	iSetColor(255, 255, 0);
	iFilledCircle(ball_x, ball_y, radious, 100);

	//iClear();
	//For Point Scoring Squares
	iSetColor(192, 192, 192);
	iFilledRectangle(S1_x, S1_y, L, L);

	iSetColor(128, 255, 255);
	iFilledRectangle(S2_x, S2_y, L, L);

	//For Enemy Ball
	iSetColor(255, 0, 0);
	iFilledCircle(Enemy_x, Enemy_y, Enemy_R);

	}
}
void iMouseMove(int mx, int my)
{

	

	printf("%d\n",mx);
	//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{


	mouseHoverX = mx;
	mouseHoverY = my;


	
	if(mouseHoverX> 149 && mouseHoverX<268 && mouseHoverY<325 && mouseHoverY>288){
		newGameR = 232;
		newGameg = 106;
		newGameR = 122;
		HomePageFlag =10;
	}

	if(mouseHoverX> 135 && mouseHoverX<285 && mouseHoverY<430 && mouseHoverY>400){ //last page new game
		newGameR = 232;
		newGameg = 106;
		newGameR = 122;
		HomePageFlag =10;
	}
	
		if(mouseHoverX> 135 && mouseHoverX<285 && mouseHoverY<230 && mouseHoverY>200){ //last page exit
		newGameR = 232;
		newGameg = 106;
		newGameR = 122;
		HomePageFlag =10;

		exit(0);
	}

		if(mouseHoverX> 152 && mouseHoverX<268 && mouseHoverY>243 && mouseHoverY<279){ //first page exit
		
			//HomePageFlag =10;

		exit(0);
	}


	printf("%d\n",mouseHoverY);

}
void iKeyboard(unsigned char key)
{
	//place your codes here
}

void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_LEFT) {
		ball_x -= 22;
	}
	else if (key == GLUT_KEY_RIGHT) {
		ball_x += 22;
	}
	else if (key == GLUT_KEY_UP) {
		ball_y += 4;
	}
	else if (key == GLUT_KEY_DOWN) {
		ball_y -= 8;
	}
}
int main()
{
	iSetTimer(10, game);
	iSetTimer(10, Square1);
	iSetTimer(10, Square2);
	iSetTimer(10, Enemy_Ball);
	iSetTimer(10, Score_Card);
	iSetTimer(10, End_Game);
	iSetTimer(30, homePageText);
	iInitialize(420, 600, "Rapid Roll");
	printf("Score: %d\n", score);
	return 0;
}