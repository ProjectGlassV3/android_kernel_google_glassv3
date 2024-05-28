/*
 * si1141PS.h header for Silicon Labs 1141 Proximity device
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */
#ifndef __SI1141PS_H
#define __SI1141PS_H
struct si1141_data_user {
  uint16_t led_a;
} __attribute__(( packed ));
#ifdef __KERNEL__
/*
 * Register map
 */
#define SI1141_PART_ID       0x00
#define SI1141_REV_ID        0x01
#define SI1141_SEQ_ID        0x02
#define SI1141_INT_CFG       0x03
#define SI1141_IRQ_ENABLE    0x04
#define SI1141_IRQ_MODE1     0x05
#define SI1141_IRQ_MODE2     0x06
#define SI1141_HW_KEY        0x07
#define SI1141_MEAS_RATE     0x08
#define SI1141_ALS_RATE      0x09
#define SI1141_PS_RATE       0x0a
#define SI1141_ALS_LO_TH     0x0b
#define SI1141_RSVD_x0c      0x0c
#define SI1141_ALS_HI_TH     0x0d
#define SI1141_ALS_IR_ADCMUX 0x0e
#define SI1141_PS_LED21      0x0f
#define SI1141_PS_LED3       0x10
#define SI1141_PS1_TH        0x11
#define SI1141_RSVD_x12      0x12
#define SI1141_PS2_TH        0x13
#define SI1141_RSVD_x14      0x14
#define SI1141_PS3_TH        0x15
#define SI1141_RSVD_x16      0x16
#define SI1141_PARAM_WR      0x17
#define SI1141_COMMAND       0x18
/* 0x19 - 0x1f */
#define SI1141_RESPONSE      0x20
#define SI1141_IRQ_STATUS    0x21
#define SI1141_ALS_VIS_DATA0 0x22
#define SI1141_ALS_VIS_DATA1 0x23
#define SI1141_ALS_IR_DATA0  0x24
#define SI1141_ALS_IR_DATA1  0x25
#define SI1141_PS1_DATA0     0x26
#define SI1141_PS1_DATA1     0x27
#define SI1141_PS2_DATA0     0x28
#define SI1141_PS2_DATA1     0x29
#define SI1141_PS3_DATA0     0x2a
#define SI1141_PS3_DATA1     0x2b
#define SI1141_AUX_DATA0     0x2c
#define SI1141_AUX_DATA1     0x2d
#define SI1141_PARAM_RD      0x2e
/* 0x2f */
#define SI1141_CHIP_STAT     0x30
/* 0x31 - 0x3a */
/* ANA_IN_KEY */
/* 0x3b - 0x3e */
/*
 * Register values
 */
#define HW_KEY               0x17
#define PART_ID_SI1141       0x41
#define PART_ID_SI1142       0x42
#define PART_ID_SI1143       0x43
#define REV_ID               0x01
#define SEQ_ID_SI114xA01     0x01
#define SEQ_ID_SI114xA02     0x02
#define SEQ_ID_SI114xA03     0x03
#define SEQ_ID_SI114xA10     0x08
#define SI1141_INT_CFG_DEF               0x01
#define SI1141_IRQ_MODE1_DEF          0x10
#define SI1141_IRQ_ENABLE_DEF         0x04
#define SI1141_MEAS_RATE_NONE   0x00
#define SI1141_MEAS_RATE_10ms   0x84
#define SI1141_MEAS_RATE_20ms   0x94
#define SI1141_MEAS_RATE_100ms  0xb9
#define SI1141_MEAS_RATE_496ms  0xdf
#define SI1141_MEAS_RATE_1984ms 0xff
#define SI1141_ALS_RATE_NONE 0x00
#define SI1141_ALS_RATE_1x   0x08
#define SI1141_ALS_RATE_10x  0x32
#define SI1141_ALS_RATE_100x 0x69
#define SI1141_PS_RATE_NONE  0x00
#define SI1141_PS_RATE_1x    0x08
#define SI1141_PS_RATE_10x   0x32
#define SI1141_PS_RATE_100x  0x69
/* LED Intensity */
#define SI1141_LED_OFF       0x0
#define SI1141_LED_5_6       0x1
#define SI1141_LED_11_2      0x2
#define SI1141_LED_22_4      0x3
#define SI1141_LED_45        0x4
#define SI1141_LED_67        0x5
#define SI1141_LED_90        0x6
#define SI1141_LED_112       0x7
#define SI1141_LED_135       0x8
#define SI1141_LED_157       0x9
#define SI1141_LED_180       0xa
#define SI1141_LED_202       0xb
#define SI1141_LED_224       0xc
#define SI1141_LED_269       0xd
#define SI1141_LED_314       0xe
#define SI1141_LED_359       0xf
#define SI1141_RESPONSE_ERR  0x80
#define SI1141_RESPONSE_ID   0x0f
#define LED1_I_SHIFT         0
#define LED1_I_BITS          0x0f
#define LED1_I               (LED2_I_BITS << LED2_I_SHIFT)
#define LED2_I_SHIFT         4
#define LED2_I_BITS          0x0f
#define LED2_I               (LED2_I_BITS << LED2_I_SHIFT)
#define LED3_I_SHIFT         0
#define LED3_I_BITS          0x0f
#define LED3_I               (LED2_I_BITS << LED2_I_SHIFT)

