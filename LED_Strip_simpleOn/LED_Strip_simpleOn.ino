#include <Adafruit_DotStar.h>
#include <SPI.h>

#define NUMPIXELS 60

// Create the strip

#define DATAPIN    4
#define CLOCKPIN   5
Adafruit_DotStar strip = Adafruit_DotStar(
  NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);

void simpleOn(uint8_t head, uint8_t tail, uint8_t greenValue, uint8_t redValue, uint8_t blueValue) {
  for (int i=(tail-1); i < head; i++){
    strip.setPixelColor(i, greenValue, redValue, blueValue) ;
  }
  strip.show() ;
}

void setup() {
  strip.begin() ;
  strip.show() ; // This turns off the LEDs within NUMPIXELS

}

void loop() {
  uint8_t head, tail ;
  uint8_t greenValue ;
  uint8_t redValue ;
  uint8_t blueValue ;
  head = 60 ;
  tail = 1 ;

  greenValue = 0;
  redValue = 255;
  blueValue = 255;

  simpleOn(head, tail, greenValue, redValue, blueValue) ;
  delay(1000) ;

}
//>
