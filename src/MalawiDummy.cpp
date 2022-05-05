/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#line 1 "c:/Users/schul/Documents/MalawiDummy/src/MalawiDummy.ino"
/*
 * Project MalawiDummy
 * Description:
 * Author:
 * Date:
 */
#include <Particle.h>
void setup();
void loop();
#line 8 "c:/Users/schul/Documents/MalawiDummy/src/MalawiDummy.ino"
PRODUCT_ID(12437);
PRODUCT_VERSION(28);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Time.setFormat(TIME_FORMAT_ISO8601_FULL);
  String Dummy = "Time.0.TIME,Runtime.Duration\n" + String(Time.now()) + "," + String(millis());
  Particle.publish("Data", Dummy);
  delay(15min);
}