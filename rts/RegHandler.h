// RegHandler.h: interface for the RegHandler class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REGHANDLER_H__508F534F_9F3D_11D6_AD55_DE4DC0775D55__INCLUDED_)
#define AFX_REGHANDLER_H__508F534F_9F3D_11D6_AD55_DE4DC0775D55__INCLUDED_

#ifdef _WIN32
#include <string>
#include <windows.h>
#include <winreg.h>

using std::string;

class RegHandler  
{
public:
	void SetInt(string name,unsigned int value);
	void SetString(string name,string value);
	string GetString(string name,string def);
	unsigned int GetInt(string name,unsigned int def);
	RegHandler(string keyname,HKEY key=HKEY_CURRENT_USER);
	virtual ~RegHandler();
	HKEY regkey;
};
extern RegHandler regHandler;

#else
/*
 * FIXME: Ugly ass hack
 * This should be handled by an intermediate header file.
 * Ideally in the future there should be an abstract 
 * ConfigBase class, and RegHandler and dotfileHandler
 * would derive from it, as well as any other config types
 */
#include "dotfileHandler.h"
#endif

#endif // !defined(AFX_REGHANDLER_H__508F534F_9F3D_11D6_AD55_DE4DC0775D55__INCLUDED_)

