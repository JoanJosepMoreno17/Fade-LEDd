/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
** Joan Josep Moreno                                                             **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);     
  analogWrite(led1, 0);    
  analogWrite(led2, 0);     
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     
  delay(velocitat);          // es queden leds velocitat ms en aquest estat //1//
  analogWrite(led0, 32);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);   
  analogWrite(led5, 0);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //2//
  analogWrite(led0, 64);   
  analogWrite(led1, 32);   
  analogWrite(led2, 0);   
  analogWrite(led3, 0);   
  analogWrite(led4, 0);  
  analogWrite(led5, 0);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //3//
  analogWrite(led0, 127);    
  analogWrite(led1, 64);    
  analogWrite(led2, 32);    
  analogWrite(led3, 0);  
  analogWrite(led4, 0);   
  analogWrite(led5, 0);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //4//
  analogWrite(led0, 164);    
  analogWrite(led1, 127);   
  analogWrite(led2, 64);   
  analogWrite(led3, 32);   
  analogWrite(led4, 0);  
  analogWrite(led5, 0);    
  delay(velocitat);           // es queden leds velocitat ms en aquest estat  //5//
  analogWrite(led0, 191);    
  analogWrite(led1, 164);    
  analogWrite(led2, 127);  
  analogWrite(led3, 64);  
  analogWrite(led4, 32);  
  analogWrite(led5, 0);    
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //6//
  analogWrite(led0, 255);
  analogWrite(led1, 191);    
  analogWrite(led2, 164);  
  analogWrite(led3, 127);    
  analogWrite(led4, 64);    
  analogWrite(led5, 32);    
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //7//
  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 191);   
  analogWrite(led3, 164);   
  analogWrite(led4, 127);   
  analogWrite(led5, 64);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //8//
  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255); 
  analogWrite(led3, 191);   
  analogWrite(led4, 164);  
  analogWrite(led5, 127);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //9//
  analogWrite(led0, 255);  
  analogWrite(led1, 255);   
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 191);   
  analogWrite(led5, 164);   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //10//
  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 255);   
  analogWrite(led4, 255);   
  analogWrite(led5, 191);    
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //11//
  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 255);   
  analogWrite(led5, 255);    
  delay(velocitat);           // es queden leds velocitat ms en aquest estat //12//
}
//********** Funcions *************************************************************
