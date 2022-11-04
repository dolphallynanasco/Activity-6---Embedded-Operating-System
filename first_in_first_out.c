int led_array[] = {2, 3, 4, 5, 6, 7}; // output pins
int time[] = {10000, 5000, 8000, 3000,1000, 2000}; // milliseconds
void setup() {
// set up all the LEDs as OUTPUT
  for(int i = 0; i < 6; i++) {
  pinMode(led_array[i], OUTPUT);
  } 
 
}

void loop() {
  for(int i = 0; i < 6; i++) { //lighting all LED
    digitalWrite(led_array[i],HIGH);
    delay(time[i]);
    digitalWrite(led_array[i], LOW);
  }
  //break
  for(;;){
    //empty
  }
}
