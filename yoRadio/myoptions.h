#ifndef myoptions_h
#define myoptions_h

/* --- Дисплей 20x2 с I2C-адаптером PCF8574T --- */
#define DSP_MODEL DSP_2002I2C
#define LCD_I2C_ADDR 0x27
#define I2C_SDA 21
#define I2C_SCL 22

/* --- Аудио ЦАП I2S UDA1334A --- */
#define I2S_DOUT 27  // DIN
#define I2S_BCLK 26  // BCLK
#define I2S_LRC  25  // WSEL
#define VS1053_CS 255

/* --- Энкодер EC11 --- */
#define ENC_BTNR 32
#define ENC_BTNL 33
#define ENC_BTNB 14
#define ENC_INTERNALPULLUP true

/* --- Две дополнительные кнопки --- */
#define BTN_LEFT  12
#define BTN_RIGHT 13
#define BTN_INTERNALPULLUP true

#endif
