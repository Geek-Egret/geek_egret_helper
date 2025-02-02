#ifndef GE_JSON_H
#define GE_JSON_H

#include "common.h"

namespace GE
{
	class JSON
	{
	public:
		typedef enum
		{
			CONFIG = 0,
			PATHS = 1
		}CONFIG_FILE_FLAG;

		std::vector<QString> exePaths;

		void configFileRead(CONFIG_FILE_FLAG configFileFlag);
		void configFileWrite(CONFIG_FILE_FLAG configFileFlag);

	private:
		nlohmann::json config_json;
		nlohmann::json exePaths_json;
	};
}

extern GE::JSON JSON;

#endif