/**
 * Copyright 2024 Enveng Group - Simon French-Bluhm and Adrian Gallo.
 * SPDX-License-Identifier: 	AGPL-3.0-or-later
 */

#include "config.h"
#include "gettext.h"
#include <stdio.h>
#include "error_handler.h"
#include "logger.h"

void handle_error(const char *error_message) {
    log_error("Error: %s", error_message);
}