// TODO: Change these values to the digital pin numbers on the Arduino connected to the button
int button_1_pin = 2;
int button_2_pin = 4;

// TODO: Change value to digital pwm pin numbers on the Arduino connected to the motor
// NOTE: pwm pins have a "~" in front of the number usually
int motor_1_pin = 3;
int motor_2_pin = 5;

void setup() {
  // Here we initialize the pins on the board to the code
  // We want to get information from the button so we will set them as an input
  pinMode(button_1_pin, INPUT);
  pinMode(button_2_pin, INPUT);

  // We want to send information to the motor so we will set them as an output
  pinMode(motor_1_pin, OUTPUT);
  pinMode(motor_2_pin, OUTPUT);
}

void loop() {
  // Here we check what the electrical value of the button pin is
  // We will know if the button is pressed or not based on what the value returns
  int button_1_value = digitalRead(button_1_pin);
  int button_2_value = digitalRead(button_2_pin);
  
  // TODO: Fill in the switch statement!
  // Note: We've provided a skeleton for a switch statement for this, 
  // but if you understand how to use if/else statements,
  // you are welcome to use those instead.S
  switch(button_1_pin){
    case HIGH:
      switch(button_2_pin){
        case HIGH:
          // TODO
        case LOW:
          // TODO
      }
    case: LOW:
      switch(button_2_pin){
        case HIGH:
          // TODO
        case LOW:
          // TODO
      }
  }
}
