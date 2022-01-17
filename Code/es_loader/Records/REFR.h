#pragma once

#include "Record.h"
#include "Chunks.h"

class REFR : public Record
{
public:
    static constexpr FormEnum kType = FormEnum::REFR;

    struct Data
    {
        Chunks::NAME m_basicObject{};
    };

    Data ParseChunks() noexcept;
};

