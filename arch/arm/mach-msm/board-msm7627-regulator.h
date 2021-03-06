/*
 * Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_7627_REGULATOR_H__
#define __ARCH_ARM_MACH_MSM_BOARD_7627_REGULATOR_H__

#include "proccomm-regulator.h"
#ifdef CONFIG_MAX8899_CHARGER
#include <mach/vreg.h>
#endif

extern struct proccomm_regulator_platform_data msm7627_proccomm_regulator_data;

#endif
