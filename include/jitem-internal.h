/*
 * Copyright (c) 2010-2011 Michael Kuhn
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/**
 * \file
 **/

#ifndef H_ITEM_INTERNAL
#define H_ITEM_INTERNAL

#include <glib.h>

#include <bson.h>

#include <jitem.h>

#include <jcollection.h>

G_GNUC_INTERNAL JItem* j_item_new_from_bson (JCollection*, bson const*);

G_GNUC_INTERNAL bson* j_item_serialize (JItem*);
G_GNUC_INTERNAL void j_item_deserialize (JItem*, bson const*);

G_GNUC_INTERNAL bson_oid_t const* j_item_get_id (JItem*);

G_GNUC_INTERNAL void j_item_set_collection (JItem*, JCollection*);

G_GNUC_INTERNAL void j_item_read_internal (JList*);
G_GNUC_INTERNAL void j_item_write_internal (JList*);

G_GNUC_INTERNAL void j_item_get_status_internal (JList*);

#endif
