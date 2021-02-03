void set_up() {

  FastLED.addLeds<WS2811, LED_PIN, BRG>(leds, NUM_LEDS);
  for (int i = 0; i <= 30; i++) 
  {
     leds[NUM_LEDS / 2] = CRGB (r,g,b);
     leds[(NUM_LEDS / 2) + i] = CRGB (r,g,b);
     leds[(NUM_LEDS / 2) - i] = CRGB (r,g,b);
     delay(40);
    FastLED.show();
  }
  
  Serial.begin(9600);
   pinMode(LED_PIN,OUTPUT);
   pinMode(trigPin, OUTPUT);  
   pinMode(echoPin, INPUT);

}
