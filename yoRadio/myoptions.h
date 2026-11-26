#ifndef myoptions_h
#define myoptions_h

/* Отключаем VS1053 и внутренний ЦАП */
#define VS1053_CS     255
#define I2S_INTERNAL  false

/* Пины для PCM5102A или MAX98357A */
#define I2S_DOUT      27
#define I2S_BCLK      26
#define I2S_LRC       25

#endif
