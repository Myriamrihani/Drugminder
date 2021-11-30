
void trialF()
{
 
  // HIGH yaparsak saat yönünde döner-High=clockwise
  digitalWrite(dirPin_X, HIGH);

  // 1) X movement
  for(int x = 0; x < step_round*x_box; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(2000);
    if(digitalRead(dirPin_X)==HIGH){
    x_cor=x_cor+1;
    }
    else{
    x_cor=x_cor-1;}
  }
  Serial.print("1)Stage moved to X position\n");
  delay(1000); // wait 0.1 sec
  



  // 2) Y movement
  digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < step_round*y_box; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(2000);
    if(digitalRead(dirPin_Y)==HIGH){
    y_cor=y_cor+1;
    }
    else{
    y_cor=y_cor-1;}
  }
    Serial.print("2)Stage moved to Y position\n");
  delay(1000); // wait 0.1 sec



  

// 3) Forward Z movement with servo
 servo.attach(7); 
servo.write(180); // start rotation

delay(2000);
Serial.print("3)Stage moved forward with servo\n");
 servo.write(90);//stop rotation
 
 delay(50);
 servo.detach(); 

  


 

//4) down with Y axis
  digitalWrite(dirPin_Y, LOW);
  for(int x = 0; x < step_round/2; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(2000);
    if(digitalRead(dirPin_Y)==HIGH){
    y_cor=y_cor+1;
    }
    else{
    y_cor=y_cor-1;}
  }
  Serial.print("4)Stage moved downward a bit and grabbed compartment \n");
  delay(1000); // wait 0.1 sec


  


// 5) Backward Z movement with servo

 servo.attach(7); 
servo.write(0); // start rotation

delay(2000);

Serial.print("5)Stage moved backward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 



// 6) forward with Z axis

 servo.attach(7); 
servo.write(180); // start rotation

delay(2000);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 







// 7) up with Y axis

  digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < step_round/2; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(2000);
    if(digitalRead(dirPin_Y)==HIGH){
    y_cor=y_cor+1;
    }
    else{
    y_cor=y_cor-1;}
  }
    Serial.print("7)Stage moved upward a bit and released compartment \n");
  delay(1000); // wait 0.1 sec



// 8) backward with Z axis

 servo.attach(7); 
servo.write(0); // start rotation

delay(2000);
Serial.print("8)Stage moved backward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 




// 9) move to reference point


  digitalWrite(dirPin_X, LOW);
  digitalWrite(dirPin_Y, LOW);
int a=x_cor;
int b=y_cor;
  for(int x = 0; x < x_cor; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(2000);

    
       if(digitalRead(dirPin_X)==HIGH){
       a=a+1;
      }
        else{
      a=a-1;} 
  }
  delay(100); // wait 0.1 sec
 for(int x = 0; x < y_cor; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(2000);

    
       if(digitalRead(dirPin_Y)==HIGH){
       b=b+1;
      }
        else{
      b=b-1;} 
  }
    delay(100); // wait 0.1 sec
  y_cor=b;
  x_cor=a;
       Serial.print("9)Stage came back to reference \n");
 Serial.println(x_cor);
  Serial.println(y_cor);


 
}
