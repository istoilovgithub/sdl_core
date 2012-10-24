#ifndef DELETECOMMAND_RESPONSEMARSHALLER_INCLUDE
#define DELETECOMMAND_RESPONSEMARSHALLER_INCLUDE

#include <string>
#include <json/value.h>

#include "../../include/JSONHandler/ALRPCObjects/DeleteCommand_response.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Wed Oct 24 15:41:28 2012
  source stamp	Wed Oct 24 14:57:16 2012
  author	robok0der
*/


struct DeleteCommand_responseMarshaller
{
  static bool checkIntegrity(DeleteCommand_response& e);
  static bool checkIntegrityConst(const DeleteCommand_response& e);

  static bool fromString(const std::string& s,DeleteCommand_response& e);
  static const std::string toString(const DeleteCommand_response& e);

  static bool fromJSON(const Json::Value& s,DeleteCommand_response& e);
  static Json::Value toJSON(const DeleteCommand_response& e);
};
#endif
