#ifndef myoptions_h
#define myoptions_h

/* Дисплей 20x2 через I2C переходник PCF8574 */
#define DSP_MODEL         DSP_2002I2C
#define DSP_HSPI          false
#define I2C_ADDR          0x27
#define I2C_SDA           21
#define I2C_SCL           22

/* ЦАП UDA1334A (I2S) */
#define I2S_DOUT          27
#define I2S_BCLK          26
#define I2S_LRC           25

/* Энкодер EC11 (Громкость и Play/Pause) */
#define ENC_BTNR          33
#define ENC_BTNL          32
#define ENC_BTNB          14
#define ENC_INTERNALPULLUP true

/* Пара кнопок (Следующая / Предыдущая станция) */
#define BTN_LEFT          17
#define BTN_RIGHT         16
#define BTN_INTERNALPULLUP true

#endif
