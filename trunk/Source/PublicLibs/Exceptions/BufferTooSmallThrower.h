/* BufferTooSmallThrower.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 05/05/2017
 * Last Modified    : 05/05/2017
 * 
 *      Lightweight header. Use this if you only need to throw and you don't
 *  want to pull in <string>.
 * 
 */

#pragma once
#ifndef ymp_Exceptions_BufferTooSmallThrower_H
#define ymp_Exceptions_BufferTooSmallThrower_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "PublicLibs/CompilerSettings.h"
#include "PublicLibs/Types.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
[[noreturn]] YM_NO_INLINE void throw_BufferTooSmallException(const char* function, siL_t buffer_size, uiL_t required_size);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
template <typename Type0, typename Type1>
YM_FORCE_INLINE void check_BufferTooSmall(const char* function, Type0 buffer_size, Type1 required_size){
    if (buffer_size < required_size){
        throw_BufferTooSmallException(function, buffer_size, required_size);
    }
}
template <typename Type0, typename Type1>
YM_FORCE_INLINE void check_BufferTooSmall(const char* function, Type0 s, Type1 e, siL_t required_size){
    check_BufferTooSmall(function, e - s, required_size);
}
YM_FORCE_INLINE void check_BufferTooSmall(const char* function, void* Ms, void* Me, siL_t required_size){
    check_BufferTooSmall(function, (char*)Me - (char*)Ms, required_size);
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif
