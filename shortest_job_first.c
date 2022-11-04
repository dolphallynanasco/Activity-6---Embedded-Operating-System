int led_array[] = {2, 3, 4, 5, 6, 7}; // output pins
int cpu_burst[] = {8000, 6000, 4000, 3000, 10000, 7000}; // milliseconds
int temp;
int temp2;
void setup() {
  // set up all the LEDs as OUTPUT
  for(int i = 0; i < 6; i++) {
  pinMode(led_array[i], OUTPUT);
  } 
}

void loop() {
  //bubble sort
  for(int i = 0; i < 8; i++) { 
    for(int j = i + 1; j < 8; j++ ) {
      if(cpu_burst[j] < cpu_burst[i]){ //checking if the 2nd value is lower that the 1st value 
        temp2 = led_array[i];          //include led_array in the sorting process to match index with cpu_burst
      	temp = cpu_burst[i];
        cpu_burst[i] = cpu_burst[j];
        led_array[i] = led_array[j];
        cpu_burst[j] = temp;
        led_array[j] = temp2;
      }
    }
    }
   for(int i = 0 ; i < 7; i++) { //lighting all LEDs
  	digitalWrite(led_array[i], HIGH);
    delay(cpu_burst[i]); 
    digitalWrite(led_array[i], LOW);
  }
  //break
  for(;;) {
  }
}
