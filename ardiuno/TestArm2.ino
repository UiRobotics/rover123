int pulPin1 = 11;
int dirPin1 = 13;
int pulPin2 = 2; //left
int dirPin2 = 4;
int pulPin3 = 6; //right
int dirPin3 = 8;
int numofloops = 100; //2080 full rotation
int base_dir_Signal = 0;
int key_pressed;
int stepr = 0;
int stepl = 0;
int SM_speed = 10000;
void setup()
{
  // put your setup code here, to run once:
  pinMode(pulPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(pulPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(pulPin3, OUTPUT);
  pinMode(dirPin3, OUTPUT);
  
  Serial.begin(9600);
}


void loop() {

  for(int i = 0; i<numofloops; i++)
  {
    input();
    if(base_dir_Signal > 0)
      {
        //sets all directions to cw
        digitalWrite(dirPin1, HIGH);
  
      }


      if(base_dir_Signal < 0)
      {
        //sets all directions to ccw
        digitalWrite(dirPin1, LOW);
 

      }
      if (stepr > 0)
      {
        digitalWrite(dirPin2, LOW);
      }
      if (stepr < 0)
      {
        digitalWrite(dirPin2, HIGH);
      }
      if (stepl > 0)
      {
        digitalWrite(dirPin3, LOW);
      }
      if (stepl < 0)
      {
        digitalWrite(dirPin2, HIGH);
      }
    if (base_dir_Signal != 0)
    {
      digitalWrite(pulPin1, HIGH);
    }
    if (stepr != 0)
    {
      digitalWrite(pulPin2, HIGH);
    }
    if (stepl != 0)
    {
      digitalWrite(pulPin3, HIGH);
    }

    delayMicroseconds(10000);
    digitalWrite(pulPin1, LOW);
    digitalWrite(pulPin2, LOW);
    digitalWrite(pulPin3, LOW);
  }
}

void input()
{
    if (Serial.available())
  {
    key_pressed = Serial.read();
    if (key_pressed == '1')
    {
      SM_speed = 100;
    }
    else if (key_pressed == '2')
    {
      SM_speed = 200;
    }
    else if (key_pressed == '3')
    {
      SM_speed = 600;
    }
    else if (key_pressed == '4')
    {
      SM_speed = 800;
    }
    else if (key_pressed == '5')
    {
      SM_speed = 1000;
    }
    else if (key_pressed == '6')
    {
      SM_speed = 2500;
    }
    else if (key_pressed == '7')
    {
      SM_speed = 5000;
    }
    else if (key_pressed == '8')
    {
      SM_speed = 7500;
    }
    else if (key_pressed == '9')
    {
      SM_speed = 10000;
    }
    else if (key_pressed == '0')
    {
      base_dir_Signal = 0;
      stepr = 0;
      stepl = 0;
    }
    else if (key_pressed == 'a')
    {
      base_dir_Signal = -1;
    }
    else if (key_pressed == 'd')
    {
      base_dir_Signal = 1;
    }
    else if (key_pressed == 'i')
    {
      stepl = 1;
      stepr = 1;
    }
    else if (key_pressed == 'm')
    {
      stepr = -1;
      stepl = -1;
      }
      else if (key_pressed == 'j')
    {
      stepr = -1;
      stepl = 1;
      
    }
    else if (key_pressed == 'k')
    {
      stepr = 1;
      stepl = -1;
    }
  }
}

