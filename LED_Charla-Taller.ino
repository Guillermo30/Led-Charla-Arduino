/*
Mi primer poryecto
 */

void setup() {                
  
  pinMode(9, OUTPUT); 

  /*Led RGB*/
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 

     
}

void loop() {
  digitalWrite(9, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(9, LOW);    // set the LED off
  delay(1000);              // wait for a second

  /*Led RGB*/
  //Rojo
  digitalWrite(5, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(5, LOW);    // set the LED off
  delay(1000);              // wait for a second

   //Verde
  digitalWrite(4, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);    // set the LED off
  delay(1000);              // wait for a second

   //Azul
  digitalWrite(3, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(3, LOW);    // set the LED off
  delay(1000);
  
}
