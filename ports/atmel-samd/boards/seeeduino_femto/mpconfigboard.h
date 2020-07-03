#define MICROPY_HW_BOARD_NAME "Seeeduino Femto"
#define MICROPY_HW_MCU_NAME "samd21g18"

// #define MICROPY_HW_NEOPIXEL (&pin_PA04)

// This is spi flash pin
#define SPI_FLASH_MOSI_PIN          &pin_PA06
#define SPI_FLASH_MISO_PIN          &pin_PA05
#define SPI_FLASH_SCK_PIN           &pin_PA07
#define SPI_FLASH_CS_PIN            &pin_PA02

#define MICROPY_PORT_A        (0)   // PORT_PA04
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

// #define CIRCUITPY_INTERNAL_NVM_SIZE 256
// #define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000 - CIRCUITPY_INTERNAL_NVM_SIZE)

#define DEFAULT_I2C_BUS_SCL (&pin_PB03)
#define DEFAULT_I2C_BUS_SDA (&pin_PB02)

//#define DEFAULT_SPI_BUS_SCK (&pin_PA07)
//#define DEFAULT_SPI_BUS_MOSI (&pin_PA06)
//#define DEFAULT_SPI_BUS_MISO (&pin_PA05)

#define DEFAULT_UART_BUS_RX (&pin_PB09)
#define DEFAULT_UART_BUS_TX (&pin_PB08)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
