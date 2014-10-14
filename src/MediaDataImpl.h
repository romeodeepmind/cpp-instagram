#ifndef CPP_INSTAGRAM_IMPL_MEDIA_DATA_IMPL_H
#define CPP_INSTAGRAM_IMPL_MEDIA_DATA_IMPL_H

#include "MediaDataImpl.h"
#include "MediaInfo.h"

namespace Instagram
{
    class MediaDataImpl : public MediaData
    {
    public:
        explicit MediaDataImpl(const MediaDataInfo& mediaDataInfo);

        virtual int getWidth() const;
        virtual int getHeight() const;
        virtual std::string getUrl() const;

    private:
        const MediaDataInfo mInfo;
    };
}

#endif