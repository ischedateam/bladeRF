/**
 * @file bladeRF2.h
 *
 * @brief bladeRF2-specific API
 *
 * Copyright (C) 2013-2017 Nuand LLC
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */
#ifndef BLADERF2_H_
#define BLADERF2_H_

/**
 * @defgroup BLADERF2 bladeRF2-specific API
 *
 * These functions are thread-safe.
 *
 * @{
 */

/**
 * @defgroup FN_BLADERF2_LOW_LEVEL Low-level accessors
 *
 * In a most cases, higher-level routines should be used. These routines are
 * only intended to support development and testing.
 *
 * Use these routines with great care, and be sure to reference the relevant
 * schematics, data sheets, and source code (i.e., firmware and hdl).
 *
 * Be careful when mixing these calls with higher-level routines that manipulate
 * the same registers/settings.
 *
 * These functions are thread-safe.
 *
 * @{
 */

/**
 * Read an AD9361 register
 *
 * @param       dev         Device handle
 * @param[in]   address     AD9361 register offset
 * @param[out]  val         Pointer to variable the data should be read into
 *
 * @return 0 on success, value from \ref RETCODES list on failure
 */
API_EXPORT
int CALL_CONV bladerf_ad9361_read(struct bladerf *dev,
                               uint16_t address, uint8_t *val);

/**
 * Write an AD9361 register
 *
 * @param       dev         Device handle
 * @param[in]   address     AD9361 register offset
 * @param[in]   val         Data to write to register
 *
 * @return 0 on success, value from \ref RETCODES list on failure
 */
API_EXPORT
int CALL_CONV bladerf_ad9361_write(struct bladerf *dev,
                                uint16_t address, uint8_t val);

/** @} (End of FN_BLADERF2_LOW_LEVEL) */

/** @} (End of BLADERF2) */

#endif /* BLADERF2_H_ */
