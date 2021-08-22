#include "demo.h"
#include "cJSON.h"
#include <stdio.h>
#include "func.h"

All parser_print(const char *str)
{
    All all = {0};
    cJSON *monitor_json = cJSON_Parse(str);
    if (!monitor_json)
    {
        printf("error\n");
        return all;
    }
    to_string("name",  monitor_json, all.name);
    to_number("value", monitor_json, &all.value);
    cJSON_Delete(monitor_json);
    return all;
}