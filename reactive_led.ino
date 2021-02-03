#include <FastLED.h>

int r=234;
int g=0;
int b=40;

#define LED_PIN     3
#define NUM_LEDS    60 
int trigPin = 5;    
int echoPin = 6; 

long duration, dist, average;   
long aver[3];   //array for average
 
CRGB leds[NUM_LEDS];
CRGB led[NUM_LEDS];
int on = 3; ///////////////////////

void setup() {
  set_up();
  randomSeed (analogRead(0));
}

void loop() {
  
  test_measure();  
  set_brightness();

  while (on != 0) {
    fade_rgb();
  }

  //while (on != 0) {
  //  middle_anim();
  //}

  //while (on != 0) {
  //  random_anim();
  //}
  
 FastLED.show();
 delay(500);

}
