#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN 6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 250

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
// NEO_KHZ800 800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
// NEO_KHZ400 400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
// NEO_GRB Pixels are wired for GRB bitstream (most NeoPixel products)
// NEO_RGB Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
// NEO_RGBW Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

byte i; //Global counter variable


void setup() {
strip.begin();
strip.show(); // Initialize all pixels to 'off'
}

void loop() {
for (i = 0; i <= 40; i++) strip.setPixelColor(i, 255, 30, 0);
for (i = 41; i <= 80; i++) strip.setPixelColor(i, 255, 30, 1);
for (i = 81; i <= 149; i++) strip.setPixelColor(i, 230, 60, 2);
for (i = 150; i <= 250; i++) strip.setPixelColor(i, 255, 150, 5);

strip.show();
strip.setBrightness(100);

}
