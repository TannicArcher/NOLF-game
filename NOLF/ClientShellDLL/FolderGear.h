// FolderGear.h: interface for the CFolderGear class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _FOLDER_GEAR_H_
#define _FOLDER_GEAR_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BaseSelectionFolder.h"

class CFolderGear : public CBaseSelectionFolder
{
public:
	CFolderGear();
	virtual ~CFolderGear();

	// Build the folder
    LTBOOL	Build();

	// This is called when the folder gets or loses focus
    virtual void    OnFocus(LTBOOL bFocus);
	virtual void	UpdateInterfaceSFX();

    virtual uint32  OnCommand(uint32 dwCommand, uint32 dwParam1, uint32 dwParam2);

    HSTRING         GetHelpString(uint32 dwHelpId, int nControlIndex);

	virtual	LTBOOL	UpdateSelection();
    virtual LTBOOL	IsAvailable();
	void	SkipOutfitting();

protected:

    void			BuildGearList();
	void			SaveGearData();
	void			ClearGearList();
	void			SetContinue();

	virtual void	CreateModelSFX();
	virtual void	RemoveInterfaceSFX();


};

#endif // _FOLDER_GEAR_H_