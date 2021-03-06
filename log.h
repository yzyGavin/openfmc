/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * You can obtain a copy of the license in the file COPYING
 * or http://www.opensource.org/licenses/CDDL-1.0.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file COPYING.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2015 Saso Kiselkov. All rights reserved.
 */

#ifndef	_OPENFMC_LOG_H_
#define	_OPENFMC_LOG_H_

#include "helpers.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum {
	OPENFMC_LOG_ERR,
	OPENFMC_LOG_WARN,
	OPENFMC_LOG_INFO
} openfmc_log_lvl_t;

void openfmc_log(openfmc_log_lvl_t lvl, const char *fmt, ...) PRINTF_ATTR(2);
void openfmc_log_v(openfmc_log_lvl_t lvl, const char *fmt, va_list ap);

#ifdef	__cplusplus
}
#endif

#endif	/* _OPENFMC_LOG_H_ */
