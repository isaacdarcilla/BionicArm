//  BionicArm - electronic fingering style
//  Free and open source under General Public
//  License Version 3.0
//
//  Isaac D. Arcilla
//
//  Gmail  : isaacadarcilla@gmail.com
//  Github : github.com/isaacdarcilla
//  Facebook : fb.me/isaacdarcilla
//  
//  June 15, 2017 

#incude <Servo.h>   //include servo header library

Servo servo_one;    //servo finger 1
Servo servo_two;    //servo finger 2
Servo servo_three;  //servo finger 3
Servo servo_four;   //servo finger 4
Servo servo_five;   //servo finger 5

int move_one = 0;   //flex movement finger 1
int move_two = 1;   //flex movement finger 2
int move_three = 2; //flex movement finger 3
int move_four = 3;  //flex movement finger 4
int move_five = 4;  //flex movement finger 5

voi setup()
{
  servo_one.attach(5);   //arduino pin number attached
  servo_two.attach(3);   //arduino pin number attached
  servo_three.attach(9); //arduino pin number attached
  servo_four.attach(10); //arduino pin number attached
  servo_five.attach(6);  //arduino pin number attached
}

void loop()
{
  //first finger operation instruction start
  int move_one_ops;
  int servo_one_ops
  
  move_one_ops = analogRead(move_one);
  servo_one_ops = map(move_one_ops, 1020, 1023, 180, 0);
  servo_one_ops = constrain(servo_one_ops, 0, 180);
  servo_one.write(servo_one_ops);
  //first finger operation instruction end
  
  //second finger operation instruction start
  int move_two_ops;
  int servo_two_ops
  
  move_two_ops = analogRead(move_two);
  servo_two_ops = map(move_two_ops, 1020, 1023, 180, 0);
  servo_two_ops = constrain(servo_two_ops, 0, 180);
  servo_two.write(servo_two_ops);
  //second finger operation instruction end
    
  //third finger operation instruction start
  int move_three_ops;
  int servo_three_ops
  
  move_three_ops = analogRead(move_three);
  servo_three_ops = map(move_three_ops, 1020, 1023, 180, 0);
  servo_three_ops = constrain(servo_three_ops, 0, 180);
  servo_three.write(servo_three_ops);
  //third finger operation instruction end
  
  //fourth finger operation instruction start
  int move_four_ops;
  int servo_four_ops
  
  move_four_ops = analogRead(move_four);
  servo_four_ops = map(move_four_ops, 1020, 1023, 180, 0);
  servo_four_ops = constrain(servo_four_ops, 0, 180);
  servo_four.write(servo_four_ops);
  //fourth finger operation instruction end

  //fifth finger operation instruction start
  int move_five_ops;
  int servo_five_ops
  
  move_five_ops = analogRead(move_five);
  servo_five_ops = map(move_five_ops, 1020, 1023, 180, 0);
  servo_five_ops = constrain(servo_five_ops, 0, 180);
  servo_five.write(servo_five_ops);
  //fifth finger operation instruction end  
}
