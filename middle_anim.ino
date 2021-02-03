void middle_anim() {
  r = 0;
  g = 0;
  b = 0;

  for (int i=0; i<NUM_LEDS/2; i++) {
    r = random(255);
    g = random(255);
    b = random(255);
    leds[NUM_LEDS / 2 + i + 1] = CRGB (r, g, b);
    leds[NUM_LEDS / 2 + i] = CRGB (r, g, b);
    leds[NUM_LEDS / 2 - i] = CRGB (r, g, b);
    leds[NUM_LEDS / 2 - i - 1] = CRGB (r, g, b);
    FastLED.show();
    delay(100);
    show_down();
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }
  
}
