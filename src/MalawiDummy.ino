/*
 * Project MalawiDummy
 * Description:
 * Author:
 * Date:
 */
#include <Particle.h>
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