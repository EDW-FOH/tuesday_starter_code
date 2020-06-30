// TODO: Change values to analog pin numbers on the Arduino connected to the motor
// NOTE: analog pin values often have an A in front of them. For example, analog pin 10 is often written as A10
int motor_1_pin = 3;
int motor_2_pin = 5;

void setup() {
  // Start up the serial monitor
  Serial.begin(9600);
  
  // We want to send information to the motor so we will set them as an output
  pinMode(motor_1_pin, OUTPUT);
  pinMode(motor_2_pin, OUTPUT);
}

void loop() {

  // The following code block allows us to read from the Serial monitor
  while (Serial.available() == 0) {} 
  String movement_command = Serial.readString();
  
  // The output string contained a newline character which was causing some trouble
  movement_command.replace("\n","");
  
  // The switch statement only takes in numbers
  // These if/else statements allow us to convert the strings to unique integers
  int movement_int = 0;
  if(movement_command == "w"){
    movement_int = 1;  
  }
  else if(movement_command == "a"){
    movement_int = 2;  
  }
  else if(movement_command == "s"){
    movement_int = 3;  
  }
  else if(movement_command == "d"){
    movement_int = 4;  
  }

  
  // TODO: Fill in the switch statement!
  switch(movement_int){
    case 1:
      // if we input a w
      break;
    case 2:
      // if we input an a
      break;
    case 3:
      // if we input a s
      break;
    case 4:
      // if we input a d
      break;
    default:
      // else...
  }
}
