/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_sync/brave_sync_prefs.h"

#define BRAVE_PROFILE_SYNC_SERVICE_BUNDLE \
  brave_sync::Prefs::RegisterProfilePrefs(pref_service_.registry());
#include "../../../../../components/sync/driver/profile_sync_service_bundle.cc"
#undef BRAVE_PROFILE_SYNC_SERVICE_BUNDLE