#define IRQ_ALS_INT     0x03
#define IRQ_PS1_INT     0x04
#define IRQ_PS2_INT     0x08
#define IRQ_PS3_INT     0x10
#define IRQ_CMD_INT     0x20

/*
 * Mailbox register map
 */
#define CMD_PARAM_QUERY     (0x4<<5)
#define CMD_PARAM_SET       (0x5<<5)
#define CMD_PARAM_AND       (0x6<<5)
#define CMD_PARAM_OR        (0x7<<5)
#define CMD_PARAM_ADDR_MASK (0x1f)
#define CMD_NOP             0x00
#define CMD_RESET           0x01
#define CMD_BUSADDR         0x02
#define CMD_RSVD_x03        0x03
#define CMD_RSVD_x04        0x04
#define CMD_PS_FORCE       0x05
#define CMD_ALS_FORCE        0x06
#define CMD_PSALS_FORCE     0x07
#define CMD_RSVD_x08        0x08
#define CMD_PS_PAUSE        0x09
#define CMD_ALS_PAUSE       0x0a
#define CMD_PSALS_PAUSE     0x0b
#define CMD_RSVD_x0c        0x0c
#define CMD_PS_AUTO         0x0d
#define CMD_ALS_AUTO        0x0e
#define CMD_PSALS_AUTO      0x0f
#define PARAM_I2C_ADDR      0x00
#define PARAM_I2C_CHLIST    0x01
#define PARAM_PSLED12_SELECT 0x02
#define PARAM_PSLED3_SELECT 0x03
#define PARAM_RSVD_x04      0x04
#define PARAM_PS_ENCODING   0x05
#define PARAM_ALS_ENCODING  0x06
#define PARAM_PS1_ADCMUX    0x07
#define PARAM_PS2_ADCMUX    0x08
#define PARAM_PS3_ADCMUX    0x09
#define PARAM_ADC_COUNTER   0x0a
#define PARAM_ADC_GAIN      0x0b
#define PARAM_ADC_MISC      0x0c
#define PARAM_RSVD_0x0d     0x0d
#define PARAM_RSVD_0x0e     0x0e
#define PARAM_AUX_ADCMUX    0x0f
#define PARAM_ALS_VIS_ADC_COUNTER 0x10
#define PARAM_ALS_VIS_ADC_GAIN 0x11
#define PARAM_ALS_VIS_ADC_MISC 0x12
#define PARAM_RSVD_0x13     0x13
#define PARAM_RSVD_0x14     0x14
#define PARAM_RSVD_0x15     0x15
#define PARAM_ALS_HYST      0x16
#define PARAM_PS_HYST       0x17
#define PARAM_PS_HISTORY    0x18
#define PARAM_ALS_HISTORY   0x19
#define PARAM_ADC_OFFSET    0x1a
#define PARAM_RSVD_0x1b     0x1b
#define PARAM_LED_REC       0x1c
#define PARAM_ALS_IR_ADC_COUNTER 0x1d
#define PARAM_ALS_ADC_GAIN  0x1e
#define PARAM_ALS_ADC_MISC  0x1f
#define PARAM_MASK          0x1f
#define PARAM_MAX           0x20
/* Parameter CHLIST @ 0x01 */
#define CHLIST_EN_PS1       0x01
#define CHLIST_EN_PS2       0x02
#define CHLIST_EN_PS3       0x04
#define CHLIST_RSVD00       0x08
#define CHLIST_EN_ALS_VIS   0x10
#define CHLIST_EN_ALS_IR    0x20
#define CHLIST_EN_AUX       0x40
#define CHLIST_RSVD07       0x80
/*
 * Platform initial defaults
 */
#define PS_ADC_REC_DEFAULT      0x50
#define PS_ADC_GAIN_DEFAULT      0x02
#define PS1_LED_DEFAULT      SI1141_LED_11_2

struct si114x_platform_data {
	/* Interrupt */
	int pfd_gpio_int_no;
	int pfd_meas_rate;
	int pfd_als_rate;
	int pfd_ps_rate;
	int pfd_ps_led1;
	/* input subsystem */
	unsigned int pfd_ps_poll_interval;
};

#define PS_MIN_MEASURE_VAL      0
#define PS_MAX_MEASURE_VAL      1
#define PS_VALID_MEASURE_MASK   PS_MAX_MEASURE_VAL
#define PS_POLL_INTERVAL        150
#define I2C_RETRY 3
#define PS1_THLD_LO        1000
#define PS1_THLD_HI        800
#define PS1_THLD_CT        0

#define PS_HIS_DEFAULT 0x03
#define PS_MEAS_DEFAULT SI1141_MEAS_RATE_20ms
#define PS_RATE_DEFAULT SI1141_PS_RATE_1x
#define PS_I2C_RETRY 3
//#define PS_POLLING_MODE

#endif  /* __KERNEL__ */
#endif  /* __SI1141PS */
