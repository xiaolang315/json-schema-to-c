#include "cJSON.h"

int parser_print(const char* str){
     cJSON *monitor_json = cJSON_Parse(str);
     if(!monitor_json) {
         return -2;
     }
     cJSON *name = cJSON_GetObjectItemCaseSensitive(monitor_json, "name");
     if(name == 0) {
         return -1;
     }
    return 0;
}