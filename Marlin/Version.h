/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * This file is the standard Marlin version identifier file, all fields can be
 * overriden by the ones defined on _Version.h by using the Configuration.h
 * directive USE_AUTOMATIC_VERSIONING.
 */

/**
 * Marlin release version identifier
 */
#define SHORT_BUILD_VERSION "1.1.0.5 " //based off of the upstream RCBugFix branch

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION " (Aleph Objects Inc.'s Phabricator)"

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE "2016-04-27 12:00"

/**
 * @todo: Missing documentation block
 */
#define PROTOCOL_VERSION "1.0"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
#define MACHINE_NAME "LulzBot Mini"

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "https://code.alephobjects.com/diffusion/MARLIN"

/**
 * Default generic printer UUID.
 */
#define DEFAULT_MACHINE_UUID "351487b6-ca9a-4c1a-8765-d668b1da6585"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "http://LulzBot.com"