#include <Arduino.h>
#include <lvgl.h>
#include <init/init.h>

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  connectWifi();
  lv_init();
}

void loop()
{
  // put your main code here, to run repeatedly:
}