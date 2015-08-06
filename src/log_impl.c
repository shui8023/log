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
#include <sys/time.h>
#include <time.h>

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

void  get_now_time(char* time_buffer, int buffer_size)
{
    struct timeval time;
    struct tm data;
    
    gettimeofday(&time, NULL);
    gmtime_r(&(time.tv_sec), &data);
    snprintf(time_buffer, buffer_size, "%4d-%02d-%02d %02d:%02d:%02d.%06d",
            data.tm_year + 1900, data.tm_mon + 1, data.tm_mday,
            data.tm_hour, data.tm_min, data.tm_sec, 
            (int)time.tv_usec);
}

void logger(const char* file, int line, 
                enum LOG_LEVEL_T level, const char* err_msg) {
    char message_head[512] = {0};
    char current_time[32] = {0};

    get_now_time(current_time, 32);
    snprintf(message_head, sizeof(message_head), "%s %s %2s on %s:%d",
            current_time, log_level_name[level], err_msg, file, line);
}

void GetLogFile() {
    basename =    
}
