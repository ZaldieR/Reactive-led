void fade_rgb() {
  r = 0;
  g = 0;
  b = 0;
  int fspeed = 15;

  for (g=0; g<128; g++) {
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);   
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (g; g<256; g++) {
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

/////////////////////////////////////
  for (r=0; r<128; r++) {
    g -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (r; r<256; r++) {
    g -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (b=0; b<128; b++) {
    r -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (b; b<256; b++) {
    r -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (g=0; g<128; g++) {
    b -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (g; g<256; g++) {
    b -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (r=0; r<128; r++) {
    g = 255;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (r; r<256; r++) {
    g = 255;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (b=0; b<128; b++) {
    r = 255;
    g -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (b; b<256; b++) {
    r = 255;
    if (g > 0) {
      g -= 1;
    }
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (g=0; g<128; g++) {
    b = 255;
    r -= 1;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (g; g<256; g++) {
    b = 255;
    if (r > 0) {
      r -= 1;
    }
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  ///////////////////////////////////

  for (r=0; r<128; r++) {
    b = 255;
    g = 255;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

  for (r; r<256; r++) {
    b = 255;
    g = 255;
    leds[1] = CRGB(r, g, b);
    FastLED.show();
    all();
    delay(fspeed);
  }

  test_measure();
  set_brightness();
  if (on == 0){
    return;
  }

}
