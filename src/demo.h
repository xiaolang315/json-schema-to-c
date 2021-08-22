#ifdef __cplusplus
extern "C" {
#endif

typedef struct All{
    char name[100];
    int value;
}All ;

All parser_print(const char* str);

#ifdef __cplusplus
}
#endif