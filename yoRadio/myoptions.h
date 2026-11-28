#ifndef myoptions_h
#define myoptions_h

/* --- Дисплей 20x2 / 20x4 на PCF8574T --- */
#define DSP_MODEL DSP_LCD2004I2C
#define LCD_I2C_ADDR 0x27  // Для чипа PCF8574T адрес по умолчанию 0x27

#define I2C_SDA 21
#define I2C_SCL 22

/* --- Аудио ЦАП I2S UDA1334A --- */
#define I2S_DOUT 25
#define I2S_BCLK 27
#define I2S_LRC  26

/* --- Энкодер EC11 (голый, с внутренней подтяжкой) --- */
#define ENC_BTNR 32
#define ENC_BTNL 33
#define ENC_BTNB 14
#define ENC_INTERNALPULLUP true

/* --- Две дополнительные кнопки (замыкание на GND) --- */
#define BTN_LEFT  12  // Предыдущая станция / влево
#define BTN_RIGHT 13  // Следующая станция / вправо
#define BTN_INTERNALPULLUP true

#endif
