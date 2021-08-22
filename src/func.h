
#include "cJSON.h"

inline static int to_string(const char* name, cJSON* root, char* to)
{
    cJSON *value = cJSON_GetObjectItemCaseSensitive(root, name);
    if(!name) {
        printf("line:%d, error\n", __LINE__);
        return -1;
    }
    sprintf(to, "%s", value->valuestring);
    return 0;
}

inline static int to_number(const char* name, cJSON* root, int* to)
{
    cJSON *value = cJSON_GetObjectItemCaseSensitive(root, name);
    if(!name) {
        printf("line:%d, error\n", __LINE__);
        return -1;
    }
    *to = value->valueint;
    return 0;
}