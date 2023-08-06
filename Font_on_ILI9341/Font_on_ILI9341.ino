/*
 *Custom_Hebrew_Font_For_Embedded_Systems
 *Developed by Maxim Bortnikov
 *CC0
 *For more information please visit
 *https://github.com/Northstrix/Custom_Hebrew_Font_For_Embedded_Systems
*/
#include "custom_hebrew_font.h"
#include <Adafruit_GFX.h>                                                   // include Adafruit graphics library
#include <Adafruit_ILI9341.h>                                               // include Adafruit ILI9341 TFT library
#define TFT_CS    39                                                        // TFT CS  pin is connected to Teensy pin 39
#define TFT_RST   40                                                        // TFT RST pin is connected to Teensy pin 40
#define TFT_DC    41                                                        // TFT DC  pin is connected to Teensy pin 41
                                                                            // SCK (CLK) ---> Teensy pin 13
                                                                            // MOSI(DIN) ---> Teensy pin 11

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

#define letter_spacing_pxls 6
#define space_between_letter 16
#define regular_shift_down 16
#define shift_down_for_mem 12
#define shift_down_for_shin 13
#define shift_down_for_tsadi 8
#define shift_down_for_dot_and_comma 38

void print_custom_hebrew_font(String text_to_print, int y, int offset_from_the_right, uint16_t font_color){
  int shift_right = 320 - offset_from_the_right;
  for (int s = 0; s < text_to_print.length(); s++){ // Traverse the string
    
    if (text_to_print.charAt(s) == ' '){ // Space
      shift_right -= space_between_letter;
    }
    
    if (text_to_print.charAt(s) == 'A'){ // Alef
      shift_right -= sizeof(Alef)/sizeof(Alef[0]);
      for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 24; j++) {
          if (Alef[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '"'){ // Apostrophe
      shift_right -= sizeof(Apostrophe)/sizeof(Apostrophe[0]);
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
          if (Apostrophe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'a'){ // Ayin
      shift_right -= sizeof(Ayin)/sizeof(Ayin[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 24; j++) {
          if (Ayin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'b'){ // Bet
      shift_right -= sizeof(Bet)/sizeof(Bet[0]);
      for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 24; j++) {
          if (Bet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'c'){ // Chet
      shift_right -= sizeof(Chet)/sizeof(Chet[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 24; j++) {
          if (Chet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'd'){ // Dalet
      shift_right -= sizeof(Dalet)/sizeof(Dalet[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Dalet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'm'){ // ending mem
      shift_right -= sizeof(ending_mem)/sizeof(ending_mem[0]);
      for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 24; j++) {
          if (ending_mem[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'n'){ // ending nun
      shift_right -= sizeof(ending_nun)/sizeof(ending_nun[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 39; j++) {
          if (ending_nun[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'f'){ // ending pe
      shift_right -= sizeof(ending_pe)/sizeof(ending_pe[0]);
      for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_pe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'q'){ // ending qaf
      shift_right -= sizeof(ending_qaf)/sizeof(ending_qaf[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_qaf[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'x'){ // ending tsadi
      shift_right -= sizeof(ending_tsadi)/sizeof(ending_tsadi[0]);
      for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_tsadi[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'g'){ // Gimel
      shift_right -= sizeof(Gimel)/sizeof(Gimel[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 24; j++) {
          if (Gimel[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'h'){ // He
      shift_right -= sizeof(He)/sizeof(He[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 24; j++) {
          if (He[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'L'){ // Lamed
      shift_right -= sizeof(Lamed)/sizeof(Lamed[0]);
      if (s != 0)
        shift_right += 12;
      for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 40; j++) {
          if (Lamed[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'M'){ // Mem
      shift_right -= sizeof(Mem)/sizeof(Mem[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 29; j++) {
          if (Mem[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_mem, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'N'){ // Nun
      shift_right -= sizeof(Nun)/sizeof(Nun[0]);
      for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 24; j++) {
          if (Nun[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'p'){ // Pe
      shift_right -= sizeof(Pe)/sizeof(Pe[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Pe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'C'){ // Qaf
      shift_right -= sizeof(Qaf)/sizeof(Qaf[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Qaf[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'k'){ // Qof
      shift_right -= sizeof(Qof)/sizeof(Qof[0]);
      for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 38; j++) {
          if (Qof[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'r'){ // Resh
      shift_right -= sizeof(Resh)/sizeof(Resh[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Resh[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 's'){ // Samekh
      shift_right -= sizeof(Samekh)/sizeof(Samekh[0]);
      for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24; j++) {
          if (Samekh[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'S'){ // Shin
      shift_right -= sizeof(Shin)/sizeof(Shin[0]);
      for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 27; j++) {
          if (Shin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_shin, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'T'){ // Tev
      shift_right -= sizeof(Tav)/sizeof(Tav[0]);
      for (int i = 0; i < 33; i++) {
        for (int j = 0; j < 24; j++) {
          if (Tav[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 't'){ // Tet
      shift_right -= sizeof(Tet)/sizeof(Tet[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Tet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'X'){ // Tsadi
      shift_right -= sizeof(Tsadi)/sizeof(Tsadi[0]);
      for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 32; j++) {
          if (Tsadi[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_tsadi, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'i'){ // Vav
      shift_right -= sizeof(Vav)/sizeof(Vav[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 24; j++) {
          if (Vav[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '\''){ // Yod
      shift_right -= sizeof(Yod)/sizeof(Yod[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
          if (Yod[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'z'){ // Zayin
      shift_right -= sizeof(Zayin)/sizeof(Zayin[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Zayin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '.'){ // Dot
      shift_right -= sizeof(dot)/sizeof(dot[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          if (dot[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_dot_and_comma, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == ','){ // Comma
      shift_right -= sizeof(comma)/sizeof(comma[0]);
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
          if (comma[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_dot_and_comma, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '!'){ // Exclamation mark
      shift_right -= sizeof(excl)/sizeof(excl[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 24; j++) {
          if (excl[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '?'){ // Question mark
      shift_right -= sizeof(question_mark)/sizeof(question_mark[0]);
      for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 24; j++) {
          if (question_mark[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_color);
        }
      }
      shift_right -= letter_spacing_pxls;
    }
  }
}

void print_custom_multi_colored_hebrew_font(String text_to_print, int y, int offset_from_the_right, uint16_t font_colors[], int how_many_colors){
  int shift_right = 320 - offset_from_the_right;
  for (int s = 0; s < text_to_print.length(); s++){ // Traverse the string
    
    if (text_to_print.charAt(s) == ' '){ // Space
      shift_right -= space_between_letter;
    }
    
    if (text_to_print.charAt(s) == 'A'){ // Alef
      shift_right -= sizeof(Alef)/sizeof(Alef[0]);
      for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 24; j++) {
          if (Alef[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '"'){ // Apostrophe
      shift_right -= sizeof(Apostrophe)/sizeof(Apostrophe[0]);
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
          if (Apostrophe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'a'){ // Ayin
      shift_right -= sizeof(Ayin)/sizeof(Ayin[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 24; j++) {
          if (Ayin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'b'){ // Bet
      shift_right -= sizeof(Bet)/sizeof(Bet[0]);
      for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 24; j++) {
          if (Bet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'c'){ // Chet
      shift_right -= sizeof(Chet)/sizeof(Chet[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 24; j++) {
          if (Chet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'd'){ // Dalet
      shift_right -= sizeof(Dalet)/sizeof(Dalet[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Dalet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'm'){ // ending mem
      shift_right -= sizeof(ending_mem)/sizeof(ending_mem[0]);
      for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 24; j++) {
          if (ending_mem[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'n'){ // ending nun
      shift_right -= sizeof(ending_nun)/sizeof(ending_nun[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 39; j++) {
          if (ending_nun[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'f'){ // ending pe
      shift_right -= sizeof(ending_pe)/sizeof(ending_pe[0]);
      for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_pe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'q'){ // ending qaf
      shift_right -= sizeof(ending_qaf)/sizeof(ending_qaf[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_qaf[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'x'){ // ending tsadi
      shift_right -= sizeof(ending_tsadi)/sizeof(ending_tsadi[0]);
      for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 38; j++) {
          if (ending_tsadi[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'g'){ // Gimel
      shift_right -= sizeof(Gimel)/sizeof(Gimel[0]);
      for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 24; j++) {
          if (Gimel[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'h'){ // He
      shift_right -= sizeof(He)/sizeof(He[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 24; j++) {
          if (He[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'L'){ // Lamed
      shift_right -= sizeof(Lamed)/sizeof(Lamed[0]);
      if (s != 0)
        shift_right += 12;
      for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 40; j++) {
          if (Lamed[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'M'){ // Mem
      shift_right -= sizeof(Mem)/sizeof(Mem[0]);
      for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 29; j++) {
          if (Mem[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_mem, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'N'){ // Nun
      shift_right -= sizeof(Nun)/sizeof(Nun[0]);
      for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 24; j++) {
          if (Nun[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'p'){ // Pe
      shift_right -= sizeof(Pe)/sizeof(Pe[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Pe[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'C'){ // Qaf
      shift_right -= sizeof(Qaf)/sizeof(Qaf[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Qaf[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'k'){ // Qof
      shift_right -= sizeof(Qof)/sizeof(Qof[0]);
      for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 38; j++) {
          if (Qof[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'r'){ // Resh
      shift_right -= sizeof(Resh)/sizeof(Resh[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Resh[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 's'){ // Samekh
      shift_right -= sizeof(Samekh)/sizeof(Samekh[0]);
      for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24; j++) {
          if (Samekh[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'S'){ // Shin
      shift_right -= sizeof(Shin)/sizeof(Shin[0]);
      for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 27; j++) {
          if (Shin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_shin, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'T'){ // Tev
      shift_right -= sizeof(Tav)/sizeof(Tav[0]);
      for (int i = 0; i < 33; i++) {
        for (int j = 0; j < 24; j++) {
          if (Tav[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 't'){ // Tet
      shift_right -= sizeof(Tet)/sizeof(Tet[0]);
      for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 24; j++) {
          if (Tet[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'X'){ // Tsadi
      shift_right -= sizeof(Tsadi)/sizeof(Tsadi[0]);
      for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 32; j++) {
          if (Tsadi[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_tsadi, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'i'){ // Vav
      shift_right -= sizeof(Vav)/sizeof(Vav[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 24; j++) {
          if (Vav[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '\''){ // Yod
      shift_right -= sizeof(Yod)/sizeof(Yod[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
          if (Yod[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == 'z'){ // Zayin
      shift_right -= sizeof(Zayin)/sizeof(Zayin[0]);
      for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 24; j++) {
          if (Zayin[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '.'){ // Dot
      shift_right -= sizeof(dot)/sizeof(dot[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          if (dot[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_dot_and_comma, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == ','){ // Comma
      shift_right -= sizeof(comma)/sizeof(comma[0]);
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
          if (comma[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + shift_down_for_dot_and_comma, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '!'){ // Exclamation mark
      shift_right -= sizeof(excl)/sizeof(excl[0]);
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 24; j++) {
          if (excl[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }

    if (text_to_print.charAt(s) == '?'){ // Question mark
      shift_right -= sizeof(question_mark)/sizeof(question_mark[0]);
      for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 24; j++) {
          if (question_mark[i][j] == 0)
            tft.drawPixel(i + shift_right, j + y + regular_shift_down, font_colors[s % how_many_colors]);
        }
      }
      shift_right -= letter_spacing_pxls;
    }
  }
}

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

void loop() {
  
}
