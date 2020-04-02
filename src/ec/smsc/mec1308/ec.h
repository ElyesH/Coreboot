/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

/*
 * Mailbox EC communication interface for SMSC MEC1308 Embedded Controller.
 */

#ifndef _EC_SMSC_MEC1308_EC_H
#define _EC_SMSC_MEC1308_EC_H

#define EC_TIMEOUT           0xfff
#define EC_MAILBOX_COMMAND   0x82  // Send a command
#define EC_MAILBOX_DATA      0x84  // Send data with a command
#define EC_MAILBOX_DATA_H    0x85  // Send data with a command
#define EC_RAM_READ          0x88  // Read from RAM
#define EC_RAM_WRITE         0x89  // Write to RAM

int send_ec_command(u8 command);
int send_ec_command_data(u8 command, u8 data);
u8 read_ec_command_byte(u8 command);
u8 ec_read(u8 addr);
int ec_write(u8 addr, u8 data);
void ec_set_bit(u8 addr, u8 bit);
void ec_clr_bit(u8 addr, u8 bit);
void ec_set_ports(u16 cmd_reg, u16 data_reg);

#endif /* _EC_SMSC_MEC1308_EC_H */
