/* VersionNumber.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 12/05/2009
 * Last Modified    : Always...
 * 
 */

#pragma once
#ifndef ymp_VersionNumber_H
#define ymp_VersionNumber_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include <string>
#include "Settings.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const std::string VERSION_NUMBER    =   "0.7.6";
const std::string VERSION_BUILD     =   "9480-147";
////////////////////////////////////////////////////////////////////////////////
const char PROGRAM_COPYRIGHT[]      =   "2008-2019 Alexander J. Yee";
const char PROGRAM_EMAIL[]          =   "( a-yee@u.northwestern.edu )";
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const std::string VERSION_SHORT     =   VERSION_NUMBER + "."       + VERSION_BUILD + YCG_PROGRAM_SUFFIX;
const std::string VERSION_LONG      =   VERSION_NUMBER + " Build " + VERSION_BUILD + YCG_PROGRAM_SUFFIX;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif
