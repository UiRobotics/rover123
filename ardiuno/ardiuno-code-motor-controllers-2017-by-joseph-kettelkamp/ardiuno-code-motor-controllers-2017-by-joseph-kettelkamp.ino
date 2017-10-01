#define GROUP_MOTOR_NUMBER 1
#define GROUP_DIRECTION    2
#define GROUP_POWER        3

#define START_CHAR         '!'
#define STOP_ALL           's'
#define END_CHAR           ';'
#define MSG_SEP_CHAR       ':'
#define MAX_MSG_SIZE       31

#define FORWARD            '1'
#define BACKWARD           '0'

char in_byte = 0;
char motor_byte[MAX_MSG_SIZE];
char power_byte[MAX_MSG_SIZE];
char direction_byte = 0;

int read_index = 0;
int read_group_index = 0;
bool message_done = false;

void setup() {

  Serial.begin(9600);
}

void loop() {

  while(Serial.available() == 0) {}
  in_byte = Serial.read();

  if(in_byte == START_CHAR)
  {
    read_index = 1;
    read_group_index = 1;
    message_done = false;
  }else if(in_byte == END_CHAR)
  {
    read_index = 0;
    read_group_index = 0;
    message_done = true;
  }else if(in_byte == MSG_SEP_CHAR)
  {
    read_index = 1;
    read_group_index++;
  }else if(read_index != 0)
  {
    if(read_group_index == GROUP_MOTOR_NUMBER)
    {
      
    }else if(read_group_index == GROUP_DIRECTION)
    {
      
    }else if(read_group_index == GROUP_POWER)
    {
      
    }
  }
}
