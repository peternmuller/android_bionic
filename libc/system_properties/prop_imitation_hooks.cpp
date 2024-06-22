/*
 * Copyright (C) 2023 Paranoid Android
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdlib.h>
#include <string.h>

#include "system_properties/prop_imitation_hooks.h"

#define GMS_UNSTABLE "com.google.android.gms.unstable"
#define PROP_ENABLED "persist.sys.pihooks.enabled_features"
#define FEATURE_GMS_PROP_IMITATION (1 << 0)

#define PROP_FIRST_API_LEVEL "ro.product.first_api_level"
#define PROP_PIH_FIRST_API_LEVEL "persist.sys.pihooks.first_api_level"

void PropImitationHooks::OnFind(SystemProperties *props, const char** name) {
  if (getprogname() == nullptr || strcmp(getprogname(), GMS_UNSTABLE) != 0) {
    return;
  }
  if (!strcmp(*name, PROP_ENABLED) || !IsEnabled(props)) {
    return;
  }
  PIH_LOG("name is %s", *name);
  if (strcmp(*name, PROP_FIRST_API_LEVEL) == 0) {
    *name = PROP_PIH_FIRST_API_LEVEL;
  } else {
    return;
  }
  PIH_LOG("name changed to %s", *name);
}

bool PropImitationHooks::IsEnabled(SystemProperties *props) {
  char value[PROP_VALUE_MAX];
  props->Get(PROP_ENABLED, value);
  return (value[0] == '\0' || (atoi(value) & FEATURE_GMS_PROP_IMITATION) != 0);
}
