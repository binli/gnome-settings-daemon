/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2013 Kalev Lember <kalevlember@gmail.com>
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
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __WEATHER_TZ_H
#define __WEATHER_TZ_H

#include <glib.h>

typedef struct _WeatherTzDB WeatherTzDB;

WeatherTzDB     *weather_tz_db_new              (void);
GList           *weather_tz_db_get_locations    (WeatherTzDB *db);
void             weather_tz_db_free             (WeatherTzDB *db);

#endif /* __WEATHER_TZ_H */
