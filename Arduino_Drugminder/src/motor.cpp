
#include <Arduino.h>
#include<Servo.h>
#include <Motor.h>

Servo servo;

// int step_round_X; 
// int step_round_Y=93;
// int x_cor=0;
// int y_cor=0;
// int rack_type;
// int x_box;
// int y_box;

const int dirPin_X = 3;
const int stepPin_X = 4;
const int dirPin_Y = 5;
const int stepPin_Y = 6;


int switc=8;
int switc_X=9;
int switc_Y=10;

int step_round_X; 
int step_round_Y=116;
int x_cor=0;
int y_cor=0;
int rack_type;
int x_box;
int y_box;
int x_step=0;
int y_step=0;
int x_offset=0;
int y_offset=25;

void trialF(int rack_type_array[] , int x_array[] , int y_array[])
{
 
//
    digitalWrite(dirPin_X, HIGH);
  
  for(int x = 0; x < 1800; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_X)== LOW){  break;}

  }

    digitalWrite(dirPin_Y, HIGH);
  
  for(int x = 0; x < 1800; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_Y)== LOW){  break;}

  }



// move real (0,0)
 
    digitalWrite(dirPin_X, LOW);
  
  for(int x = 0; x < 1120; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }


// taking the pills out from small compartments


 
for(int i=0;i<sizeof(x_array)/ sizeof(int);i++){
  rack_type=rack_type_array[i];
  switch(rack_type){
    case 1:
     step_round_X = 75;
    break;
    case 2:
     step_round_X= 100;
    break;
    case 3:
     step_round_X=120;
    break; 
    }
  

  if(i==0){
    x_box=x_array[0];
    x_step=step_round_X*x_box+x_offset;
    x_cor=step_round_X*x_box+x_offset;
    }
    else{
      x_box=x_array[i];
      
      x_step=step_round_X*x_box+x_offset-x_cor;
      x_cor=x_cor+x_step;
      }

      
  if(i==0){
    y_box=y_array[0];
     y_step=step_round_Y*y_box+y_offset;
     y_cor=step_round_Y*y_box+y_offset;
    }
    else{
      y_box=y_array[i];
      
      y_step=step_round_Y*y_box+y_offset-y_cor;
      y_cor=y_cor+y_step;
      }    

  // 1) X movement
        if(x_step>0){
   digitalWrite(dirPin_X, HIGH);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, LOW);}
  
  for(int x = 0; x < abs(x_step); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }
  Serial.print("1)Stage moved to X position\n");
  

  // 2) Y movement
          if(y_step>0){
   digitalWrite(dirPin_Y, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_Y, HIGH);}
  
  for(int x = 0; x < abs(y_step); x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
    Serial.print("2)Stage moved to Y position\n");
 

// 3) Forward Z movement with servo
 servo.attach(7); 
servo.write(180); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.write(0);//stop rotation
 
 delay(50);
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

  


 

//4) down with Y axis
  digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < 40; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
  Serial.print("4)Stage moved downward a bit and grabbed compartment \n");
  
// 5) Backward Z movement with servo

 servo.attach(7); 
servo.write(0); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

// 6) forward with Z axis

 servo.attach(7); 
servo.write(180); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");

 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

// 7) up with Y axis

  digitalWrite(dirPin_Y, LOW);
  for(int x = 0; x <40; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
    Serial.print("7)Stage moved upward a bit and released compartment \n");
  



// 8) backward with Z axis

 servo.attach(7); 
servo.write(0); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 

 
 delay(100);
 servo.detach(); 
}

//// 9) tilting
      x_step=-190-x_cor;
      x_cor=-190;
      
      y_step=700-y_cor;
      y_cor=700;

       if(y_step>0){
   digitalWrite(dirPin_Y, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_Y, HIGH);}
  
  for(int x = 0; x < abs(y_step); x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }

         if(x_step>0){
   digitalWrite(dirPin_X, HIGH);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, LOW);}
  
  for(int x = 0; x < abs(x_step); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }


digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < 200; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
  
 delay(1000);

  digitalWrite(dirPin_Y, LOW);
  for(int x = 0; x < 200; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }



//// 10) move to reference point

  // 1) X movement

          if(x_cor>0){
   digitalWrite(dirPin_X, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, HIGH);}
    
    
  
  for(int x = 0; x < abs(x_cor); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    
 }

  Serial.print("1)Stage moved to X position\n");
  
   


  // 2) Y movement

 
    digitalWrite(dirPin_Y, HIGH);
  
  for(int x = 0; x < y_cor; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800
    );

   
 
}

  for(int x = 0; x < 1150; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_X)== LOW){  break;}

  }
 Serial.print("2)Stage moved to Y position\n");

}

// void proccess_dis_data(int rack_type_array[] , int x_array[] , int y_array[]){
//   Serial.println(sizeof(x_array));
//   for(int i=0;i<sizeof(x_array);i++){
//     Serial.println(i);
//     if(i==0){
//       x_box=x_array[0];
//     }
//     else{
//         x_box=x_array[i]-x_array[i-1];
//     }

        
//     if(i==0){
//       y_box=y_array[0];
//       }
//     else{
//       y_box=y_array[i]-y_array[i-1];
//     }

//     rack_type=rack_type_array[i];
//     switch(rack_type){
//       case 1:
//       step_round_X = 50;
//       break;
//       case 2:
//       step_round_X= 80;
//       break;
//       case 3:
//       step_round_X=96;
//       break; 
      
//       }
      
//     trialF();
//   }
// }

// void trialF()
// {
 
// delay(1000);


//   // 1) X movement
//   if(x_box>0){
//    digitalWrite(dirPin_X, HIGH);  // HIGH yaparsak saat yönünde döner-High=clockwise
//   }
//     else{
//     digitalWrite(dirPin_X, LOW);}
  
//   for(int x = 0; x < step_round_X*abs(x_box); x++)
//   {
//     digitalWrite(stepPin_X, HIGH);
//     delayMicroseconds(1000);
//     digitalWrite(stepPin_X, LOW);
//     delayMicroseconds(1000);
//   if(digitalRead(dirPin_X)==HIGH){
//     x_cor=x_cor+1;
//   }else{
//     x_cor=x_cor-1;}
//   }
//   Serial.print("1)Stage moved to X position\n");
//   delay(10); // wait 0.1 sec ///////////////////////////////
  



//   // 2) Y movement
//   if(y_box>0){
//    digitalWrite(dirPin_Y, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
//   }
//     else{
//     digitalWrite(dirPin_Y, HIGH);}
  
//   for(int x = 0; x < step_round_Y*abs(y_box); x++)
//   {
//     digitalWrite(stepPin_Y, HIGH);
//     delayMicroseconds(1000);
//     digitalWrite(stepPin_Y, LOW);
//     delayMicroseconds(1000);
//     if(digitalRead(dirPin_Y)==HIGH){
//     y_cor=y_cor+1;
//     }
//     else{
//     y_cor=y_cor-1;}
//   }
//     Serial.print("2)Stage moved to Y position\n");
//   delay(10); // wait 0.1 sec////////////////////////////////////////////////



  

// // 3) Forward Z movement with servo
//  servo.attach(7); 
//   servo.write(180); // start rotation

//   delay(1000);
//   Serial.print("3)Stage moved forward with servo\n");
//   servo.write(90);//stop rotation
  
//   delay(50);
//   servo.detach(); 

  


 

// //4) down with Y axis
//   digitalWrite(dirPin_Y, HIGH);
//   for(int x = 0; x < 100; x++)   //this part requires calibration 
//   {
//     digitalWrite(stepPin_Y, HIGH);
//     delayMicroseconds(1000);
//     digitalWrite(stepPin_Y, LOW);
//     delayMicroseconds(1000);
//     if(digitalRead(dirPin_Y)==HIGH){
//     y_cor=y_cor+1;
//     }
//     else{
//     y_cor=y_cor-1;}
//   }
//   Serial.print("4)Stage moved downward a bit and grabbed compartment \n");
//   delay(10); // wait 0.1 sec //////////////////////////////////////////


  


