void random_anim() {
  int nb_leds = 1;
  int a = random (255);
  int c = random (255);
  int d = random (255);
  int led = random (5);//(NUM_LEDS);
  int aspeed = 15;
  show_down();
  
  for (int i=0; i<85; i++) {
    leds[led] = CRGB (a, c, d);
    FastLED.setBrightness(i);
    FastLED.show();
    delay(aspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (int i=85; i<170; i++) {
    leds[led] = CRGB (a, c, d);
    FastLED.setBrightness(i);
    FastLED.show();
    delay(aspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (int i=170; i<255; i++) {
    leds[led] = CRGB (a, c, d);
    FastLED.setBrightness(i);
    FastLED.show();
    delay(aspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }
}
