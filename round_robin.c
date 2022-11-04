int led_array[] = {2, 3, 4, 5, 6, 7}; // output pins
int cpu_burst[] = {8000, 6000, 4000, 10000,12000, 8000}; //  milliseconds
int time_quantum = 2000; // milliseconds
int remaining_time;
void setup() {
  // set up all the LEDs as OUTPUT
  for(int i = 0; i < 6; i++) {
  pinMode(led_array[i], OUTPUT);
  } 
}

void loop() {
  for(int i = 0; i < 6; i++) {
  	remaining_time = cpu_burst[i] - time_quantum; // for getting the remaining time of each process
    delay(500);
    if(remaining_time!=0){ 
      	cpu_burst[i] = remaining_time; // update the value of the cpu_burst
       	digitalWrite(led_array[i], HIGH);
        delay(time_quantum);   // wait for 2 seconds
      	digitalWrite(led_array[i], LOW);  
    }
    else{	
    	digitalWrite(led_array[i], LOW);    
    }
  	delay(500);
  }
}
