int buzzer; //introduce the variable for the buzzer
int button; //introduce the variable for the button
int once; //introduce the variable which allows the arduino to run only once.
int button_state; //introduce the variable which reads either HIGH or LOW linked with the button
int timer_time; //introduce the variable for timer time set
void setup(){
  buzzer = 10; //buzzer is connected with the pin 10
  button = 5; //button is connected with the pin 5
  once = LOW;  // set an arbitrary value to this variable
  pinMode(buzzer, OUTPUT); //buzzer pin is set to output
  pinMode(button, INPUT); //button pin is set to input
  timer_time = 2000; //What time shall the timer run before buzzing?
  delay(timer_time); //Telling the arduino to delay the buzzer till the given time
}
void loop(){
  button_state = digitalRead(button); //stores the state of the button
  if(button_state == LOW && once == LOW){ //if the button is not yet pressed and the variable value is not yet changed
    digitalWrite(buzzer, HIGH); //then let the buzzer run with the specific tune
    delay(400);
    digitalWrite(buzzer, LOW);
    delay(400);
  }
  else { //if the button is pressed i.e button_state == HIGH
    digitalWrite(buzzer, LOW); //then turn the buzzer off
    once = HIGH; //change the value of such variable such that the arduino can run only once.
  }
}