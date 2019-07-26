// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_HXX
#define C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_HXX

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

#include <xsd/cxx/xml/dom/serialization-header.hxx>
#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Namespace information and list stream. Used in
  // serialization functions.
  //
  typedef ::xsd::cxx::xml::dom::namespace_info< char > namespace_info;
  typedef ::xsd::cxx::xml::dom::namespace_infomap< char > namespace_infomap;
  typedef ::xsd::cxx::tree::list_stream< char > list_stream;
  typedef ::xsd::cxx::tree::as_double< double_ > as_double;
  typedef ::xsd::cxx::tree::as_decimal< decimal > as_decimal;
  typedef ::xsd::cxx::tree::facet facet;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::serialization< char > serialization;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
class MOTType;
class DATASETType;
class CFG_DATAType;
class DATA_INFOType;
class WORD_SETType;
class BDD_Cfg_DATAType;
class MOTTypeTYPE;
class MOTTypeCRIT_EVAL;
class MOTTypeTYPE1;

#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

class MOTType: public ::xml_schema::type
{
  public:
  // REF
  //
  typedef ::xml_schema::string REF_type;
  typedef ::xsd::cxx::tree::optional< REF_type > REF_optional;
  typedef ::xsd::cxx::tree::traits< REF_type, char > REF_traits;

  const REF_optional&
  REF () const;

  REF_optional&
  REF ();

  void
  REF (const REF_type& x);

  void
  REF (const REF_optional& x);

  void
  REF (::std::auto_ptr< REF_type > p);

  // RANG
  //
  typedef ::xml_schema::unsigned_byte RANG_type;
  typedef ::xsd::cxx::tree::optional< RANG_type > RANG_optional;
  typedef ::xsd::cxx::tree::traits< RANG_type, char > RANG_traits;

  const RANG_optional&
  RANG () const;

  RANG_optional&
  RANG ();

  void
  RANG (const RANG_type& x);

  void
  RANG (const RANG_optional& x);

  // TYPE
  //
  typedef ::MOTTypeTYPE TYPE_type;
  typedef ::xsd::cxx::tree::optional< TYPE_type > TYPE_optional;
  typedef ::xsd::cxx::tree::traits< TYPE_type, char > TYPE_traits;

  const TYPE_optional&
  TYPE () const;

  TYPE_optional&
  TYPE ();

  void
  TYPE (const TYPE_type& x);

  void
  TYPE (const TYPE_optional& x);

  void
  TYPE (::std::auto_ptr< TYPE_type > p);

  // INFO
  //
  typedef ::xml_schema::string INFO_type;
  typedef ::xsd::cxx::tree::traits< INFO_type, char > INFO_traits;

  const INFO_type&
  INFO () const;

  INFO_type&
  INFO ();

  void
  INFO (const INFO_type& x);

  void
  INFO (::std::auto_ptr< INFO_type > p);

  // CRIT_EVAL
  //
  typedef ::MOTTypeCRIT_EVAL CRIT_EVAL_type;
  typedef ::xsd::cxx::tree::optional< CRIT_EVAL_type > CRIT_EVAL_optional;
  typedef ::xsd::cxx::tree::traits< CRIT_EVAL_type, char > CRIT_EVAL_traits;

  const CRIT_EVAL_optional&
  CRIT_EVAL () const;

  CRIT_EVAL_optional&
  CRIT_EVAL ();

  void
  CRIT_EVAL (const CRIT_EVAL_type& x);

  void
  CRIT_EVAL (const CRIT_EVAL_optional& x);

  void
  CRIT_EVAL (::std::auto_ptr< CRIT_EVAL_type > p);

  // WORD_SET
  //
  typedef ::WORD_SETType WORD_SET_type;
  typedef ::xsd::cxx::tree::optional< WORD_SET_type > WORD_SET_optional;
  typedef ::xsd::cxx::tree::traits< WORD_SET_type, char > WORD_SET_traits;

  const WORD_SET_optional&
  WORD_SET () const;

  WORD_SET_optional&
  WORD_SET ();

  void
  WORD_SET (const WORD_SET_type& x);

  void
  WORD_SET (const WORD_SET_optional& x);

  void
  WORD_SET (::std::auto_ptr< WORD_SET_type > p);

