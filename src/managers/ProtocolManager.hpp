#pragma once

#include "../defines.hpp"
#include "../protocols/ToplevelExport.hpp"
#include "../protocols/FractionalScale.hpp"
#include "../protocols/TextInputV1.hpp"
#include "../protocols/GlobalShortcuts.hpp"

class CProtocolManager {
  public:
    CProtocolManager();

    std::unique_ptr<CToplevelExportProtocolManager>  m_pToplevelExportProtocolManager;
    std::unique_ptr<CFractionalScaleProtocolManager> m_pFractionalScaleProtocolManager;
    std::unique_ptr<CTextInputV1ProtocolManager>     m_pTextInputV1ProtocolManager;
    std::unique_ptr<CGlobalShortcutsProtocolManager> m_pGlobalShortcutsProtocolManager;
};

inline std::unique_ptr<CProtocolManager> g_pProtocolManager;
