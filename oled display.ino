//always run the scan to ensure your OLED display is actually connected before running the actual display program

#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);

  delay(1000);

  Serial.println("Scanning I2C...");

  for (byte address = 1; address < 127; address++) {
    Wire.beginTransmission(address);

    if (Wire.endTransmission() == 0) {
      Serial.print("Found: 0x");
      Serial.println(address, HEX);
    }
  }

  Serial.println("Scan complete");
}

void loop() {
}





#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(
  SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1
);

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED initialization failed!");
    while (1);
  }

  Serial.println("OLED initialized!");

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1); //used to denote text size
  display.setCursor(10, 10); //used for alignment
  display.println("wassup JD");
  

  display.setTextSize(1);
  display.setCursor(10, 40);
  display.println("what's going on?");

  display.display();
}

void loop() {
}
