#pragma once

#include "Record.h"
#include "Chunks.h"

// https://en.uesp.net/wiki/Skyrim_Mod:Mod_File_Format/CLMT
class CLMT : Record
{
public:
    static constexpr FormEnum kType = FormEnum::CLMT;

    struct Data
    {
        // EDID
        String m_editorId = "";
        // WLST
        Chunks::WLST m_weatherList{};
        // FNAM
        String m_sunTexture = "";
        // GNAM
        String m_glareTexture = "";
        //TNAM
        Chunks::TNAM m_timing{};
    };

    Data ParseChunks() noexcept;
};
