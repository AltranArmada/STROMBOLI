#pragma once

#include "Cfg_Data.hxx"
#include "Cfg_Flux_IP.hxx"
#include "Cfg_IP.hxx"

#include <string>

class CTest
{
public:
	CTest();
	virtual ~CTest();

	virtual bool Load_BDD_Cfg_Reseau(std::wstring wPath);
	virtual bool Save_BDD_Cfg_Reseau(const wchar_t* path);
	virtual bool Save_BDD_Cfg_Reseau(const BDD_Cfg_ReseauType& md, const wchar_t* path);

	virtual bool Generate_BDD_Cfg_Reseau_Test_File(const wchar_t* destPath);

private:
	std::auto_ptr<BDD_Cfg_ReseauType>      m_pBDD_Cfg_Reseau; // WARNING : auto_ptr<T> is deprecated in C++11, use unique_ptr instead 

};

