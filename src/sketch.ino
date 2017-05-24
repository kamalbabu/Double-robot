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
	int x;
      //Serial.print("tick");
      //forward();
      /*delay(2000);
      backward();
      delay(2000);
      */
	delay(100);
while(!Serial.available()>0){
}
	x = Serial.read();
	delay(500);
x-=48;
	Serial.print(x);
switch(x){
	case 1:
			forward();
			delay(100);
			break;
	
	case 2:	
			backward();
			delay(100);
			break;
	case 3:	
			left();
			delay(100);
			break;
	case 4:	
			right();
			delay(100);
			break;
	default:	stop();
}
      }

   void forward(){

      motor1.run(FORWARD);      // turn it on going forward 
      motor2.run(BACKWARD);      // turn it on going forward
       motor3.run(FORWARD);      // turn it on going forward
       motor4.run(BACKWARD);
	delay(2000);
	stop();      // turn it on going forward
      
   }

   void backward(){
   
      motor1.run(BACKWARD);      // turn it on going forward
      motor2.run(FORWARD);      // turn it on going forward
      motor3.run(BACKWARD);      // turn it on going forward
      motor4.run(FORWARD);
	delay(2000);
	stop();      // turn it on going forward
   }

   void right(){
      motor1.run(FORWARD);      // turn it on going forward
      motor2.run(BACKWARD);      // turn it on going forward
      motor3.run(BACKWARD);      // turn it on going forward
      motor4.run(FORWARD);
	delay(500);
	stop();      // turn it on going forwar
   }

  void left(){
     motor1.run(BACKWARD);      // turn it on going forward
      motor2.run(FORWARD);      // turn it on going forward
      motor3.run(FORWARD);      // turn it on going forward
      motor4.run(BACKWARD);
	delay(500);
	stop();      // turn it on going forward
  }
 void stop(){
	motor1.run(RELEASE);
	motor2.run(RELEASE);
	motor3.run(RELEASE);
	motor4.run(RELEASE);
}

