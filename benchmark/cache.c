/*
 * JULEA - Flexible storage framework
 * Copyright (C) 2010-2019 Michael Kuhn
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <julea-config.h>

#include <glib.h>

#include <julea.h>

#include <jcache.h>

#include "benchmark.h"

static void
benchmark_cache_get(BenchmarkResult* result)
{
	guint const n = 50 * 1024 * 1024;

	JCache* cache;
	gdouble elapsed;

	cache = j_cache_new(n);

	j_benchmark_timer_start();

	for (guint i = 0; i < n; i++)
	{
		j_cache_get(cache, 1);
	}

	elapsed = j_benchmark_timer_elapsed();

	j_cache_free(cache);

	result->elapsed_time = elapsed;
	result->operations = n;
}

void
benchmark_cache(void)
{
	j_benchmark_run("/cache", benchmark_cache_get);
}
