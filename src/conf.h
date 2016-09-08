//
//  conf.h
//  testAppMqtt
//
//  Created by tong on 16/9/7.
//  Copyright © 2016年 tong. All rights reserved.
//

#ifndef conf_h
#define conf_h

#include <stdio.h>


#define TRACE_MAXIMUM 1
#define TRACE_MEDIUM 1
#define TRACE_MINIMUM 1
#define TRACE_PROTOCOL 1
#define LOG_ERROR 1
#define LOG_SEVERE 1
#define LOG_FATAL 1
#define TRACE_MAX 1
#define LOG_PROTOCOL 1
#define TRACE_MIN 1

//#define Log(e, i, t, p)

inline void Log(int a, int b, char* c, ...) {
    
}

inline void Log_stackTrace(int log_level, int msgno, int thread_id, int current_depth, const char* name, int line, int* rc)
{
    
}

inline void Log_trace(int log_level, char* buf)
{
}
#endif /* conf_h */
