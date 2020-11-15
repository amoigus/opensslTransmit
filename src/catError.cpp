/**
 * @file catError.cpp
 * @brief 打印错误消息
 * @author catfee (648137125@qq.com)
 * @version 0.1
 * @date 2020-11-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */
/*******************include start**********************/
#include "catError.h"
/*******************include end************************/
/*******************definition start**********************/
int catError(const char *sender, const char *error){
    printf("[%s] error: %s\n", sender, error);
    return -1;
}
/*******************definition end************************/