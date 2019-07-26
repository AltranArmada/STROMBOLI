// Stromboli.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

// #include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "CTest.h"

int main()
{
	// Attention pb de manque namespace dans cfg data val et trace sortie => à ajouter à la gnération ?


	const wchar_t* genpath	= L"/home/mcorset/Documents/Altran/Safran/STROMBOLI/stromboli_lib/xml/20190701_Exemple_Cfg_IP__gen.xml";
	const wchar_t* path		= L"/home/mcorset/Documents/Altran/Safran/STROMBOLI/stromboli_lib/xml/20190701_Exemple_Cfg_IP.xml";
	const wchar_t* modifpath= L"/home/mcorset/Documents/Altran/Safran/STROMBOLI/stromboli_lib/xml/20190701_Exemple_Cfg_IP__modified.xml";

	{
		CTest t;
		if (t.Generate_BDD_Cfg_Reseau_Test_File(genpath))
		{
			wcout << "Generation succeeded: " << genpath << endl;
		}
		else
		{
			wcout << "Generation failed: " << genpath << endl;
		}
	}

	{
		CTest t;
		if (t.Load_BDD_Cfg_Reseau(genpath))
		{
			wcout << "Loading succeeded: " << genpath << endl;
		}
		else
		{
			wcout << "Loading failed: " << genpath << endl;
		}
	}

	{
		CTest t;
		if (t.Load_BDD_Cfg_Reseau(path))
		{
			wcout << "Loading succeeded: " << path << endl;
		}
		else
		{
			wcout << "Loading failed: " << path << endl;
		}
	}

	{
		CTest t;
		if (t.Load_BDD_Cfg_Reseau(modifpath))
		{
			wcout << "Loading succeeded: " << modifpath << endl;
		}
		else
		{
			wcout << "Loading failed: " << modifpath << endl;
		}
	}
    std::cout << "End test!\n"; 
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
