#include <iostream>
#include "Cfg_Flux_IP.hxx"

using namespace std;

int
main (int argc, char* argv[])
{
  try
  {
    unique_ptr<BDD_Cfg_FluxIPType> fluxIP (BDD_Cfg_FluxIPType (argv[1]));
    //fluxIP->;
    //auto flux = fluxIP->FLUX();
    //for (auto )
    // for (BDD_Cfg_FluxIPType::name_const_iterator i (h->name ().begin ());
    //      i != h->name ().end ();
    //      ++i)
    // {
    //   cerr << h->greeting () << ", " << *i << "!" << endl;
    // }
  }
  catch (const xml_schema::exception& e)
  {
    cerr << e << endl;
    return 1;
  }
}