#ifndef myoptions_h
#define myoptions_h

/* --- Внешний I2S ЦАП (PCM5102A) --- */
#define I2S_DOUT      27    // -> DIN на PCM5102A
#define I2S_BCLK      26    // -> BCK на PCM5102A
#define I2S_LRC       25    // -> LCK на PCM5102A
#define I2S_INTERNAL  false

/* --- Отключение VS1053 --- */
#define VS1053_CS     255

/* --- Режим без дисплея (управление через Web-интерфейс) --- */
#define DSP_MODEL     DSP_DUMMY

/* --- Отключение кнопок, энкодера и ИК-пульта --- */
#define BTN_LEFT      255
#define BTN_CENTER    255
#define BTN_RIGHT     255
#define BTN_UP        255
#define BTN_DOWN      255
#define BTN_MODE      255
#define ENC_BTNR      255
#define ENC_BTNL      255
#define ENC_BTNB      255
#define ENC2_BTNR     255
#define ENC2_BTNL     255
#define ENC2_BTNB     255
#define IR_PIN        255

#endif
