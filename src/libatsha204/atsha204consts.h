#ifndef ATSHA204CONSTS_H
#define ATSHA204CONSTS_H

#define ATSHA204_I2C_ADDRESS 0xC8
#define ATSHA204_I2C_WAKE_CLOCK 10000
#define ATSHA204_I2C_CMD_TOUT 100000
#define ATSHA204_I2C_WA_RESET 0x00
#define ATSHA204_I2C_WA_SLEEP 0x01
#define ATSHA204_I2C_WA_IDLE 0x02
#define ATSHA204_I2C_WA_COMMAND 0x03

//Status codes
#define ATSHA204_STATUS_SUCCES 0x00
#define ATSHA204_STATUS_CHECK_MAC_MISCOMPARE 0x01
#define ATSHA204_STATUS_PARSE_ERROR 0x03
#define ATSHA204_STATUS_EXEC_ERROR 0x0F
#define ATSHA204_STATUS_WAKE_OK 0x11
#define ATSHA204_STATUS_COMMUNICATION_ERROR 0xFF

//OpCodes
#define ATSHA204_OPCODE_DEV_REV 0x30
#define ATSHA204_OPCODE_RANDOM 0x1B
#define ATSHA204_OPCODE_READ 0x02
#define ATSHA204_OPCODE_WRITE 0x12
#define ATSHA204_OPCODE_NONCE 0x16
#define ATSHA204_OPCODE_HMAC 0x11
#define ATSHA204_OPCODE_MAC 0x08

//Sizes
#define ATSHA204_SN_BYTE_LEN 9
#define ATSHA204_SLOT_BYTE_LEN 32
#define ATSHA204_OTP_BYTE_LEN 4
#define ATSHA204_MAX_SLOT_NUMBER 15
#define ATSHA204_IO_BUFFER 84

//Our constants
#define ATSHA204_OTP_MEMORY_MAP_ORIGIN_KEY_SET 0x00

#endif //ATSHA204CONSTS_H
