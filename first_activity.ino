// TODO: Change this value to the digital pin number on the Arduino connected to the button
int button_pin = 2;

// TODO: Change value to analog pin number on the Arduino connected to the motor
// NOTE: analog pin values often have an A in front of them. For example, analog pin 10 is often written as A10
int motor_pin = 3;

void setup() {
  // Here we initialize the pins on the board to the code
  // We want to get information from the button so we will set it as an input
  pinMode(button_pin, INPUT);

  // We want to send information to the motor so we will set it as an output
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  // Here we check what the electrical value of the button pin is
  // We will know if the button is pressed or not based on what the value returns
  int button_value = digitalRead(button_pin);
  
  // TODO: Fill in the switch statement!
  switch(button_value){
  // Think about the states we will need for this statement!
  }
}
