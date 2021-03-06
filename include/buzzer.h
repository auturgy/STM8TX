#include <stdint.h>

enum beep_tone {
    BEEP_1KHZ=0,
    BEEP_2KHZ=1,
    BEEP_4KHZ=2,
};

void buzzer_init(void);

void buzzer_tone(enum beep_tone tone, uint16_t width_ms, uint8_t repeats);
void buzzer_tune(uint8_t t);
void buzzer_tune_add(uint16_t offset, const uint8_t *data, uint8_t length);
void buzzer_play_pending(void);

#define TONE_STARTUP_TUNE                   0
#define TONE_ERROR_TUNE                     1
#define TONE_NOTIFY_POSITIVE_TUNE           2
#define TONE_RX_SEARCH                      3
#define TONE_LOITER                         4
#define TONE_ALT_HOLD                       5
#define TONE_RTL                            6
#define TONE_LAND                           7
#define TONE_OTHER_MODE                     8
#define TONE_BATT_WARNING                   9
#define TONE_INACTIVITY                    10
#define TONE_VIDEO                         11
#define TONE_DISARM                        12
#define TONE_PENDING                      127

#define TONE_NUMBER_OF_TUNES 13




