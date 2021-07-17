#define DllImport   __declspec( dllimport )
#include <windows.h>

#pragma comment(lib, "ppmusau.lib")

extern "C" {
    DllImport void MT_FlushMusicQueue();
    DllImport void MT_FreeMusicEngine();
    DllImport short MT_GetDefaultBand(BSTR strBuffer, int gpStyle);
    DllImport short MT_GetDefaultPersonality(BSTR strBuffer, int gpStyle);
    DllImport short MT_GetFirstBand(BSTR strBuffer, int gpStyle);
    DllImport short MT_GetFirstCategory(BSTR strBuffer);
    DllImport short MT_GetFirstMotif(BSTR strBuffer, int gpStyle);
    DllImport short MT_GetFirstPersonality(BSTR strBuffer, int gpStyle);
    DllImport short MT_GetFirstStyle(BSTR strBuffer, BSTR strCategory);
    DllImport short MT_GetNextBand(BSTR strBuffer, int gpStyle, BSTR strPrevBand);
    DllImport short MT_GetNextCategory(BSTR strBuffer, BSTR strPrevCategory);
    DllImport short MT_GetNextMotif(BSTR strBuffer, int gpStyle, BSTR strPrevMotif);
    DllImport short MT_GetNextPersonality(BSTR strBuffer, int gpStyle, BSTR strPrevPersonality);
    DllImport short MT_GetNextStyle(BSTR strBuffer, BSTR strPrevCategory, BSTR strPrevStyle);
    DllImport short MT_GetPersonalityFilename(BSTR strBuffer, BSTR strPersonality);
    DllImport short MT_GetResourceString(BSTR strBuffer, short nRsrcId);
    DllImport short MT_GetStyleFilename(BSTR strBuffer, BSTR strCategory, BSTR strGuid);
    DllImport short MT_GetStyleName(BSTR strBuffer, BSTR strCategory, BSTR strGuid);
    DllImport int MT_GetStylePtr(BSTR strCategory, BSTR strGuid);
    DllImport BOOL MT_LoadMusicEngine();
    DllImport BOOL MT_MIDIOut(int fFlag);
    DllImport void MT_PlayMotif(int gpStyle, BSTR strMotif);
    DllImport void MT_QueueMotif(int gpStyle, BSTR strMotif);
    DllImport int MT_QueueMusic(int gpStyle, BSTR strPersonality, BSTR strBand);
    DllImport void MT_RestoreNotifySink();
    DllImport void MT_SetBand(int gpStyle, BSTR strBand);
    DllImport void MT_SetNotifySink();
    DllImport void MT_SetPersonality(int gpStyle, BSTR strPersonality, BSTR strBand);
    DllImport void MT_SetStyle(int gpStyle);
    DllImport int MT_StartMusic(int gpStyle, BSTR strPersonality, BSTR strBand);
    DllImport int MT_StopMusic();
}
