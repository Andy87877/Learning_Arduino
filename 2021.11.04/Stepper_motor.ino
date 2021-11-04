#include <Unistep2.h>
Unistep2 stepper(D3, D4, D5, D6, 4096, 1000);
void setup(){}

void loop() {
  stepper.run();
  if ( stepper.stepsToGo() == 0 ){
    stepper.move(-64);
    delay(1000);
  }
}
