#ifndef CPP_INSTAGRAM_IMPL_SERVER_RESPONSE_H
#define CPP_INSTAGRAM_IMPL_SERVER_RESPONSE_H

#include "NonCopyable.h"
#include "UserInfo.h"

#include <json/json.h>

namespace Instagram
{
    class ServerResponse : NonCopyable
    {
    public:
        explicit ServerResponse(const std::string& response);

        UserInfo parseUser() const;

    private:
        std::string getStringValue(const char* key) const;
        Json::Value getValue(const char* key) const;
        UserCounts parseCounts() const;

    private:
        const Json::Value mData;
    };
}

#endif
