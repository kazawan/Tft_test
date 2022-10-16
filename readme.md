# 这是我第一次用tft
## 2022.10.15
B站地址：超详细ESP32驱动TFT屏幕教程，有手就行
```
https://www.bilibili.com/video/BV1Q24y1d7f6/?spm_id_from=333.788.top_right_bar_window_custom_collection.content.click
```
` ./userset ` 内含配置文件
```
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   27  // Chip select control pin
#define TFT_DC    25  // Data Command control pin
#define TFT_RST   26  // Reset pin (could connect to RST pin)

```

连线为espwroom32 的连线


## 2022.10.16 
### 今天试了lv_arduino 的支持，成功点亮



B站地址：【Arduino】怎样在arduino中配置和使用lvgl
```
https://www.bilibili.com/video/BV1Gg411R71g/?spm_id_from=333.1007.top_right_bar_window_custom_collection.content.click&vd_source=2097425578c361917ecd9ca79dce6b72
```


初步留意到这里时设置长宽高~~
```
disp_drv.hor_res = 128;
disp_drv.ver_res = 128;
```


