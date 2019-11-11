/* Copyright (C) 2007 Free Software Foundation, Inc. 
 * See the copyright notice in the file /usr/LICENSE.
 * Created by flyan on 2019/11/10.
 * QQ: 1341662010
 * QQ-Group:909830414
 * gitee: https://gitee.com/flyanh/
 *
 * 系统任务
 *
 * 该文件处理系统调用
 */

#include "kernel.h"

/*===========================================================================*
 *				bad_syscall				     *
 *				坏的系统调用
 *===========================================================================*/
PUBLIC void bad_syscall(){
    /* 该系统调用处理错误的系统调用，例如用户给了一个错误的系统调用号 */

    disp_str("bad_syscall, please retry...");
}


