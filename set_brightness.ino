void set_brightness() {
  dist=(aver[0]+aver[1]+aver[2])/3;    
  if ( dist<50 ) {
    if (on == 0) {       //éteint devient allumé fort
      on = 1;
    }
    else if (on == 1) {  //allumé fort devient allumé moins fort
      on = 2;
    }
    else if (on == 2) {
      on = 3;
    }
    else if (on == 3) {
      on = 0;
    }
  }

    if (on == 1) {
      FastLED.setBrightness(255);
    }
    else if (on == 2) {
      FastLED.setBrightness(100);
    }
    else if (on == 3) {
      FastLED.setBrightness(30);
    }
    else {
      FastLED.setBrightness(0);
    }
}
