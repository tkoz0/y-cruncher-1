/* InconsistentMetadataException.cpp
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/31/2018
 * Last Modified    : 01/31/2018
 * 
 */

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "InconsistentMetadataException.h"
namespace DigitViewer{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const char InconsistentMetaData::TYPENAME[] = "InconsistentMetaData";
ExceptionFactoryT<InconsistentMetaData> InconsistentMetaData_Instance;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