  // REF
  //
  typedef ::xml_schema::string REF1_type;
  typedef ::xsd::cxx::tree::optional< REF1_type > REF1_optional;
  typedef ::xsd::cxx::tree::traits< REF1_type, char > REF1_traits;

  const REF1_optional&
  REF1 () const;

  REF1_optional&
  REF1 ();

  void
  REF1 (const REF1_type& x);

  void
  REF1 (const REF1_optional& x);

  void
  REF1 (::std::auto_ptr< REF1_type > p);

  // RANG
  //
  typedef ::xml_schema::string RANG1_type;
  typedef ::xsd::cxx::tree::optional< RANG1_type > RANG1_optional;
  typedef ::xsd::cxx::tree::traits< RANG1_type, char > RANG1_traits;

  const RANG1_optional&
  RANG1 () const;

  RANG1_optional&
  RANG1 ();

  void
  RANG1 (const RANG1_type& x);

  void
  RANG1 (const RANG1_optional& x);

  void
  RANG1 (::std::auto_ptr< RANG1_type > p);

  // TYPE
  //
  typedef ::MOTTypeTYPE1 TYPE1_type;
  typedef ::xsd::cxx::tree::optional< TYPE1_type > TYPE1_optional;
  typedef ::xsd::cxx::tree::traits< TYPE1_type, char > TYPE1_traits;

  const TYPE1_optional&
  TYPE1 () const;

  TYPE1_optional&
  TYPE1 ();

  void
  TYPE1 (const TYPE1_type& x);

  void
  TYPE1 (const TYPE1_optional& x);

  void
  TYPE1 (::std::auto_ptr< TYPE1_type > p);

  // Coding
  //
  typedef ::xml_schema::string Coding_type;
  typedef ::xsd::cxx::tree::optional< Coding_type > Coding_optional;
  typedef ::xsd::cxx::tree::traits< Coding_type, char > Coding_traits;

  const Coding_optional&
  Coding () const;

  Coding_optional&
  Coding ();

  void
  Coding (const Coding_type& x);

  void
  Coding (const Coding_optional& x);

  void
  Coding (::std::auto_ptr< Coding_type > p);

  // Constructors.
  //
  MOTType (const INFO_type&);

  MOTType (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

  MOTType (const MOTType& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

  virtual MOTType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  MOTType&
  operator= (const MOTType& x);

  virtual 
  ~MOTType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  REF_optional REF_;
  RANG_optional RANG_;
  TYPE_optional TYPE_;
  ::xsd::cxx::tree::one< INFO_type > INFO_;
  CRIT_EVAL_optional CRIT_EVAL_;
  WORD_SET_optional WORD_SET_;
  REF1_optional REF1_;
  RANG1_optional RANG1_;
  TYPE1_optional TYPE1_;
  Coding_optional Coding_;
};

class DATASETType: public ::xml_schema::type
{
  public:
  // MOT
  //
  typedef ::MOTType MOT_type;
  typedef ::xsd::cxx::tree::sequence< MOT_type > MOT_sequence;
  typedef MOT_sequence::iterator MOT_iterator;
  typedef MOT_sequence::const_iterator MOT_const_iterator;
  typedef ::xsd::cxx::tree::traits< MOT_type, char > MOT_traits;

  const MOT_sequence&
  MOT () const;

  MOT_sequence&
  MOT ();

  void
  MOT (const MOT_sequence& s);

  // Constructors.
  //
  DATASETType ();

  DATASETType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  DATASETType (const DATASETType& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  virtual DATASETType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  DATASETType&
  operator= (const DATASETType& x);

  virtual 
  ~DATASETType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  MOT_sequence MOT_;
};

class CFG_DATAType: public ::xml_schema::type
{
  public:
  // NOM
  //
  typedef ::xml_schema::string NOM_type;
  typedef ::xsd::cxx::tree::traits< NOM_type, char > NOM_traits;

  const NOM_type&
  NOM () const;

  NOM_type&
  NOM ();

  void
  NOM (const NOM_type& x);

  void
  NOM (::std::auto_ptr< NOM_type > p);

  // DATASET
  //
  typedef ::DATASETType DATASET_type;
  typedef ::xsd::cxx::tree::traits< DATASET_type, char > DATASET_traits;

  const DATASET_type&
  DATASET () const;

  DATASET_type&
  DATASET ();

  void
  DATASET (const DATASET_type& x);

  void
  DATASET (::std::auto_ptr< DATASET_type > p);

  // IDENTIFIANT
  //
  typedef ::xml_schema::string IDENTIFIANT_type;
  typedef ::xsd::cxx::tree::optional< IDENTIFIANT_type > IDENTIFIANT_optional;
  typedef ::xsd::cxx::tree::traits< IDENTIFIANT_type, char > IDENTIFIANT_traits;

  const IDENTIFIANT_optional&
  IDENTIFIANT () const;

  IDENTIFIANT_optional&
  IDENTIFIANT ();

  void
  IDENTIFIANT (const IDENTIFIANT_type& x);

  void
  IDENTIFIANT (const IDENTIFIANT_optional& x);

  void
  IDENTIFIANT (::std::auto_ptr< IDENTIFIANT_type > p);

  // PREFIX
  //
  typedef ::xml_schema::string PREFIX_type;
  typedef ::xsd::cxx::tree::optional< PREFIX_type > PREFIX_optional;
  typedef ::xsd::cxx::tree::traits< PREFIX_type, char > PREFIX_traits;

  const PREFIX_optional&
  PREFIX () const;

  PREFIX_optional&
  PREFIX ();

  void
  PREFIX (const PREFIX_type& x);

  void
  PREFIX (const PREFIX_optional& x);

  void
  PREFIX (::std::auto_ptr< PREFIX_type > p);

  // Constructors.
  //
  CFG_DATAType (const NOM_type&,
                const DATASET_type&);

  CFG_DATAType (const NOM_type&,
                ::std::auto_ptr< DATASET_type >);

  CFG_DATAType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  CFG_DATAType (const CFG_DATAType& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  virtual CFG_DATAType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  CFG_DATAType&
  operator= (const CFG_DATAType& x);

  virtual 
  ~CFG_DATAType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< NOM_type > NOM_;
  ::xsd::cxx::tree::one< DATASET_type > DATASET_;
  IDENTIFIANT_optional IDENTIFIANT_;
  PREFIX_optional PREFIX_;
};

class DATA_INFOType: public ::xml_schema::type
{
  public:
  // INFO
  //
  typedef ::xml_schema::string INFO_type;
  typedef ::xsd::cxx::tree::traits< INFO_type, char > INFO_traits;

  const INFO_type&
  INFO () const;

  INFO_type&
  INFO ();

  void
  INFO (const INFO_type& x);

  void
  INFO (::std::auto_ptr< INFO_type > p);

  // REF
  //
  typedef ::xml_schema::string REF_type;
  typedef ::xsd::cxx::tree::optional< REF_type > REF_optional;
  typedef ::xsd::cxx::tree::traits< REF_type, char > REF_traits;

  const REF_optional&
  REF () const;

  REF_optional&
  REF ();

  void
  REF (const REF_type& x);

  void
  REF (const REF_optional& x);

  void
  REF (::std::auto_ptr< REF_type > p);

  // RANG
  //
  typedef ::xml_schema::unsigned_byte RANG_type;
  typedef ::xsd::cxx::tree::optional< RANG_type > RANG_optional;
  typedef ::xsd::cxx::tree::traits< RANG_type, char > RANG_traits;

  const RANG_optional&
  RANG () const;

  RANG_optional&
  RANG ();

  void
  RANG (const RANG_type& x);

  void
  RANG (const RANG_optional& x);

  // TYPE
  //
  typedef ::xml_schema::string TYPE_type;
  typedef ::xsd::cxx::tree::optional< TYPE_type > TYPE_optional;
  typedef ::xsd::cxx::tree::traits< TYPE_type, char > TYPE_traits;

  const TYPE_optional&
  TYPE () const;

  TYPE_optional&
  TYPE ();

  void
  TYPE (const TYPE_type& x);

  void
  TYPE (const TYPE_optional& x);

  void
  TYPE (::std::auto_ptr< TYPE_type > p);

  // Constructors.
  //
  DATA_INFOType (const INFO_type&);

  DATA_INFOType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  DATA_INFOType (const DATA_INFOType& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  virtual DATA_INFOType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  DATA_INFOType&
  operator= (const DATA_INFOType& x);

  virtual 
  ~DATA_INFOType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< INFO_type > INFO_;
  REF_optional REF_;
  RANG_optional RANG_;
  TYPE_optional TYPE_;
};

class WORD_SETType: public ::xml_schema::type
{
  public:
  // DATA_INFO
  //
  typedef ::DATA_INFOType DATA_INFO_type;
  typedef ::xsd::cxx::tree::sequence< DATA_INFO_type > DATA_INFO_sequence;
  typedef DATA_INFO_sequence::iterator DATA_INFO_iterator;
  typedef DATA_INFO_sequence::const_iterator DATA_INFO_const_iterator;
  typedef ::xsd::cxx::tree::traits< DATA_INFO_type, char > DATA_INFO_traits;

  const DATA_INFO_sequence&
  DATA_INFO () const;

  DATA_INFO_sequence&
  DATA_INFO ();

  void
  DATA_INFO (const DATA_INFO_sequence& s);

  // Constructors.
  //
  WORD_SETType ();

  WORD_SETType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  WORD_SETType (const WORD_SETType& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  virtual WORD_SETType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  WORD_SETType&
  operator= (const WORD_SETType& x);

  virtual 
  ~WORD_SETType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  DATA_INFO_sequence DATA_INFO_;
};

class BDD_Cfg_DATAType: public ::xml_schema::type
{
  public:
  // CFG_DATA
  //
  typedef ::CFG_DATAType CFG_DATA_type;
  typedef ::xsd::cxx::tree::sequence< CFG_DATA_type > CFG_DATA_sequence;
  typedef CFG_DATA_sequence::iterator CFG_DATA_iterator;
  typedef CFG_DATA_sequence::const_iterator CFG_DATA_const_iterator;
  typedef ::xsd::cxx::tree::traits< CFG_DATA_type, char > CFG_DATA_traits;

  const CFG_DATA_sequence&
  CFG_DATA () const;

  CFG_DATA_sequence&
  CFG_DATA ();

  void
  CFG_DATA (const CFG_DATA_sequence& s);

  // Constructors.
  //
  BDD_Cfg_DATAType ();

  BDD_Cfg_DATAType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  BDD_Cfg_DATAType (const BDD_Cfg_DATAType& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  virtual BDD_Cfg_DATAType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  BDD_Cfg_DATAType&
  operator= (const BDD_Cfg_DATAType& x);

  virtual 
  ~BDD_Cfg_DATAType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  CFG_DATA_sequence CFG_DATA_;
};

class MOTTypeTYPE: public ::xml_schema::string
{
  public:
  enum value
  {
    UINT16,
    INT16,
    FLOAT,
    CHAR
  };

  MOTTypeTYPE (value v);

  MOTTypeTYPE (const char* v);

  MOTTypeTYPE (const ::std::string& v);

  MOTTypeTYPE (const ::xml_schema::string& v);

  MOTTypeTYPE (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeTYPE (const ::xercesc::DOMAttr& a,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeTYPE (const ::std::string& s,
               const ::xercesc::DOMElement* e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeTYPE (const MOTTypeTYPE& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  virtual MOTTypeTYPE*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  MOTTypeTYPE&
  operator= (value v);

  virtual
  operator value () const
  {
    return _xsd_MOTTypeTYPE_convert ();
  }

  protected:
  value
  _xsd_MOTTypeTYPE_convert () const;

  public:
  static const char* const _xsd_MOTTypeTYPE_literals_[4];
  static const value _xsd_MOTTypeTYPE_indexes_[4];
};

class MOTTypeCRIT_EVAL: public ::xml_schema::string
{
  public:
  enum value
  {
    OUI,
    NON
  };

  MOTTypeCRIT_EVAL (value v);

  MOTTypeCRIT_EVAL (const char* v);

  MOTTypeCRIT_EVAL (const ::std::string& v);

  MOTTypeCRIT_EVAL (const ::xml_schema::string& v);

  MOTTypeCRIT_EVAL (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  MOTTypeCRIT_EVAL (const ::xercesc::DOMAttr& a,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  MOTTypeCRIT_EVAL (const ::std::string& s,
                    const ::xercesc::DOMElement* e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  MOTTypeCRIT_EVAL (const MOTTypeCRIT_EVAL& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  virtual MOTTypeCRIT_EVAL*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  MOTTypeCRIT_EVAL&
  operator= (value v);

  virtual
  operator value () const
  {
    return _xsd_MOTTypeCRIT_EVAL_convert ();
  }

  protected:
  value
  _xsd_MOTTypeCRIT_EVAL_convert () const;

  public:
  static const char* const _xsd_MOTTypeCRIT_EVAL_literals_[2];
  static const value _xsd_MOTTypeCRIT_EVAL_indexes_[2];
};

class MOTTypeTYPE1: public ::xml_schema::string
{
  public:
  enum value
  {
    BIT,
    BYTE
  };

  MOTTypeTYPE1 (value v);

  MOTTypeTYPE1 (const char* v);

  MOTTypeTYPE1 (const ::std::string& v);

  MOTTypeTYPE1 (const ::xml_schema::string& v);

  MOTTypeTYPE1 (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  MOTTypeTYPE1 (const ::xercesc::DOMAttr& a,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  MOTTypeTYPE1 (const ::std::string& s,
                const ::xercesc::DOMElement* e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  MOTTypeTYPE1 (const MOTTypeTYPE1& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  virtual MOTTypeTYPE1*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  MOTTypeTYPE1&
  operator= (value v);

  virtual
  operator value () const
  {
    return _xsd_MOTTypeTYPE1_convert ();
  }

  protected:
  value
  _xsd_MOTTypeTYPE1_convert () const;

  public:
  static const char* const _xsd_MOTTypeTYPE1_literals_[2];
  static const value _xsd_MOTTypeTYPE1_indexes_[2];
};

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

// Parse a URI or a local file.
//

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (const ::std::string& uri,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (const ::std::string& uri,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (const ::std::string& uri,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse std::istream.
//

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              const ::std::string& id,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              const ::std::string& id,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::std::istream& is,
              const ::std::string& id,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::InputSource.
//

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::xercesc::InputSource& is,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::xercesc::InputSource& is,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::xercesc::InputSource& is,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::DOMDocument.
//

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (const ::xercesc::DOMDocument& d,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_Cfg_DATAType >
BDD_Cfg_DATA (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

// Serialize to std::ostream.
//

void
BDD_Cfg_DATA (::std::ostream& os,
              const ::BDD_Cfg_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_Cfg_DATA (::std::ostream& os,
              const ::BDD_Cfg_DATAType& x, 
              ::xml_schema::error_handler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_Cfg_DATA (::std::ostream& os,
              const ::BDD_Cfg_DATAType& x, 
              ::xercesc::DOMErrorHandler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

// Serialize to xercesc::XMLFormatTarget.
//

void
BDD_Cfg_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_Cfg_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_Cfg_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_Cfg_DATAType& x, 
              ::xml_schema::error_handler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_Cfg_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_Cfg_DATAType& x, 
              ::xercesc::DOMErrorHandler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

// Serialize to an existing xercesc::DOMDocument.
//

void
BDD_Cfg_DATA (::xercesc::DOMDocument& d,
              const ::BDD_Cfg_DATAType& x,
              ::xml_schema::flags f = 0);

// Serialize to a new xercesc::DOMDocument.
//

::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
BDD_Cfg_DATA (const ::BDD_Cfg_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              ::xml_schema::flags f = 0);

void
operator<< (::xercesc::DOMElement&, const MOTType&);

void
operator<< (::xercesc::DOMElement&, const DATASETType&);

void
operator<< (::xercesc::DOMElement&, const CFG_DATAType&);

void
operator<< (::xercesc::DOMElement&, const DATA_INFOType&);

void
operator<< (::xercesc::DOMElement&, const WORD_SETType&);

void
operator<< (::xercesc::DOMElement&, const BDD_Cfg_DATAType&);

void
operator<< (::xercesc::DOMElement&, const MOTTypeTYPE&);

void
operator<< (::xercesc::DOMAttr&, const MOTTypeTYPE&);

void
operator<< (::xml_schema::list_stream&,
            const MOTTypeTYPE&);

void
operator<< (::xercesc::DOMElement&, const MOTTypeCRIT_EVAL&);

void
operator<< (::xercesc::DOMAttr&, const MOTTypeCRIT_EVAL&);

void
operator<< (::xml_schema::list_stream&,
            const MOTTypeCRIT_EVAL&);

void
operator<< (::xercesc::DOMElement&, const MOTTypeTYPE1&);

void
operator<< (::xercesc::DOMAttr&, const MOTTypeTYPE1&);

void
operator<< (::xml_schema::list_stream&,
            const MOTTypeTYPE1&);

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_HXX
