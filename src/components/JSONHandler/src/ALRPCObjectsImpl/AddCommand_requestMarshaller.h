#ifndef ADDCOMMAND_REQUESTMARSHALLER_INCLUDE
#define ADDCOMMAND_REQUESTMARSHALLER_INCLUDE

#include <string>
#include <json/value.h>
#include <json/reader.h>
#include <json/writer.h>

#include "../../include/JSONHandler/ALRPCObjects/AddCommand_request.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Fri Oct 26 06:31:48 2012
  source stamp	Thu Oct 25 06:49:27 2012
  author	robok0der
*/


struct AddCommand_requestMarshaller
{
  static bool checkIntegrity(AddCommand_request& e);
  static bool checkIntegrityConst(const AddCommand_request& e);

  static bool fromString(const std::string& s,AddCommand_request& e);
  static const std::string toString(const AddCommand_request& e);

  static bool fromJSON(const Json::Value& s,AddCommand_request& e);
  static Json::Value toJSON(const AddCommand_request& e);
};
#endif
