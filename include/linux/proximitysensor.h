/* include/linux/proximitysensor.h
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __LINUX_PROXIMITY_SENSOR_H
#define __LINUX_PROXIMITY_SENSOR_H

#include <linux/types.h>
#include <linux/ioctl.h>

#define PROXIMITYSENSOR_IOCTL_MAGIC 'l'

#define PROXIMITYSENSOR_IOCTL_GET_ENABLED _IOR(PROXIMITYSENSOR_IOCTL_MAGIC, 1, int *)
#define PROXIMITYSENSOR_IOCTL_ENABLE _IOW(PROXIMITYSENSOR_IOCTL_MAGIC, 2, int *)

#endif
