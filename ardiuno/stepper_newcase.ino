int pulPin1 = 9;
int dirPin1 = 8;
int step1 = 0;

int pulPin2 = 7;
int dirPin2 = 6;
int step2 = 0;

int pulPin3 = 5;
int dirPin3 = 4;
int step3 = 0;

int pulPin4 = 3;
int dirPin4 = 2;
int step4 = 0;

int dir_Signal = 0;
long delay_Millis = 1275; // Set value

long currentMillis = 0; 
long previousMillis = 0;

int numofloops = 100; //2080 full rotation
int num = 0;
int SM_speed = 200;

int caseinput;
int key_pressed;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pulPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);

  pinMode(pulPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);

  pinMode(pulPin3, OUTPUT);
  pinMode(dirPin3, OUTPUT);

  pinMode(pulPin4, OUTPUT);
  pinMode(dirPin4, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(SM_speed);
  Serial.println(step1);
  
  Serial.println(step2);
  
  Serial.println(step3);
  
  Serial.println(step4);  
}

void velocity(int pul_motor,int dir_motor, int & pos, int dir_input, int speed_input)
{
  
   if (dir_imput > 0)
   {
    digitalWrite(dir_motor, HIGH); 
    pos++;
   }
   if (dir_input < 0)
   {
    digitalWrite(dir_motor, LOW);
    pos--; 
   }

   digitalWrite(pul_motor, HIGH);
   delayMicroseconds(speed_input);
   digitalWrite(pul_motor, LOW);
   
}
void angle(int pul_motor,int dir_motor, int & pos, int dir_input, int speed_input, float degree)
{
  float pos = 0;
  pos = 
  if (dir_imput > 0)
   {
    digitalWrite(dir_motor, HIGH); 
    pos++;
   }
   if (dir_input < 0)
   {
    digitalWrite(dir_motor, LOW);
    pos--; 
   }

   digitalWrite(pul_motor, HIGH);
   delayMicroseconds(speed_input);
   digitalWrite(pul_motor, LOW);
   
}

