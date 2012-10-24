#ifndef BUTTONCAPABILITIESMARSHALLER_INCLUDE
#define BUTTONCAPABILITIESMARSHALLER_INCLUDE

#include <string>
#include <json/value.h>

#include "../../include/JSONHandler/ALRPCObjects/ButtonCapabilities.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Wed Oct 24 15:41:28 2012
  source stamp	Wed Oct 24 14:57:16 2012
  author	robok0der
*/


struct ButtonCapabilitiesMarshaller
{
  static bool checkIntegrity(ButtonCapabilities& e);
  static bool checkIntegrityConst(const ButtonCapabilities& e);

  static bool fromString(const std::string& s,ButtonCapabilities& e);
  static const std::string toString(const ButtonCapabilities& e);

  static bool fromJSON(const Json::Value& s,ButtonCapabilities& e);
  static Json::Value toJSON(const ButtonCapabilities& e);
};
#endif