// // 5) Backward Z movement with servo

//  servo.attach(7); 
// servo.write(0); // start rotation

// delay(1000);

// Serial.print("5)Stage moved backward with servo \n");
//  servo.write(90);//stop rotation
 
//  delay(1000);
//  servo.detach(); 



// // 6) forward with Z axis

//  servo.attach(7); 
// servo.write(180); // start rotation

// delay(1000);
// Serial.print("6)Stage moved forward with servo \n");
//  servo.write(90);//stop rotation
 
//  delay(100);
//  servo.detach(); 



// // 7) up with Y axis

//   digitalWrite(dirPin_Y, LOW);
//   for(int x = 0; x <100; x++)   //this part requires calibration 
//   {
//     digitalWrite(stepPin_Y, HIGH);
//     delayMicroseconds(1000);
//     digitalWrite(stepPin_Y, LOW);
//     delayMicroseconds(1000);
//     if(digitalRead(dirPin_Y)==HIGH){
//     y_cor=y_cor+1;
//     }
//     else{
//     y_cor=y_cor-1;}
//   }
//     Serial.print("7)Stage moved upward a bit and released compartment \n");
//   delay(10); // wait 0.1 sec /////////////////////////////////////////



// // 8) backward with Z axis

//   servo.attach(7); 
//   servo.write(0); // start rotation

//   delay(1000);
//   Serial.print("8)Stage moved backward with servo \n");
//   servo.write(90);//stop rotation
 
//  delay(100);
//  servo.detach(); 

// //// 9) move to reference point
// //
// //
// //  digitalWrite(dirPin_X, LOW);
// //  digitalWrite(dirPin_Y, HIGH);
// //int a=x_cor;
// //int b=y_cor;
// //  for(int x = 0; x < x_cor; x++)
// //  {
// //    digitalWrite(stepPin_X, HIGH);
// //    delayMicroseconds(1000);
// //    digitalWrite(stepPin_X, LOW);
// //    delayMicroseconds(1000);
// //
// //    
// //       if(digitalRead(dirPin_X)==HIGH){
// //       a=a+1;
// //      }
// //        else{
// //      a=a-1;} 
// //  }
// //  delay(100); // wait 0.1 sec
// // for(int x = 0; x < y_cor; x++)
// //  {
// //    digitalWrite(stepPin_Y, HIGH);
// //    delayMicroseconds(1000);
// //    digitalWrite(stepPin_Y, LOW);
// //    delayMicroseconds(1000);
// //
// //    
// //       if(digitalRead(dirPin_Y)==HIGH){
// //       b=b+1;
// //      }
// //        else{
// //      b=b-1;} 
// //  }
// //    delay(100); // wait 0.1 sec
// //  y_cor=b;
// //  x_cor=a;
// //       Serial.print("9)Stage came back to reference \n");
//   Serial.println(x_cor);
//   Serial.println(y_cor);
 
// }



void trialF(int rack_type_array[] , int x_array[] , int y_array[])
{
 
//
    digitalWrite(dirPin_X, HIGH);
  
  for(int x = 0; x < 1800; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_X)== LOW){  break;}

  }

    digitalWrite(dirPin_Y, HIGH);
  
  for(int x = 0; x < 1800; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_Y)== LOW){  break;}

  }



// move real (0,0)
 
    digitalWrite(dirPin_X, LOW);
  
  for(int x = 0; x < 1120; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }


