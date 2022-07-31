#include <Mouse.h>
#include <Keyboard.h>
#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

const uint8_t spZERO[] PROGMEM = {0x69,0xFB,0x59,0xDD,0x51,0xD5,0xD7,0xB5,0x6F,0x0A,0x78,0xC0,0x52,0x01,0x0F,0x50,0xAC,0xF6,0xA8,0x16,0x15,0xF2,0x7B,0xEA,0x19,0x47,0xD0,0x64,0xEB,0xAD,0x76,0xB5,0xEB,0xD1,0x96,0x24,0x6E,0x62,0x6D,0x5B,0x1F,0x0A,0xA7,0xB9,0xC5,0xAB,0xFD,0x1A,0x62,0xF0,0xF0,0xE2,0x6C,0x73,0x1C,0x73,0x52,0x1D,0x19,0x94,0x6F,0xCE,0x7D,0xED,0x6B,0xD9,0x82,0xDC,0x48,0xC7,0x2E,0x71,0x8B,0xBB,0xDF,0xFF,0x1F};
const uint8_t spONE[] PROGMEM = {0x66,0x4E,0xA8,0x7A,0x8D,0xED,0xC4,0xB5,0xCD,0x89,0xD4,0xBC,0xA2,0xDB,0xD1,0x27,0xBE,0x33,0x4C,0xD9,0x4F,0x9B,0x4D,0x57,0x8A,0x76,0xBE,0xF5,0xA9,0xAA,0x2E,0x4F,0xD5,0xCD,0xB7,0xD9,0x43,0x5B,0x87,0x13,0x4C,0x0D,0xA7,0x75,0xAB,0x7B,0x3E,0xE3,0x19,0x6F,0x7F,0xA7,0xA7,0xF9,0xD0,0x30,0x5B,0x1D,0x9E,0x9A,0x34,0x44,0xBC,0xB6,0x7D,0xFE,0x1F};
const uint8_t spTWO[]  PROGMEM = {0x06,0xB8,0x59,0x34,0x00,0x27,0xD6,0x38,0x60,0x58,0xD3,0x91,0x55,0x2D,0xAA,0x65,0x9D,0x4F,0xD1,0xB8,0x39,0x17,0x67,0xBF,0xC5,0xAE,0x5A,0x1D,0xB5,0x7A,0x06,0xF6,0xA9,0x7D,0x9D,0xD2,0x6C,0x55,0xA5,0x26,0x75,0xC9,0x9B,0xDF,0xFC,0x6E,0x0E,0x63,0x3A,0x34,0x70,0xAF,0x3E,0xFF,0x1F};
const uint8_t spTHREE[]             PROGMEM ={0x0C,0x08,0xCA,0x44,0x02,0x1A,0xB0,0x40,0xC8,0x4D,0x15,0x73,0xCB,0xB4,0x39,0x0F,0xB9,0xE9,0x14,0xE6,0xAD,0xBE,0xE4,0x7E,0x50,0x50,0xA9,0xDF,0x91,0xE5,0x25,0x05,0x21,0x79,0x47,0x5E,0x7A,0x18,0x09,0xBD,0x5F,0x45,0xCB,0xC1,0xA8,0xF6,0x76,0x56,0xAD,0x2D,0x41,0x98,0xB3,0xEF,0xD4,0x2E,0x0C,0x5E,0x89,0xE5,0x66,0x65,0x3F,0xB8,0xC1,0x6B,0xF2,0x9A,0x0E,0x63,0x46,0xAF,0x38,0xAB,0x53,0xCC,0x03};
const uint8_t spREADY_TO_START[]    PROGMEM ={0xAE,0x91,0x85,0xD3,0x32,0xB8,0xB5,0xC6,0x35,0x4E,0x09,0xCA,0x7E,0x6A,0xDF,0xB9,0xCC,0xB4,0xFB,0xA9,0xE2,0xD4,0x30,0xD5,0xEE,0xB7,0x5A,0x55,0xEA,0x5A,0x10,0x99,0xA5,0x55,0x31,0x1B,0x1B,0x4E,0xA6,0x55,0xE5,0xAE,0xCA,0xD2,0x9D,0x5A,0x55,0xA6,0x08,0x49,0x2D,0x8D,0xB5,0x6C,0x11,0xB0,0x54,0x9A,0x06,0x0C,0xB0,0x8C,0x45,0x29,0xBC,0x4A,0x53,0xCB,0x4E,0xA5,0xA9,0xC2,0x4C,0xD5,0xF2,0x1A,0xA0,0x03,0x35,0x05,0xFC,0xA9,0x6C,0x01,0x05,0xFC,0x1D,0x0C,0x10,0x80,0xA6,0xD2,0x4F,0x1E,0x43,0x44,0x86,0xB4,0xBD,0xC5,0xAD,0x4E,0xE5,0x8B,0x77,0x18,0x37,0x59,0x85,0x9F,0xE6,0xA5,0xBA,0x78,0x67,0x33,0x6D,0x91,0x9F,0x22,0x1D,0xE6,0xD0,0x45,0xDA,0x49,0x46,0xB8,0x2C,0x00,0x03,0x64,0x19,0xCA,0x80,0x26,0x9B,0x11,0xE0,0x12,0x33,0x00,0xC0,0x03,0x00,0x00};
const uint8_t spTHE[]               PROGMEM ={0xA1,0xB5,0x86,0xD3,0xD8,0x1B,0xB9,0xD6,0x1A,0x0E,0x61,0x5F,0x18,0xDA,0xE2,0x58,0xC5,0xA0,0xCF,0x2A,0x6A,0x31,0x15,0xE5,0x2D,0x27,0x6F,0x23,0x94,0x85,0xF6,0xAE,0xBC,0x25,0x21,0xAE,0xBC,0x3D,0xAB,0x59,0xF5,0x26,0x75,0xDD,0x09,0xD1,0xD5,0x4D,0x37,0x44,0x4E,0xD6,0xEF,0x61,0x7C,0x6F,0x86,0xE4,0x41,0xEB,0x4A,0xB4,0x1D,0x1E,0x00,0x00};
const uint8_t spPROGRAM[]           PROGMEM ={0x0A,0x30,0x3E,0x55,0x00,0xAE,0x43,0xB8,0x3C,0xB5,0x54,0x77,0x95,0x7B,0x52,0x67,0x62,0x3C,0xA8,0xCD,0x4D,0x4F,0xEA,0x94,0x9F,0x3B,0xA7,0xDF,0x69,0xC9,0x8C,0xC9,0x11,0xA1,0xF4,0x26,0xE3,0xA9,0x92,0xC4,0xBC,0x8A,0x8A,0xDB,0x8C,0x10,0x73,0xE2,0x2A,0x9D,0xA4,0x83,0xCC,0x49,0xAA,0x4C,0xC5,0x55,0x8F,0x74,0xAB,0x0A,0x93,0x9A,0x43,0xDB,0x9F,0x3A,0x2C,0x4D,0x97,0x68,0x72,0x9B,0xDB,0xDE,0x76,0x77,0xA7,0x0B,0x39,0x32,0x54,0xE7,0xEE,0x7E,0xF4,0x21,0x7A,0xA4,0x72,0x9D,0x30,0x3A,0xCF,0xAD,0x18,0x69,0xDD,0x60,0x1C,0xA7,0x8A,0x66,0x55,0x83,0xF4,0x9A,0xCA,0x99,0x45,0x8D,0x5A,0x4B,0xA6,0x64,0x12,0x35,0x3A,0xAD,0xE6,0x54,0x4E,0xC4,0xE4,0xB5,0x69,0xB0,0xB9,0x05,0x52,0x45,0x1F,0xEE,0xEC,0xAE,0x1F};
const uint8_t spNOW[]               PROGMEM ={0xA9,0x4D,0x9A,0xCD,0x9C,0xDB,0xD6,0xF6,0xD4,0xC9,0x77,0xAA,0x79,0x95,0x5B,0xDF,0xFA,0xD6,0xB7,0xB9,0xED,0xE8,0x9D,0xDF,0x66,0xF3,0xDA,0x7D,0x48,0x83,0x9C,0x15,0xE2,0x96,0x38,0x0E,0x69,0x50,0x65,0x83,0xDC,0x93,0xB8,0x51,0x86,0x1D,0x0C,0x73,0xEC,0x46,0xE9,0x7A,0xCD,0x58,0x96,0x19,0xB5,0xC9,0x54,0x61,0x37,0x6A,0xF0,0x3E,0xD2,0x85,0x64,0x3D,0x00,0x00};
const uint8_t spPAUSE[]    PROGMEM = {0x00,0x00,0x00,0x00,0xFF,0x0F};

