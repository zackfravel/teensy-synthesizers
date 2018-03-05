#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       osc;             //xy=152,345
AudioFilterStateVariable low_pass;        //xy=405,433
AudioOutputAnalog        dac;             //xy=661,418
AudioConnection          patchCord1(osc, 0, low_pass, 0);
AudioConnection          patchCord2(low_pass, 0, dac, 0);
// GUItool: end automatically generated code

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