// taking the pills out from small compartments


 
for(int i=0;i<sizeof(x_array)/ sizeof(int);i++){
  rack_type=rack_type_array[i];
  switch(rack_type){
    case 1:
     step_round_X = 75;
    break;
    case 2:
     step_round_X= 100;
    break;
    case 3:
     step_round_X=120;
    break; 
    }
  

  if(i==0){
    x_box=x_array[0];
    x_step=step_round_X*x_box+x_offset;
    x_cor=step_round_X*x_box+x_offset;
    }
    else{
      x_box=x_array[i];
      
      x_step=step_round_X*x_box+x_offset-x_cor;
      x_cor=x_cor+x_step;
      }

      
  if(i==0){
    y_box=y_array[0];
     y_step=step_round_Y*y_box+y_offset;
     y_cor=step_round_Y*y_box+y_offset;
    }
    else{
      y_box=y_array[i];
      
      y_step=step_round_Y*y_box+y_offset-y_cor;
      y_cor=y_cor+y_step;
      }    

  // 1) X movement
        if(x_step>0){
   digitalWrite(dirPin_X, HIGH);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, LOW);}
  
  for(int x = 0; x < abs(x_step); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }
  Serial.print("1)Stage moved to X position\n");
  
  



  // 2) Y movement
          if(y_step>0){
   digitalWrite(dirPin_Y, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_Y, HIGH);}
  
  for(int x = 0; x < abs(y_step); x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
    Serial.print("2)Stage moved to Y position\n");
 



  

// 3) Forward Z movement with servo
 servo.attach(7); 
servo.write(180); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.write(0);//stop rotation
 
 delay(50);
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

  


 

//4) down with Y axis
  digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < 40; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
  Serial.print("4)Stage moved downward a bit and grabbed compartment \n");
  
// 5) Backward Z movement with servo

 servo.attach(7); 
servo.write(0); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

// 6) forward with Z axis

 servo.attach(7); 
servo.write(180); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");

 servo.write(90);//stop rotation
 
 delay(100);
 servo.detach(); 

// 7) up with Y axis

  digitalWrite(dirPin_Y, LOW);
  for(int x = 0; x <40; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
    Serial.print("7)Stage moved upward a bit and released compartment \n");
  



// 8) backward with Z axis

 servo.attach(7); 
servo.write(0); // start rotation

delay(1400);
Serial.print("6)Stage moved forward with servo \n");
 servo.write(90);//stop rotation
 

 
 delay(100);
 servo.detach(); 
}

//// 9) tilting
      x_step=-190-x_cor;
      x_cor=-190;
      
      y_step=700-y_cor;
      y_cor=700;

       if(y_step>0){
   digitalWrite(dirPin_Y, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_Y, HIGH);}
  
  for(int x = 0; x < abs(y_step); x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }

         if(x_step>0){
   digitalWrite(dirPin_X, HIGH);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, LOW);}
  
  for(int x = 0; x < abs(x_step); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
  }


digitalWrite(dirPin_Y, HIGH);
  for(int x = 0; x < 200; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }
  
 delay(1000);

  digitalWrite(dirPin_Y, LOW);
  for(int x = 0; x < 200; x++)   //this part requires calibration 
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800);
  }



//// 10) move to reference point

  // 1) X movement

          if(x_cor>0){
   digitalWrite(dirPin_X, LOW);  // HIGH yaparsak saat yönünde döner-High=clockwise
    }
    else{
    digitalWrite(dirPin_X, HIGH);}
    
    
  
  for(int x = 0; x < abs(x_cor); x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    
 }

  Serial.print("1)Stage moved to X position\n");
  
   


  // 2) Y movement

 
    digitalWrite(dirPin_Y, HIGH);
  
  for(int x = 0; x < y_cor; x++)
  {
    digitalWrite(stepPin_Y, HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin_Y, LOW);
    delayMicroseconds(1800
    );

   
 
}

  for(int x = 0; x < 1150; x++)
  {
    digitalWrite(stepPin_X, HIGH);
    delayMicroseconds( 1800);
    digitalWrite(stepPin_X, LOW);
    delayMicroseconds(1800);
    if (digitalRead(switc_X)== LOW){  break;}

  }
 Serial.print("2)Stage moved to Y position\n");

}
