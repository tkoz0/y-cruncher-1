/* CppAllocator.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 05/06/2017
 * Last Modified    : 05/06/2017
 * 
 *      A simple stateless allocator that wraps the C malloc()/free() functions.
 * 
 */

#pragma once
#ifndef ymp_BasicMemory_CppAllocator_H
#define ymp_BasicMemory_CppAllocator_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "BasicMemory.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
class CppAllocator : public BasicAllocator{
public:
    virtual void* malloc(upL_t bytes, upL_t alignment = alignof(upL_t)) override;
    virtual void free(void* ptr) override;

    static CppAllocator Instance;
};
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif