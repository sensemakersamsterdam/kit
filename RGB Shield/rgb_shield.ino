// Install [Adafruit_NeoPixel_Library] first.
// (https://github.com/adafruit/Adafruit_NeoPixel)
#include <Adafruit_NeoPixel.h>

#define PIN     D2

// When we setup the NeoPixel library, we tell it how many pixels, 
// and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, 
  // all the way up to the count of pixels minus one.

  // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
  // Moderately bright green color.
        pixels.setPixelColor(0, pixels.Color(i * 255, j * 255, k * 255));
        // This sends the updated pixel color to the hardware.
  pixels.show();
        // Delay for a period of time (in milliseconds).
        delay(200);
      }
    }
  }
}
