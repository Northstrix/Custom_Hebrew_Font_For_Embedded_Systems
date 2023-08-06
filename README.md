# Custom_Hebrew_Font_For_Embedded_Systems


[![image](http://i.creativecommons.org/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

## Usage

```cpp
void setup() {
  tft.begin();
  tft.fillScreen(0x0000);
  tft.setRotation(1);
  /*
  print_custom_hebrew_font("Abgdhizct\"CqL", 0, 0, 0x041c);
  print_custom_hebrew_font("MmNnsapfXxkr", 50, 0, 0x041c);
  print_custom_hebrew_font("ST.,!?\"", 100, 0, 0x041c);
  */
  uint16_t colors[5] = { // Blue, Yellow, Purple, Green, Red
    0x041c, 0xfde0, 0xb81c, 0x87a0, 0xf00c
  };
  print_custom_multi_colored_hebrew_font("ANcNi LA riA'm", 0, 0, colors, 5);
  print_custom_multi_colored_hebrew_font("AT hdbr'm Cp'", 36, 0, colors, 4);
  print_custom_multi_colored_hebrew_font("Shm, ANcNi riA'm", 72, 0, colors, 3);
  print_custom_multi_colored_hebrew_font("AiTm Cp' SANcNi.", 108, 0, colors, 1);
  print_custom_multi_colored_hebrew_font("ANA's N'n", 180, 150, colors, 2);
}
```
