    #include <AFMotor.h>
     
    AF_DCMotor motor1(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
    AF_DCMotor motor2(2, MOTOR12_64KHZ);
    AF_DCMotor motor3(3, MOTOR12_64KHZ);
    AF_DCMotor motor4(4, MOTOR12_64KHZ); 
    void setup() {
      Serial.begin(9600);           // set up Serial library at 9600 bps
      Serial.println("Motor test!");
      
      motor1.setSpeed(100);
      motor2.setSpeed(100); 
      motor3.setSpeed(100); 
      motor4.setSpeed(100); // set the speed to 200/255
    }
     
    void loop() {
      Serial.print("tick");
      forward();
      delay(2000);
      backward();
      delay(2000);
      right();
      delay(2000);
      left();
      delay(2000);
   

    }

   void forward(){

      motor1.run(FORWARD);      // turn it on going forward
      delay(100);
      motor2.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor3.run(FORWARD);      // turn it on going forward
      delay(100);
      motor4.run(BACKWARD);      // turn it on going forward
      delay(100);
     
   }

   void backward(){
   
      motor1.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor2.run(FORWARD);      // turn it on going forward
      delay(100);
      motor3.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor4.run(FORWARD);      // turn it on going forward
      delay(100);
   }

   void right(){
      motor1.run(FORWARD);      // turn it on going forward
      delay(100);
      motor2.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor3.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor4.run(FORWARD);      // turn it on going forward
      delay(100);
   }

  void left(){
     motor1.run(BACKWARD);      // turn it on going forward
      delay(100);
      motor2.run(FORWARD);      // turn it on going forward
      delay(100);
      motor3.run(FORWARD);      // turn it on going forward
      delay(100);
      motor4.run(BACKWARD);      // turn it on going forward
      delay(100);
  }

