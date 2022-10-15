#include <Arduino.h>


#include <SPI.h> //导入库
#include <TFT_eSPI.h> 
  
TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  // put your setup code here, to run once:
  tft.init();                               //初始化
  tft.fillScreen(TFT_BLACK);                //屏幕颜色
  tft.setCursor(10, 64, 2);                 //设置起始坐标(10, 10)，1 号字体
  tft.setTextColor(TFT_YELLOW);             //设置文本颜色为黄色
  tft.setTextSize(2);                       //设置文字的大小 (1~7)
  tft.println("KAZAWAN");                  //显示文字
  
  
  Serial.begin(115200);
  
}
void loop() {
  // put your main code here, to run repeatedly:
}