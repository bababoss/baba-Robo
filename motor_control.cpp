
#include wiringPi.h
int main (void)
{
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
  pinMode (1, OUTPUT) ;
  pinMode (2, OUTPUT) ;
  pinMode (4, OUTPUT) ;
  
  void forward()
	{
	digitalWrite (0, HIGH) ;
	digitalWrite (1,  LOW) ;
	digitalWrite (2,  LOW) ;
	digitalWrite (3,  HIGH) ;
	}
  void backward()
	{
	digitalWrite (0, LOW) ;
	digitalWrite (1,  HIGH) ;
	digitalWrite (2,  HIGH) ;
	digitalWrite (3,  LOW) ;
	}
  void left()
	{
	digitalWrite (0, HIGH) ;
	digitalWrite (1,  LOW) ;
	digitalWrite (2,  HIGH) ;
	digitalWrite (3,  LOW) ;
	}
  void right()
	{
	digitalWrite (0, LOW) ;
	digitalWrite (1,  HIGH) ;
	digitalWrite (2,  LOW) ;
	digitalWrite (3,  HIGH) ;
	}
  void stop()
	{
	digitalWrite (0, LOW) ;
	digitalWrite (1,  LOW) ;
	digitalWrite (2,  LOW) ;
	digitalWrite (3,  LOW) ;
	}
  while(1)
  {
    forward():
	delay (5000) ;
	backward();
	delay (5000) ;
	left();
	delay (2000) ;
	right();
	delay (2000) ;
	stop();
	delay (5000) ;
	
	
  }
  return 0 ;
}
