// Minimal example for the Adafruit_CompositeVideo library.
// Continually displays value from analog input.
// Written for Adafruit Circuit Playground Express (not 'classic'),
// but can also work on Feather M0, Arduino Zero or similar boards.
// Requires latest Adafruit_GFX and Adafruit_ZeroDMA libraries.
// Gator-clip composite video 'tip' to pin A0, 'ring' to GND.

#include <Adafruit_GFX.h>
#include <Adafruit_CompositeVideo.h>

Adafruit_NTSC40x24 display; // NTSC 40x24 currently the only supported type

extern int get_pi_hex_digit(int id, char *chx);

void setup() {
  if(!display.begin()) for(;;);   // Initialize display; halt on failure
  display.fillScreen(0);          // Clear display
  display.setCursor(4, 4);        // Inset slightly to avoid overscan area
  printf("3.");
}

int idx = 0;

void loop() {
  char chx[16];
  get_pi_hex_digit(idx, chx);
  display.printf("%s", chx);
  delay(100);                     // Wait 1/10 sec
}
