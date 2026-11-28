#ifndef myoptions_h
#define myoptions_h

/* --- Дисплей 20x2 (используем профиль 20 символов в ширину) --- */
#define DSP_MODEL DSP_2004
#define LCD_I2C_ADDR 0x27
#define LCD_I2C_SDA  21
#define LCD_I2C_SCL  22

/* --- Аудио ЦАП I2S UDA1334A --- */
#define I2S_DOUT 25
#define I2S_BCLK 27
#define I2S_LRC  26

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
