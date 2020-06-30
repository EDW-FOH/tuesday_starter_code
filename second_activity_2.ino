// TODO: Change these values to the digital pin numbers on the Arduino connected to the button
int limit_switch_pin = 2;

// TODO: Change values to analog pin numbers on the Arduino connected to the motor
// NOTE: analog pin values often have an A in front of them. For example, analog pin 10 is often written as A10
int motor_1_pin = 3;
int motor_2_pin = 5;

void setup() {
  // Here we initialize the pins on the board to the code
  // We want to get information from the button so we will set them as an input
  pinMode(limit_switch_pin, INPUT);

  // We want to send information to the motor so we will set them as an output
  pinMode(motor_1_pin, OUTPUT);
  pinMode(motor_2_pin, OUTPUT);
}

void loop() {
  // Here we check what the electrical value of the button pin is
  // We will know if the button is pressed or not based on what the value returns
  int limit_switch_value = digitalRead(limit_switch_pin);
  
  // TODO: Fill in the switch statement!
  switch(limit_switch_value){
    case HIGH:
      
    case LOW:

  }
}
