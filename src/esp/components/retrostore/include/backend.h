
#pragma once

#ifdef ESP_PLATFORM
#include "esp_system.h"
#endif

#include <stddef.h>
#include <stdbool.h>

void set_search_terms(const char* search_terms);
char* get_app_title(int idx);
char* get_app_details(int idx);
bool get_app_cmd(int idx, unsigned char** buf, int* size);
