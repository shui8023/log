/*
 * log.h -- 提供的接口API
 *
 * Authors:
 *     shuidu(dubingyangxiyou@gmail.com)|, 2015年08月03日 22时30分24秒
 *
 */

#ifndef LOG_LOG_H_
#define LOG_LOG_H_

/* 
 * TRACE 比DEBUG更细的打印日志
 * DEBUG 细颗粒度地打印日志
 * INFO  消息在粗颗粒读级别上打印突出应用程序的运行过程
 * WARN  表示会出现的潜在的错误的情形
 * ERROR 虽然出现错误时间,但是仍不影响系统的正常运行
 * FATAL 指出每个严重的错误事件都会导致应用程序的退出
 */
enum LOG_LEVEL_T{
    TRACE=0,        
    DEBUG=1,
    INFO=2,
    WARN=3,
    ERROR=4,
    FATAL=5
};

enum LOG_LEVEL_T init_log_level();


enum LOG_LEVE_T get_log_level();

void set_log_level(enum LOG_LEVEL_T);

void logger(const char* file, int line, enum LOG_LEVEL_T level, const char* err_msg);

#define LOG_TRACE(err_msg)  \
        logger(__FILE__, __LINE__, TRACE, (err_msg))

#define LOG_DEBUG(err_msg)  \
        logger(__FILE__, __LINE__, DEBUG, (err_msg))

#define LOG_INFO(err_msg)  \
        logger(__FILE__, __LINE__, INFO, (err_msg))

#define LOG_WARN(err_msg)  \
        logger(__FILE__, __LINE__, WARN, (err_msg))

#define LOG_ERROR(err_msg)  \
        logger(__FILE__, __LINE__, ERROR, (err_msg))

#define LOG_FATAL(err_msg)  \
        logger(__FILE__, __LINE__, FATAL, (err_msg))

#endif //log_log_h_