bool leftButtonPressed;
bool rightButtonPressed;

void setup() {
  Serial.begin(9600);
  Mouse.begin();
  Mouse.release(MOUSE_LEFT);
  Keyboard.begin();
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  pinMode(3, INPUT);

}

//Uploading the Code!: ppppp

void loop() {

  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

  if (leftButtonPressed || rightButtonPressed) {
    
    //Serial.print("Button pressed, starting automation!");
    /*CircuitPlayground.speaker.say(spTHREE);
    CircuitPlayground.speaker.say(spPAUSE);
    CircuitPlayground.speaker.say(spTWO);
    CircuitPlayground.speaker.say(spPAUSE);
    CircuitPlayground.speaker.say(spONE);
    CircuitPlayground.speaker.say(spPAUSE);
    CircuitPlayground.speaker.say(spPAUSE);
    CircuitPlayground.speaker.say(spREADY_TO_START);
    CircuitPlayground.speaker.end();*/

    /*delay(500);
    Keyboard.write('p');
    delay(900);
    Keyboard.write('p');
    delay(1500);
    Keyboard.print("12");
    delay(700);
    Keyboard.print("34");
    delay(1000);*/

    delay(3000);
    Keyboard.write('p');
    delay(100);
    Keyboard.write('p');
    delay(1000);
    Keyboard.print("1234");
    delay(1000);


    for (int i = 0; i < 20; i++) {
      Mouse.move(-40, -40, 0);
    }
    delay(100);
    for (int i = 0; i < 5; i++) {
      Mouse.move(30, 15, 0);
    }
    delay(200);
    Mouse.press(MOUSE_LEFT);
    for (int i = 0; i < 5; i++) {
      Mouse.move(0, 10, 0);
    }
      Mouse.release(MOUSE_LEFT);
      delay(1000);
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      delay(500);
      Keyboard.print("Phone");
      delay(100);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);

    delay(300);
  
    for (int i = 0; i < 20; i++) {
      Mouse.move(-40, 40, 0);
    }
    
    delay(300);
    Mouse.move(20, -23, 0);
    delay(400);
    Mouse.click();
    delay(500);
  
    for (int i = 0; i < 20; i++) {
      Mouse.move(40, -40, 0);
    }
    
    delay(600);
    Mouse.move(-20, 31, 0);
    Mouse.move(-20, 35, 0);
    Mouse.move(-20, 30, 0);
    delay(500);
  
    Mouse.press(MOUSE_LEFT);
    delay(600);
    Mouse.release(MOUSE_LEFT);
    delay(200);
    
    Mouse.move(-40, 45, 0);
    delay(500);
    Mouse.click();
    delay(600);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.release(KEY_LEFT_SHIFT );
    delay(300);
    Keyboard.press(KEY_BACKSPACE);
    delay(5000);
    Keyboard.release(KEY_BACKSPACE);
    delay(300);
    Keyboard.print("Help! I'm in anaphylactic shock. I'm in need of emergency medical assistance.");
    delay(1000);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(450);
    Keyboard.print("Here is my current location:");
    delay(450);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
  
    for (int i = 0; i < 20; i++) {
    Mouse.move(40, -40, 0);
    }
      
    delay(1000);
  
    Mouse.move(-70, 25, 0);
    Mouse.move(-35, 30, 0);
    delay(700);
    Mouse.click();
    delay(700);
    Mouse.move(0, 90, 0);
    Mouse.move(0, 67, 0);
    delay(500);
    Mouse.click();
  }
  
}