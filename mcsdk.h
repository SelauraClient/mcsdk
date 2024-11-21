// mcsdk, v1.0.0 (WIP)

#pragma once
#include <string>
#include "game.h"

namespace mcsdk
{
    enum class DevicePlatform
    {
        NotFound = 0,
        Windows = 1,
        Android = 2,
    };
    
    enum class Status
    {
        Error = 0,
        Successful = 1,
    };
    
    struct GameVersion
    {
        int major;
        int minor;
        int build;
        int revision;
    
        std::string toString() const {
            return std::to_string(major) + "." + std::to_string(minor) + "." + 
                   std::to_string(build) + "." + std::to_string(revision);
        }
    };
    
    struct ReturnType
    {
        int offset;
        std::string signature;
        mcsdk_SuccessStatus status;
        std::string errorMessage;
    };

    void init();
    mcsdk::ReturnType fetch(const std::string& term);
};
