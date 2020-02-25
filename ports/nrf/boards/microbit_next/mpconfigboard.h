#define MICROPY_HW_BOARD_NAME       "micro:bit_next"
#define MICROPY_HW_MCU_NAME         "NRF52833"
#define MICROPY_PY_SYS_PLATFORM     "microbit-nrf52"

#define MICROPY_PY_MACHINE_UART     (1)
#define MICROPY_PY_MACHINE_HW_PWM   (1)
#define MICROPY_PY_MACHINE_HW_SPI   (1)
#define MICROPY_PY_MACHINE_TIMER    (1)
#define MICROPY_PY_MACHINE_RTCOUNTER (1)
#define MICROPY_PY_MACHINE_I2C      (1)
#define MICROPY_PY_MACHINE_ADC      (1)
#define MICROPY_PY_MACHINE_TEMP     (1)
#define MICROPY_PY_RANDOM_HW_RNG    (1)

#define MICROPY_HW_HAS_LED          (0)

// UART config
#define MICROPY_HW_UART1_RX         (40)
#define MICROPY_HW_UART1_TX         (6)
#define MICROPY_HW_UART1_HWFC       (0)

// SPI0 config
#define MICROPY_HW_SPI0_NAME        "SPI0"

#define MICROPY_HW_SPI0_SCK         (17)
#define MICROPY_HW_SPI0_MOSI        (13)
#define MICROPY_HW_SPI0_MISO        (1)

#define MICROPY_HW_PWM0_NAME        "PWM0"
#define MICROPY_HW_PWM1_NAME        "PWM1"
#define MICROPY_HW_PWM2_NAME        "PWM2"
#define MICROPY_HW_PWM3_NAME        "PWM3"
