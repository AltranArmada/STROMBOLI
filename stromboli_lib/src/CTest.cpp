#include "CTest.h"

#include <iostream>
#include <fstream>
using namespace std;

CTest::CTest()
{
}

CTest::~CTest()
{
}


bool CTest::Generate_BDD_Cfg_Reseau_Test_File(const wchar_t* destPath)
{
	bool res = false;

	try
	{
		// Build the plages
		//==================
		BDD_Cfg_ReseauType::PLAGE_sequence plageColl;

		// Add 1 PLAGE
		//-------------
		{
			PLAGEType plage(IPv4AddressType("192.168.100.0"),
							IPv4AddressType("192.168.100.1"),
							IPv4AddressType("192.168.101.254"),
							IPv4AddressType("255.255.254.0"),
							IPv4AddressType("192.168.101.255"));

			plage.IDENTIFIANT("SYS_CMD");

			plageColl.push_back(plage);
		}

		// Add 1 PLAGE
		//-------------
		{
			PLAGEType plage(IPv4AddressType("192.168.100.0"),
							IPv4AddressType("192.168.100.1"),
							IPv4AddressType("192.168.101.254"),
							IPv4AddressType("255.255.254.0"),
							IPv4AddressType("192.168.101.255"));

			plage.IDENTIFIANT("SYS_SURV");

			plageColl.push_back(plage);
		}

		// Build the equipments
		//======================
		BDD_Cfg_ReseauType::EQUIP_sequence equipColl;

		// Add 1 EQUIP
		//-------------
		{
			EQUIPType equip("PCP BIS Voie 1 Principale",
							IPv4AddressType("192.168.100.11"));

			equip.IDENTIFIANT("PCPBISUOP1_CPU_P");

			equipColl.push_back(equip);
		}

		// Add 1 EQUIP
		//-------------
		{
			EQUIPType equip("PCP BIS Voie 1 Secondaire",
							IPv4AddressType("192.168.100.12"));

			equip.IDENTIFIANT("PCPBISUOP1_CPU_A");

			equipColl.push_back(equip);
		}

		// Create the root
		//=================
		BDD_Cfg_ReseauType root;

		// Add the sequence of plages to the root
		root.PLAGE(plageColl);

		// Add the sequence of equipements to the root
		root.EQUIP(equipColl);

		// Save the data
		//===============
		res = true;

		if (res)
		{
			res = Save_BDD_Cfg_Reseau (root, destPath);
		}

	}
	catch (const xml_schema::exception& e)
	{
		cerr << "CTest::Generate_BDD_Cfg_Reseau_Test_File: failed : " << e.what() << endl;
	}

	return res;
}


bool CTest::Save_BDD_Cfg_Reseau(const wchar_t* path)
{
	return Save_BDD_Cfg_Reseau(*m_pBDD_Cfg_Reseau.get(), path);
}

bool CTest::Save_BDD_Cfg_Reseau(const BDD_Cfg_ReseauType& md, const wchar_t* path)
{
	bool res = false;

	try
	{
		// Convert from wstring to string
		wstring wPath(path);
		string path(wPath.begin(), wPath.end());

		// Serialize the object model to XML.
		//
		xml_schema::namespace_infomap infomap;
		infomap[""].name = "";
		infomap[""].schema = "/home/mcorset/Documents/Altran/Safran/STROMBOLI/stromboli_lib/xsd/Cfg_IP.xsd";

		ofstream ofs(path);

		if (!ofs)
		{
			wcerr << L"CTest::Save_BDD_Cfg_Reseau: failed : Cannot create file : " << wPath << endl;
		}
		else
		{
			BDD_Cfg_Reseau (ofs, md, infomap);

			ofs.close();

			// if no exception : ok
			res = true;
		}
	}
	catch (const xml_schema::exception& e)
	{
		cerr << "CTest::Save_BDD_Cfg_Reseau: failed : " << e.what() << endl;
	}

	return res;
}


bool CTest::Load_BDD_Cfg_Reseau (wstring wPath)
{
	bool res = false;
	try
	{
		// Convert from wstring to string
		string path(wPath.begin(), wPath.end());

		//unique_ptr<BDD_Cfg_ReseauType> pTree (BDD_Cfg_Reseau (path));
		auto_ptr<BDD_Cfg_ReseauType> pTree (BDD_Cfg_Reseau (path));

		// if no exception, copy pointer to internal member
		m_pBDD_Cfg_Reseau = pTree;

		// if no exception
		res = true;
	}
	catch (const xml_schema::exception& e)
	{
		cerr << "CTest::test_BDD_Cfg_Reseau failed : " << e.what() << endl;
		return res;
	}

	return res;
}

