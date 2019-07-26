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

#ifndef C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_VAL_HXX
#define C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_VAL_HXX

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
class VALType;
class VALUE_SETType;
class DATA_INFOType;
class WORD_SETType;
class MOTType;
class DATA_SETType;
class DATAType;
class BDD_SYS_DATAType;
class MOTTypeINFO;

#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

class VALType: public ::xml_schema::type
{
  public:
  // REFVAL
  //
  typedef ::xml_schema::unsigned_byte REFVAL_type;
  typedef ::xsd::cxx::tree::traits< REFVAL_type, char > REFVAL_traits;

  const REFVAL_type&
  REFVAL () const;

  REFVAL_type&
  REFVAL ();

  void
  REFVAL (const REFVAL_type& x);

  // VALUE
  //
  typedef ::xml_schema::string VALUE_type;
  typedef ::xsd::cxx::tree::traits< VALUE_type, char > VALUE_traits;

  const VALUE_type&
  VALUE () const;

  VALUE_type&
  VALUE ();

  void
  VALUE (const VALUE_type& x);

  void
  VALUE (::std::auto_ptr< VALUE_type > p);

  // Constructors.
  //
  VALType (const REFVAL_type&,
           const VALUE_type&);

  VALType (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

  VALType (const VALType& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

  virtual VALType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  VALType&
  operator= (const VALType& x);

  virtual 
  ~VALType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< REFVAL_type > REFVAL_;
  ::xsd::cxx::tree::one< VALUE_type > VALUE_;
};

class VALUE_SETType: public ::xml_schema::type
{
  public:
  // VAL
  //
  typedef ::VALType VAL_type;
  typedef ::xsd::cxx::tree::sequence< VAL_type > VAL_sequence;
  typedef VAL_sequence::iterator VAL_iterator;
  typedef VAL_sequence::const_iterator VAL_const_iterator;
  typedef ::xsd::cxx::tree::traits< VAL_type, char > VAL_traits;

  const VAL_sequence&
  VAL () const;

  VAL_sequence&
  VAL ();

  void
  VAL (const VAL_sequence& s);

  // Constructors.
  //
  VALUE_SETType ();

  VALUE_SETType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  VALUE_SETType (const VALUE_SETType& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  virtual VALUE_SETType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  VALUE_SETType&
  operator= (const VALUE_SETType& x);

  virtual 
  ~VALUE_SETType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  VAL_sequence VAL_;
};

class DATA_INFOType: public ::xml_schema::type
{
  public:
  // Define
  //
  typedef ::xml_schema::string Define_type;
  typedef ::xsd::cxx::tree::traits< Define_type, char > Define_traits;

  const Define_type&
  Define () const;

  Define_type&
  Define ();

  void
  Define (const Define_type& x);

  void
  Define (::std::auto_ptr< Define_type > p);

  // VALUE_SET
  //
  typedef ::VALUE_SETType VALUE_SET_type;
  typedef ::xsd::cxx::tree::traits< VALUE_SET_type, char > VALUE_SET_traits;

  const VALUE_SET_type&
  VALUE_SET () const;

  VALUE_SET_type&
  VALUE_SET ();

  void
  VALUE_SET (const VALUE_SET_type& x);

  void
  VALUE_SET (::std::auto_ptr< VALUE_SET_type > p);

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

  // Constructors.
  //
  DATA_INFOType (const Define_type&,
                 const VALUE_SET_type&);

  DATA_INFOType (const Define_type&,
                 ::std::auto_ptr< VALUE_SET_type >);

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
  ::xsd::cxx::tree::one< Define_type > Define_;
  ::xsd::cxx::tree::one< VALUE_SET_type > VALUE_SET_;
  REF_optional REF_;
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

class MOTType: public ::xml_schema::type
{
  public:
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

  // INFO
  //
  typedef ::MOTTypeINFO INFO_type;
  typedef ::xsd::cxx::tree::optional< INFO_type > INFO_optional;
  typedef ::xsd::cxx::tree::traits< INFO_type, char > INFO_traits;

  const INFO_optional&
  INFO () const;

  INFO_optional&
  INFO ();

  void
  INFO (const INFO_type& x);

  void
  INFO (const INFO_optional& x);

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

  // Constructors.
  //
  MOTType ();

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
  WORD_SET_optional WORD_SET_;
  INFO_optional INFO_;
  REF_optional REF_;
};

class DATA_SETType: public ::xml_schema::type
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
  DATA_SETType ();

  DATA_SETType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  DATA_SETType (const DATA_SETType& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  virtual DATA_SETType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  DATA_SETType&
  operator= (const DATA_SETType& x);

  virtual 
  ~DATA_SETType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  MOT_sequence MOT_;
};

class DATAType: public ::xml_schema::type
{
  public:
  // DATA_SET
  //
  typedef ::DATA_SETType DATA_SET_type;
  typedef ::xsd::cxx::tree::traits< DATA_SET_type, char > DATA_SET_traits;

  const DATA_SET_type&
  DATA_SET () const;

  DATA_SET_type&
  DATA_SET ();

  void
  DATA_SET (const DATA_SET_type& x);

  void
  DATA_SET (::std::auto_ptr< DATA_SET_type > p);

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

  // Constructors.
  //
  DATAType (const DATA_SET_type&);

  DATAType (::std::auto_ptr< DATA_SET_type >);

  DATAType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

  DATAType (const DATAType& x,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

  virtual DATAType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  DATAType&
  operator= (const DATAType& x);

  virtual 
  ~DATAType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< DATA_SET_type > DATA_SET_;
  IDENTIFIANT_optional IDENTIFIANT_;
};

class BDD_SYS_DATAType: public ::xml_schema::type
{
  public:
  // DATA
  //
  typedef ::DATAType DATA_type;
  typedef ::xsd::cxx::tree::traits< DATA_type, char > DATA_traits;

  const DATA_type&
  DATA () const;

  DATA_type&
  DATA ();

  void
  DATA (const DATA_type& x);

  void
  DATA (::std::auto_ptr< DATA_type > p);

  // Constructors.
  //
  BDD_SYS_DATAType (const DATA_type&);

  BDD_SYS_DATAType (::std::auto_ptr< DATA_type >);

  BDD_SYS_DATAType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  BDD_SYS_DATAType (const BDD_SYS_DATAType& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

  virtual BDD_SYS_DATAType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  BDD_SYS_DATAType&
  operator= (const BDD_SYS_DATAType& x);

  virtual 
  ~BDD_SYS_DATAType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< DATA_type > DATA_;
};

class MOTTypeINFO: public ::xml_schema::string
{
  public:
  enum value
  {
    Complement_ORDDRE,
    CRC
  };

  MOTTypeINFO (value v);

  MOTTypeINFO (const char* v);

  MOTTypeINFO (const ::std::string& v);

  MOTTypeINFO (const ::xml_schema::string& v);

  MOTTypeINFO (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeINFO (const ::xercesc::DOMAttr& a,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeINFO (const ::std::string& s,
               const ::xercesc::DOMElement* e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  MOTTypeINFO (const MOTTypeINFO& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  virtual MOTTypeINFO*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  MOTTypeINFO&
  operator= (value v);

  virtual
  operator value () const
  {
    return _xsd_MOTTypeINFO_convert ();
  }

  protected:
  value
  _xsd_MOTTypeINFO_convert () const;

  public:
  static const char* const _xsd_MOTTypeINFO_literals_[2];
  static const value _xsd_MOTTypeINFO_indexes_[2];
};

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

// Parse a URI or a local file.
//

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (const ::std::string& uri,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (const ::std::string& uri,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (const ::std::string& uri,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse std::istream.
//

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              const ::std::string& id,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              const ::std::string& id,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::std::istream& is,
              const ::std::string& id,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::InputSource.
//

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::xercesc::InputSource& is,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::xercesc::InputSource& is,
              ::xml_schema::error_handler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::xercesc::InputSource& is,
              ::xercesc::DOMErrorHandler& eh,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::DOMDocument.
//

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (const ::xercesc::DOMDocument& d,
              ::xml_schema::flags f = 0,
              const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::BDD_SYS_DATAType >
BDD_SYS_DATA (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
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
BDD_SYS_DATA (::std::ostream& os,
              const ::BDD_SYS_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_SYS_DATA (::std::ostream& os,
              const ::BDD_SYS_DATAType& x, 
              ::xml_schema::error_handler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_SYS_DATA (::std::ostream& os,
              const ::BDD_SYS_DATAType& x, 
              ::xercesc::DOMErrorHandler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

// Serialize to xercesc::XMLFormatTarget.
//

void
BDD_SYS_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_SYS_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_SYS_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_SYS_DATAType& x, 
              ::xml_schema::error_handler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

void
BDD_SYS_DATA (::xercesc::XMLFormatTarget& ft,
              const ::BDD_SYS_DATAType& x, 
              ::xercesc::DOMErrorHandler& eh,
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              const ::std::string& e = "UTF-8",
              ::xml_schema::flags f = 0);

// Serialize to an existing xercesc::DOMDocument.
//

void
BDD_SYS_DATA (::xercesc::DOMDocument& d,
              const ::BDD_SYS_DATAType& x,
              ::xml_schema::flags f = 0);

// Serialize to a new xercesc::DOMDocument.
//

::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
BDD_SYS_DATA (const ::BDD_SYS_DATAType& x, 
              const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
              ::xml_schema::flags f = 0);

void
operator<< (::xercesc::DOMElement&, const VALType&);

void
operator<< (::xercesc::DOMElement&, const VALUE_SETType&);

void
operator<< (::xercesc::DOMElement&, const DATA_INFOType&);

void
operator<< (::xercesc::DOMElement&, const WORD_SETType&);

void
operator<< (::xercesc::DOMElement&, const MOTType&);

void
operator<< (::xercesc::DOMElement&, const DATA_SETType&);

void
operator<< (::xercesc::DOMElement&, const DATAType&);

void
operator<< (::xercesc::DOMElement&, const BDD_SYS_DATAType&);

void
operator<< (::xercesc::DOMElement&, const MOTTypeINFO&);

void
operator<< (::xercesc::DOMAttr&, const MOTTypeINFO&);

void
operator<< (::xml_schema::list_stream&,
            const MOTTypeINFO&);

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // C__D_SAFRAN_STROMBOLI_SVN_STROMBOLI_XSD_CFG_DATA_VAL_HXX