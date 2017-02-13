
//Pins ordered from least volatile to most volatile (1 = most stable)

int led_1 = 3;
int led_2 = 5;
int led_3 = 6;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;
int mntn_led = 4;

int counter_1 = 0;
int counter_2 = 0;
int counter_3 = 0;
int counter_4 = 0;
int counter_5 = 0;
int counter_6 = 0;

int switch_1,switch_2,switch_3,switch_4,switch_5,switch_6 = 1;

int rand_1,rand_2,rand_3,rand_4,rand_5,rand_6;

int i_1,i_2,i_3,i_4,i_5,i_6;


int rand_start_1 = random(110,146);
int rand_start_2 = random(92,164);
int rand_start_3 = random(74,182);
int rand_start_4 = random(56,200);
int rand_start_5 = random(38,218);
int rand_start_6 = random(20,236);

int test1,test2,test3,test4,test5,test6;

void setup(){
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
  pinMode(led_5,OUTPUT);
  pinMode(led_6,OUTPUT);
  pinMode(mntn_led,OUTPUT);
  
  for(int i_1 = 0; i_1 < rand_start_1; i_1 = i_1++){
    analogWrite(led_1,i_1);
    delay(5); 
  }
  for(int i_2 = 0; i_2 < rand_start_2; i_2 = i_2++){
    analogWrite(led_2,i_2);
    delay(5); 
  }
  for(int i_3 = 0; i_3 < rand_start_3; i_3 = i_3++){
    analogWrite(led_3,i_3);
    delay(5); 
  }
  for(int i_4 = 0; i_4 < rand_start_4; i_4 = i_4++){
    analogWrite(led_4,i_4);
    delay(5); 
  }
  for(int i_5 = 0; i_5 < rand_start_5; i_5 = i_5++){
    analogWrite(led_5,i_5);
    delay(5); 
  }
  for(int i_6 = 0; i_6 < 64; i_6 = i_6++){
    analogWrite(led_6,i_6);
    delay(5);
  }
  digitalWrite(mntn_led,HIGH);  
}

void loop(){
  test1 = random(1,3);
  test2 = random(1,3);
  test3 = random(1,3);
  test4 = random(1,3);
  test5 = random(1,3);
  test6 = random(1,3);

  
  
  if(counter_1 == 0){
    analogWrite(led_1,i_1);
    counter_1 = counter_1 + 1;
    rand_1 = random(28,34); 
  }
  else if(counter_1 < rand_1 || switch_1 == 1){
    i_1 = i_1 + 1;
    analogWrite(led_1,i_1);
    counter_1 = counter_1 + 1;
  }
  else if(counter_1 < rand_1 || switch_1 == -1){
    i_1 = i_1 - 1;
    analogWrite(led_1,i_1);
    counter_1 = counter_1 + 1;
  }
  else if(counter_1 == rand_1){
    rand_1 = random(28,34);
    switch_1 = -switch_1;
    counter_1 = 0;
  }
}

























