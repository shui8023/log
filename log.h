/*
 * log.h -- 提供的接口
 *
 * Authors:
 *     shuidu(|EMAIL)|, 2015年08月03日 22时30分24秒
 *
 */

#ifndef LOG_LOG_H_
#define LOG_LOG_H_

enum LOG_LEVEL_T{
    LOG_TRACE=1,
    LOG_DEBUG=2,
    LOG_INFO=3,
    LOG_WARN=4,
    LOG_ERRON=5,
    FATAL=6
}LOG_LEVE;

void init_log(void);

void log_info();

void set_de
#define log_set_debug_level(LOG_LEVE)  \
            LOG_LEVE=(LOG_LEVE);       \
            init_log()

#endif //log_log_h_

