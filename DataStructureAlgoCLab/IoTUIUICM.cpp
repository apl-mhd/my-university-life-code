/*United International University 
 Team Name:ICM..(Please never want to know what is ICM)
pin 13 = light

*/ 

int led1 = 13; //connection of pin no. 13
int led2 = 12; //connection of pin no. 12
int led3 = 8; //connection of pin no. 8
int gate_input;
char state;
int fan = 9; //connection of pin no.9.... (if control regulating then must be use just only 3,5,6,9,10,11 no pin.. other pin not working for fan or light regulating)
int brightness = 0;



void setup() {                
  
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(fan, OUTPUT); 

 
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){     
      state = Serial.read();


//for button 1
  if (state == 'a') { //android apps send a text and bluetooth module receive a text
      digitalWrite(led1, HIGH);}  //switch on
 
  if (state == 'b') { //android apps send b text and bluetooth module receive b text
      digitalWrite(led1, LOW);}  //switch off
      
      
      //for button 2
  if (state == 'c') { //android apps send c text and bluetooth module receive c text
      digitalWrite(led2, HIGH);}  //switch on
 
  if (state == 'd') {  //android apps send d text and bluetooth module receive d text
      digitalWrite(led2, LOW);} //switch off
      
      
           //for button 3
  if (state == 'e') { //android apps send e text and bluetooth module receive e text
      digitalWrite(led3, HIGH);}  //switch on
 
  if (state == 'f') { //android apps send f text and bluetooth module receive f text
      digitalWrite(led3, LOW);} //switch off
      
      
      
          
      /*******************************for fan control************************/
      
  if (state == 'm') { //android apps send m text and bluetooth module receive m text
    
   analogWrite(fan, 255);  
 }
     
 
  if (state == 'n') {   //android apps send n text and bluetooth module receive n text
      analogWrite(fan, 192);}
       
       if (state == 'o') {  //android apps send o text and bluetooth module receive o text
    
   analogWrite(fan, 129);  
 }
  if(state == 'p'){  //android apps send p text and bluetooth module receive p text
    
      analogWrite(fan, 66);
    }

  if(state == 'q'){   //android apps send q text and bluetooth module receive q text
      analogWrite(fan, LOW); //switch off
    }   
    
    /* end fan */
 
  
  
    } 
       //for pump 
 
      
 }