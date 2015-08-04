/*
 * log_impl.c -- 实现部分
 *
 * Authors:
 *     shuidu(dubingyangxiyou@gmail.com), 2015年08月04日 20时35分54秒
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include "../log.h"

enum LOG_LEVEL_T LOG_LEVEL = DEBUG;

#define LOG_LEVEL_NUM 7

static char* log_level_name[LOG_LEVEL_NUM] = {
   " TRACE", 
   " DEBUG",
   " INFO",
   " WARN",
   " ERROR",
   " FATAL"
};
enum LOG_LEVEL_T init_log_level() {
    return DEBUG;
}

enum LOG_LEVEL_T get_Log_level() {
    return LOG_LEVEL;
}

void set_log_level(enum LOG_LEVEL_T level) {
    LOG_LEVEL = level;
}

void logger(const char* file, int line, 
                enum LOG_LEVEL_T level, const char* err_msg) {
    char message_head[512];
    snprintf(message_head, sizeof(message_head), "%s %2s on %s:%d",
            log_level_name[level], err_msg, file, line);
    printf("%s\n", message_head);
}


