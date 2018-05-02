/*  =========================================================================
    fty_nut_classes - private header file

    Copyright (C) 2014 - 2017 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_NUT_CLASSES_H_INCLUDED
#define FTY_NUT_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_nut.h"

//  Extra headers
#include "nut_mlm.h"

//  Opaque class structures to allow forward references
#ifndef LOGGER_T_DEFINED
typedef struct _logger_t logger_t;
#define LOGGER_T_DEFINED
#endif
#ifndef FSUTILS_T_DEFINED
typedef struct _fsutils_t fsutils_t;
#define FSUTILS_T_DEFINED
#endif
#ifndef CIDR_T_DEFINED
typedef struct _cidr_t cidr_t;
#define CIDR_T_DEFINED
#endif
#ifndef NUTSCAN_T_DEFINED
typedef struct _nutscan_t nutscan_t;
#define NUTSCAN_T_DEFINED
#endif
#ifndef SUBPROCESS_T_DEFINED
typedef struct _subprocess_t subprocess_t;
#define SUBPROCESS_T_DEFINED
#endif
#ifndef ACTOR_COMMANDS_T_DEFINED
typedef struct _actor_commands_t actor_commands_t;
#define ACTOR_COMMANDS_T_DEFINED
#endif
#ifndef UPS_STATUS_T_DEFINED
typedef struct _ups_status_t ups_status_t;
#define UPS_STATUS_T_DEFINED
#endif
#ifndef NUT_DEVICE_T_DEFINED
typedef struct _nut_device_t nut_device_t;
#define NUT_DEVICE_T_DEFINED
#endif
#ifndef NUT_AGENT_T_DEFINED
typedef struct _nut_agent_t nut_agent_t;
#define NUT_AGENT_T_DEFINED
#endif
#ifndef NUT_CONFIGURATOR_T_DEFINED
typedef struct _nut_configurator_t nut_configurator_t;
#define NUT_CONFIGURATOR_T_DEFINED
#endif
#ifndef ALERT_DEVICE_T_DEFINED
typedef struct _alert_device_t alert_device_t;
#define ALERT_DEVICE_T_DEFINED
#endif
#ifndef ALERT_DEVICE_LIST_T_DEFINED
typedef struct _alert_device_list_t alert_device_list_t;
#define ALERT_DEVICE_LIST_T_DEFINED
#endif
#ifndef NUT_T_DEFINED
typedef struct _nut_t nut_t;
#define NUT_T_DEFINED
#endif
#ifndef SENSOR_DEVICE_T_DEFINED
typedef struct _sensor_device_t sensor_device_t;
#define SENSOR_DEVICE_T_DEFINED
#endif
#ifndef SENSOR_LIST_T_DEFINED
typedef struct _sensor_list_t sensor_list_t;
#define SENSOR_LIST_T_DEFINED
#endif
#ifndef STATE_MANAGER_T_DEFINED
typedef struct _state_manager_t state_manager_t;
#define STATE_MANAGER_T_DEFINED
#endif
#ifndef ASSET_STATE_T_DEFINED
typedef struct _asset_state_t asset_state_t;
#define ASSET_STATE_T_DEFINED
#endif

//  Internal API

#include "logger.h"
#include "fsutils.h"
#include "cidr.h"
#include "nutscan.h"
#include "subprocess.h"
#include "actor_commands.h"
#include "ups_status.h"
#include "nut_device.h"
#include "nut_agent.h"
#include "nut_configurator.h"
#include "alert_device.h"
#include "alert_device_list.h"
#include "nut.h"
#include "sensor_device.h"
#include "sensor_list.h"
#include "state_manager.h"
#include "asset_state.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_NUT_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    logger_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    fsutils_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    cidr_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    nutscan_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    subprocess_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    actor_commands_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    ups_status_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    nut_device_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    nut_agent_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    nut_configurator_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    alert_device_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    alert_device_list_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    nut_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    sensor_device_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    sensor_list_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_NUT_PRIVATE void
    state_manager_test (bool verbose);

//  Self test for private classes
FTY_NUT_PRIVATE void
    fty_nut_private_selftest (bool verbose, const char *subtest);

#endif // FTY_NUT_BUILD_DRAFT_API

#endif
